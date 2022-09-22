#pragma once

#include <QAbstractListModel>

class vMyModel : public QAbstractListModel
{
    Q_OBJECT

public:
    vMyModel(QObject *parent);
    ~vMyModel();

    void addValue(const int &value);

    //  model/view overrideº¯Êý
    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex & index, int role = Qt::DisplayRole) const;

private:
    QVector<int> m_listValue;
};
