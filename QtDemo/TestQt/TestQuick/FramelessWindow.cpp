#include "FramelessWindow.h"

FramelessWindow::FramelessWindow(QWindow *parent) : QQuickWindow(parent)
{
    setFlags(flags() | Qt::Window | Qt::FramelessWindowHint);
    setColor(QColor(Qt::transparent));
}

bool FramelessWindow::resizable() const
{
    return m_resizable;
}


void FramelessWindow::setResizable(bool arg)
{
    if (m_resizable != arg)
    {
        m_resizable = arg;
    }
}

void FramelessWindow::mousePressEvent(QMouseEvent *event)
{
    m_startPos = event->globalPos();
    m_oldPos = position();
    m_oldSize = size();

    event->ignore();

    QQuickWindow::mousePressEvent(event);
}

void FramelessWindow::mouseReleaseEvent(QMouseEvent *event)
{
    m_oldPos = position();

    QQuickWindow::mouseReleaseEvent(event);
}


void FramelessWindow::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton)
    {
        if (m_resizable && m_currentArea != Move)
        {
            setWindowGeometry(event->globalPos());
        }
    }
    else
    {
        QPoint pos = event->pos();
        m_currentArea = getArea(pos);
        if (m_resizable)
            setCursorIcon();
    }

    QQuickWindow::mouseMoveEvent(event);
}

FramelessWindow::MouseArea FramelessWindow::getArea(const QPoint &pos)
{
    int x = pos.x();
    int y = pos.y();
    int w = width();
    int h = height();
    MouseArea area;
    if (x >= 0 && x <= pan && y >= 0 && y <= pan)
    {
        area = TopLeft;
    }
    else if (x > pan && x < (w - pan) && y >= 0 && y <= pan)
    {
        area = Top;
    }
    else if (x >= (w - pan) && x <= w && y >= 0 && y <= pan)
    {
        area = TopRight;
    }
    else if (x >= 0 && x <= pan && y > pan && y < (h - pan))
    {
        area = Left;
    }
    else if (x >= (w - pan) && x <= w && y > pan && y < (h - pan))
    {
        area = Right;
    }
    else if (x >= 0 && x <= pan && y >= (h - pan) && y <= h)
    {
        area = BottomLeft;
    }
    else if (x > pan && x < (w - pan) && y >= (h - pan) && y <= h)
    {
        area = Bottom;
    }
    else if (x >= (w - pan) && x <= w && y >= (h - pan) && y <= h)
    {
        area = BottomRight;
    }
    else
    {
        area = Client;
    }

    return area;
}
int FramelessWindow::read_pan() const {
    return pan;
}

void FramelessWindow::set_pan(int _pan) {
    pan = _pan;
}
void FramelessWindow::setWindowGeometry(const QPoint &pos)
{
    QPoint offset = m_startPos - pos;

    if (offset.x() == 0 && offset.y() == 0)
        return;

    static auto set_geometry_func = [this](const QSize &size, const QPoint &pos) {
        QPoint temp_pos = m_oldPos;
        QSize temp_size = minimumSize();
        if (size.width() > minimumWidth())
        {
            temp_pos.setX(pos.x());
            temp_size.setWidth(size.width());
        }
        else
        {
            if (m_currentArea == Left)
            {
                temp_pos.setX(m_oldPos.x() + m_oldSize.width() - minimumWidth());
            }

        }
        if (size.height() > minimumHeight())
        {
            temp_pos.setY(pos.y());
            temp_size.setHeight(size.height());
        }
        else
        {
            if (m_currentArea == Top)
                temp_pos.setY(m_oldPos.y() + m_oldSize.height() - minimumHeight());
        }
        setGeometry(QRect(temp_pos, temp_size));
        update();
    };

    switch (m_currentArea)
    {
    case TopLeft:set_geometry_func(m_oldSize + QSize(offset.x(), offset.y()), m_oldPos - offset);
        break;
    case Top:set_geometry_func(m_oldSize + QSize(0, offset.y()), m_oldPos - QPoint(0, offset.y()));
        break;
    case TopRight:set_geometry_func(m_oldSize - QSize(offset.x(), -offset.y()), m_oldPos - QPoint(0, offset.y()));
        break;
    case Left:set_geometry_func(m_oldSize + QSize(offset.x(), 0), m_oldPos - QPoint(offset.x(), 0));;
        break;
    case Right:set_geometry_func(m_oldSize - QSize(offset.x(), 0), position());
        break;
    case BottomLeft:set_geometry_func(m_oldSize + QSize(offset.x(), -offset.y()), m_oldPos - QPoint(offset.x(), 0));
        break;
    case Bottom:set_geometry_func(m_oldSize + QSize(0, -offset.y()), position());
        break;
    case BottomRight:set_geometry_func(m_oldSize - QSize(offset.x(), offset.y()), position());
        break;
    default:break;
    }
}

void FramelessWindow::setCursorIcon()
{
    static bool unset = false;

    switch (m_currentArea)
    {
    case TopLeft:
    case BottomRight:unset = true;
        setCursor(Qt::SizeFDiagCursor);
        break;
    case Top:
    case Bottom:unset = true;
        setCursor(Qt::SizeVerCursor);
        break;
    case TopRight:
    case BottomLeft:unset = true;
        setCursor(Qt::SizeBDiagCursor);
        break;
    case Left:
    case Right:unset = true;
        setCursor(Qt::SizeHorCursor);
        break;

    default:
        if (unset)
        {
            unset = false;
            unsetCursor();
        }
        break;
    }
}

