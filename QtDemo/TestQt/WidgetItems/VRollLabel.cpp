#include "VRollLabel.h"
#include <QPainter>
#include <QPointer>
#include <QDebug>

VRollLabel::VRollLabel(QWidget *parent)
    : QLabel(parent)
{
    ui.setupUi(this);
    QPointer<QObject> obj(this);
    connect(&m_timer, &QTimer::timeout, [this, obj] {
        if (obj.isNull())
            return;
        if ((rect().x() - m_rectText.x()) > m_textWidth - rect().width() + 30)
        {
            m_rectText = rect();
            repaint();
            m_timer.stop();
            QTimer::singleShot(700, [=] {
                check();
            });
        }
        else
        {
            m_rectText.adjust(-2, 0, 0, 0);
            repaint();
        }
    });
}

VRollLabel::~VRollLabel()
{
    m_timer.stop();
}

void VRollLabel::setText(const QString &str)
{
    QLabel::setText(str);
    m_rectText = rect();
    check();
}

void VRollLabel::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawText(m_rectText, Qt::AlignVCenter, text());//根据给定的矩形坐标，绘制文本
}

void VRollLabel::showEvent(QShowEvent *event)
{
    m_rectText = rect();
    check();
    return QLabel::showEvent(event);
}

void VRollLabel::check()
{
    QFontMetrics fm = this->fontMetrics();
    m_textWidth = fm.width(text());
    if (!isVisible())
    {
        if (m_timer.isActive())
        {
            m_timer.stop();
        }
        return;
    }
    if (m_textWidth > width())
    {
        if (!m_timer.isActive())
        {
            m_timer.start(100);
        }
    }
    else
    {
        if (m_timer.isActive())
        {
            m_timer.stop();
        }
    }
}

