#pragma once

#include <QQuickWindow>

class FramelessWindow : public QQuickWindow
{
    Q_OBJECT

    Q_PROPERTY(bool resizable READ resizable WRITE setResizable)
    Q_PROPERTY(int drag_area READ read_pan WRITE set_pan)

    enum MouseArea
    {
        TopLeft = 1,
        Top,
        TopRight,
        Left,
        Move,
        Right,
        BottomLeft,
        Bottom,
        BottomRight,
        Client
    };

public:
    explicit FramelessWindow(QWindow *parent = nullptr);
    int read_pan() const;
    void set_pan(int _pan);
    bool resizable() const;
    void setResizable(bool arg);

protected:
    void mousePressEvent(QMouseEvent *event) override;

    void mouseReleaseEvent(QMouseEvent *event) override;

    void mouseMoveEvent(QMouseEvent *event) override;


private:
    MouseArea getArea(const QPoint &pos);

    void setWindowGeometry(const QPoint &pos);

    void setCursorIcon();

    bool m_resizable = true;
    MouseArea m_currentArea = Client;
    QPoint m_startPos;
    QPoint m_oldPos;
    QSize m_oldSize;
    int pan = 8;
};
