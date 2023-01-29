#include "FramelessWindow.h"

#define         FRAME_ENABLE_LINE_WIDTH         10          //边框对鼠标有效宽度
#define         FRAME_ENABLE_ANGLE_WIDTH        15          //边框4个角对鼠标的有效宽度
#define         TOP_MOVE_TOOL_WIDTH             0           //上边可移动选中的宽度
#define         FRAME_MIN_WIDTH                 60          //窗口最小宽度
#define         FRAME_MIN_HEIGHE                60          //窗口最小高度

FramelessWindow::FramelessWindow(QWindow *parent) : QQuickWindow(parent)
, m_bPressed(false)
, m_qCurrentPoint(-1, -1)
, m_CursorPosType(CursorPosType::TYPE_NORMAL)
{
    setFlags(flags() | Qt::Window | Qt::FramelessWindowHint);
    m_dragFrame->setFlags(m_dragFrame->flags() | Qt::Window | Qt::FramelessWindowHint);
    setColor(QColor(Qt::transparent));
    installEventFilter(this);
}

bool FramelessWindow::isDraging() const
{
    return m_isDraging;
}

bool FramelessWindow::eventFilter(QObject *watched, QEvent *event)
{
    QMouseEvent* pMouseEvent = static_cast<QMouseEvent*>(event);
    if (nullptr != pMouseEvent)
    {
        if (watched == this && QMouseEvent::MouseButtonPress == pMouseEvent->type())
        {
            SetCurrentCursorPosType(GetCursorPosType());
            m_bPressed = true;
            m_isDraging = false;
            m_qCurrentPoint = QCursor::pos();
        }
        else if (watched == this && QMouseEvent::MouseButtonRelease == pMouseEvent->type())
        {
            m_bPressed = false;
            m_isDraging = false;
            m_dragFrame->hide();
            m_qCurrentPoint = QPoint(-1, -1);
            m_CursorPosType = CursorPosType::TYPE_NORMAL;
        }
        else if (false == m_bPressed && QMouseEvent::MouseMove == pMouseEvent->type())
        {
            CursorPosType CursorPosType = GetCursorPosType();
            UpdateCursorShape(CursorPosType);
        }

        if (CursorPosType::TYPE_MOVE_TOOL == m_CursorPosType
            && QMouseEvent::MouseMove == pMouseEvent->type())
        {
            m_qCurrentPoint = QCursor::pos();
            //move(pos() + (m_qCurrentPoint - m_qBeforePoint));
        }
        else if (CursorPosType::TYPE_NORMAL != m_CursorPosType
            && CursorPosType::TYPE_MOVE_TOOL != m_CursorPosType
            && QMouseEvent::MouseMove == pMouseEvent->type())
        {
            m_qCurrentPoint = QCursor::pos();
            AdjustSize(m_CursorPosType);
        }
    }
    return false;
}

FramelessWindow::CursorPosType FramelessWindow::GetCursorPosType()
{
    QRect rect = geometry();
    QPoint point = QCursor::pos();
    QRect rectLeftTop = QRect(rect.x(),
        rect.y(),
        FRAME_ENABLE_ANGLE_WIDTH,
        FRAME_ENABLE_ANGLE_WIDTH);

    QRect rectLeftBotton = QRect(rect.x(),
        rect.y() + rect.height() - FRAME_ENABLE_ANGLE_WIDTH,
        FRAME_ENABLE_ANGLE_WIDTH,
        FRAME_ENABLE_ANGLE_WIDTH);

    QRect rectRightBotton = QRect(rect.x() + rect.width() - FRAME_ENABLE_ANGLE_WIDTH,
        rect.y() + rect.height() - FRAME_ENABLE_ANGLE_WIDTH,
        FRAME_ENABLE_ANGLE_WIDTH,
        FRAME_ENABLE_ANGLE_WIDTH);

    QRect rectRightTop = QRect(rect.x() + rect.width() - FRAME_ENABLE_ANGLE_WIDTH,
        rect.y(),
        FRAME_ENABLE_ANGLE_WIDTH,
        FRAME_ENABLE_ANGLE_WIDTH);

    QRect rectTop = QRect(rect.x(),
        rect.y(),
        rect.width(),
        FRAME_ENABLE_LINE_WIDTH);

    QRect rectBotton = QRect(rect.x(),
        rect.y() + rect.height() - FRAME_ENABLE_LINE_WIDTH,
        rect.width(),
        FRAME_ENABLE_LINE_WIDTH);

    QRect rectLeft = QRect(rect.x(),
        rect.y(),
        FRAME_ENABLE_LINE_WIDTH,
        rect.height());

    QRect rectRight = QRect(rect.x() + rect.width() - FRAME_ENABLE_LINE_WIDTH,
        rect.y(),
        FRAME_ENABLE_LINE_WIDTH,
        rect.height());

    QRect rectMove = QRect(rect.x(),
        rect.y(),
        rect.width(),
        TOP_MOVE_TOOL_WIDTH);


    if (rectLeftTop.contains(point))
    {
        return CursorPosType::TYPE_LEFT_TOP_ANGLE;
    }
    else if (rectLeftBotton.contains(point))
    {
        return CursorPosType::TYPE_LEFT_BOTTON_ANGLE;
    }
    else if (rectRightBotton.contains(point))
    {
        return CursorPosType::TYPE_RIGHT_BOTTON_ANGLE;
    }
    else if (rectRightTop.contains(point))
    {
        return CursorPosType::TYPE_RIGHT_TOP_ANGLE;
    }
    else if (rectLeft.contains(point))
    {
        return CursorPosType::TYPE_LEFT_LINE;
    }
    else if (rectRight.contains(point))
    {
        return CursorPosType::TYPE_RIGHT_LINE;
    }
    else if (rectTop.contains(point))
    {
        return CursorPosType::TYPE_TOP_LINE;
    }
    else if (rectBotton.contains(point))
    {
        return CursorPosType::TYPE_BOTTON_LINE;
    }
    else if (rectMove.contains(point))
    {
        return CursorPosType::TYPE_MOVE_TOOL;
    }

    return CursorPosType::TYPE_NORMAL;
}

