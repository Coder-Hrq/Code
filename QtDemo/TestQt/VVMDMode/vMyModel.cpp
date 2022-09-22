#include "vMyModel.h"

vMyModel::vMyModel(QObject *parent)
    : QAbstractListModel(parent)
{
}

vMyModel::~vMyModel()
{
}

void vMyModel::addValue(const int &value)
{
    m_listValue.append(value);
}

int vMyModel::rowCount(const QModelIndex &parent /*= QModelIndex()*/) const
{
    return m_listValue.size();
}


QVariant vMyModel::data(const QModelIndex & index, int role /*= Qt::DisplayRole*/) const
{
    return QVariant();
}
