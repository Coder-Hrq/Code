#pragma once

#include <QQuickWindow>
#include <QQuickView>

class FramelessWindow : public QQuickWindow
{
    Q_OBJECT

    Q_PROPERTY(bool isDraging READ isDraging)

    enum CursorPosType//鼠标位置类型
    {
        TYPE_NORMAL = 0,
        TYPE_TOP_LINE,                  //上边位置
        TYPE_BOTTON_LINE,               //下边位置
        TYPE_LEFT_LINE,                 //左边位置
        TYPE_RIGHT_LINE,                //右边位置
        TYPE_LEFT_TOP_ANGLE,            //左上角位置
        TYPE_LEFT_BOTTON_ANGLE,         //左下角位置
        TYPE_RIGHT_TOP_ANGLE,           //右上角位置
        TYPE_RIGHT_BOTTON_ANGLE,        //右下角位置
        TYPE_MOVE_TOOL                  //移动位置
    };

public:
    explicit FramelessWindow(QWindow *parent = nullptr);
    bool isDraging() const;

protected:
    bool eventFilter(QObject *watched, QEvent *event)override;

signals:
    void sigRect(QRect rect);
    void sigChangeRect(QRect rect);

private:
    CursorPosType       GetCursorPosType();
    void                SetCurrentCursorPosType(const CursorPosType &eType);
    void                UpdateCursorShape(const CursorPosType &eType);
    void                AdjustSize(const CursorPosType &eType);

private:
    bool                m_bPressed = false;  
    bool                m_isDraging = false;
    QPoint              m_qBeforePoint;
    QPoint              m_qCurrentPoint;
    CursorPosType       m_CursorPosType;
    QQuickView          *m_dragFrame;
    QRect               m_curRect;
};