void FramelessWindow::SetCurrentCursorPosType(const CursorPosType &eType)
{
    m_CursorPosType = eType;
    UpdateCursorShape(m_CursorPosType);
}

void FramelessWindow::UpdateCursorShape(const CursorPosType &eType)
{
    switch (eType)
    {
    case CursorPosType::TYPE_NORMAL:
        setCursor(Qt::ArrowCursor);
        break;
    case CursorPosType::TYPE_MOVE_TOOL:
        setCursor(Qt::ArrowCursor);
        break;
    case CursorPosType::TYPE_LEFT_TOP_ANGLE:
    case CursorPosType::TYPE_RIGHT_BOTTON_ANGLE:
        setCursor(Qt::SizeFDiagCursor);
        break;
    case CursorPosType::TYPE_LEFT_BOTTON_ANGLE:
    case CursorPosType::TYPE_RIGHT_TOP_ANGLE:
        setCursor(Qt::SizeBDiagCursor);
        break;
    case CursorPosType::TYPE_TOP_LINE:
    case CursorPosType::TYPE_BOTTON_LINE:
        setCursor(Qt::SizeVerCursor);
        break;
    case CursorPosType::TYPE_LEFT_LINE:
    case CursorPosType::TYPE_RIGHT_LINE:
        setCursor(Qt::SizeHorCursor);
        break;
    }
}

void FramelessWindow::AdjustSize(const CursorPosType &eType)
{
    if (m_qCurrentPoint == QPoint(-1, -1)
        || m_qBeforePoint == m_qCurrentPoint)
    {
        return;
    }
    QRect rect = geometry();
    switch (eType)
    {
    case CursorPosType::TYPE_LEFT_TOP_ANGLE:
        rect.adjust(m_qCurrentPoint.x() - x(), m_qCurrentPoint.y() - y(), 0, 0);
        break;
    case CursorPosType::TYPE_LEFT_BOTTON_ANGLE:
        rect.adjust(m_qCurrentPoint.x() - x(), 0, 0, m_qCurrentPoint.y() - (y() + height()));
        break;
    case CursorPosType::TYPE_RIGHT_TOP_ANGLE:
        rect.adjust(0, m_qCurrentPoint.y() - y(), m_qCurrentPoint.x() - (x() + width()), 0);
        break;
    case CursorPosType::TYPE_RIGHT_BOTTON_ANGLE:
        rect.adjust(0, 0, m_qCurrentPoint.x() - (x() + width()), m_qCurrentPoint.y() - (y() + height()));
        break;
    case CursorPosType::TYPE_LEFT_LINE:
        rect.adjust(m_qCurrentPoint.x() - x(), 0, 0, 0);
        break;
    case CursorPosType::TYPE_RIGHT_LINE:
        rect.adjust(0, 0, m_qCurrentPoint.x() - (x() + width()), 0);
        break;
    case CursorPosType::TYPE_TOP_LINE:
        rect.adjust(0, m_qCurrentPoint.y() - y(), 0, 0);
        break;
    case CursorPosType::TYPE_BOTTON_LINE:
        rect.adjust(0, 0, 0, m_qCurrentPoint.y() - (y() + height()));
        break;
    }
    m_qBeforePoint = m_qCurrentPoint;

    if (rect.width() < FRAME_MIN_WIDTH
        || rect.height() < FRAME_MIN_HEIGHE)
    {
        return;
    }
    setGeometry(rect);

    m_dragFrame->setGeometry(rect);
    //m_dragFrame->show();
    raise();

    if (!m_isDraging)
        m_isDraging = true;
}


