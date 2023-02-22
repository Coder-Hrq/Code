#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QDebug>
#include <QFileSystemModel>


class DisplayFileSystemModel : public QFileSystemModel {
    Q_OBJECT
public:
    explicit DisplayFileSystemModel(QObject *parent = nullptr)
        : QFileSystemModel(parent) {}

    enum Roles  {
        WidgetName = Qt::UserRole + 4,
    };
    Q_ENUM(Roles)

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override
    {
        if (index.isValid() && role >= WidgetName) {
            switch (role) {
            case WidgetName:
            {
                QString customItem = index.data().toString();
                return QVariant(customItem.endsWith(".qml") ? QString("Q%1").arg(customItem.mid(1, customItem.length() - 5)): "");
            }
            default:
                break;
            }
        }
        return QFileSystemModel::data(index, role);
    }

    QHash<int,QByteArray> roleNames() const override
    {
         QHash<int, QByteArray> result = QFileSystemModel::roleNames();
         result.insert(WidgetName, QByteArrayLiteral("widgetName"));
         return result;
    }
};


int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    qmlRegisterUncreatableType<DisplayFileSystemModel>("io.qt.examples.quick.controls.DisplayFileSystemModel", 1, 0,
                                                       "FileSystemModel", "Cannot create a FileSystemModel instance.");

    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    DisplayFileSystemModel customFileModel(&engine);
    qInfo() << "path" <<QDir("D:/work/src/github/Code/QtDemo/qml/CustomItem/CustonItem").path();
    customFileModel.setRootPath(QDir("D:/work/src/github/Code/QtDemo/qml/CustomItem/CustonItem").path());
    engine.rootContext()->setContextProperty("customFileModel", &customFileModel);
    engine.rootContext()->setContextProperty("rootPathIndex", customFileModel.index(customFileModel.rootPath()));
    engine.load(url);


    return app.exec();
}

#include "main.moc"
