#include "vMyDelegate.h"

vMyDelegate::vMyDelegate(QObject *parent)
    : QStyledItemDelegate(parent)
{
}

vMyDelegate::~vMyDelegate()
{
}

void vMyDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    return QStyledItemDelegate::paint(painter, option, index);
}
