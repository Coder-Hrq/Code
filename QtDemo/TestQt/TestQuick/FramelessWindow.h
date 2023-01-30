#pragma once

#include <QQuickWindow>
#include <QQuickView>

class FramelessWindow : public QQuickWindow
{
    Q_OBJECT

    Q_PROPERTY(bool isDraging READ isDraging)

    enum CursorPosType//���λ������
    {
        TYPE_NORMAL = 0,
        TYPE_TOP_LINE,                  //�ϱ�λ��
        TYPE_BOTTON_LINE,               //�±�λ��
        TYPE_LEFT_LINE,                 //���λ��
        TYPE_RIGHT_LINE,                //�ұ�λ��
        TYPE_LEFT_TOP_ANGLE,            //���Ͻ�λ��
        TYPE_LEFT_BOTTON_ANGLE,         //���½�λ��
        TYPE_RIGHT_TOP_ANGLE,           //���Ͻ�λ��
        TYPE_RIGHT_BOTTON_ANGLE,        //���½�λ��
        TYPE_MOVE_TOOL                  //�ƶ�λ��
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
