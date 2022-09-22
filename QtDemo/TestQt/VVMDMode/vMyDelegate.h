#pragma once

#include <QStyledItemDelegate>

class vMyDelegate : public QStyledItemDelegate
{
    Q_OBJECT

public:
    vMyDelegate(QObject *parent);
    ~vMyDelegate();

protected:
    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
};
