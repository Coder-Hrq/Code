#include <QtCore/QCoreApplication>
#include <QDebug>
#include <QSettings>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonValue>



struct MyStruct
{
	int id;
	QString path;
	QString url;
};

Q_DECLARE_METATYPE(MyStruct);

void VariantTest()
{

	QVariant var = QVariant();
	qDebug() << "QVariant() is null:" << var.isNull();
	qDebug() << "QVariant() is valid:" << var.isValid();

	var = 1;
	qDebug() << "var:" << var;
	var = QVariant::fromValue(MyStruct());
	qDebug() << "var:" << var;

	auto stu = var.value<MyStruct>();
	qDebug() << stu.id;
}

void SettingTest()
{
	QSettings setting("temp.ini", QSettings::IniFormat);

	setting.beginGroup("gourpCode");
	for (int i = 0; i < 10; ++i)
	{
		setting.setValue(QString("%1").arg(i), true);
	}
	setting.endGroup();

	setting.beginGroup("gourpCode");
	QStringList keyList = setting.childKeys();
	for(auto id: keyList) {
		qDebug() << id;
	}
	setting.endGroup();
}

void JsonTest()
{
	QJsonDocument doc = QJsonDocument::fromJson(QStringLiteral("{\"keys\":[\"word\"],\"values\":[[\"群组欢迎词~~~1\"],[\"群组欢迎词~~~1\"],[\"群组欢迎词~~~2\"],[\"群组欢迎词~~~3\"]]}").toUtf8());
	if (doc.isObject())
	{
		auto obj = doc.object();
		if (obj.contains("values"))
		{
			auto arr = obj.value("values").toArray();
			for (auto obj1 : arr)
			{
				for (auto str : obj1.toArray())
				{
					qDebug() << str.toString();
				}
			}
		}
	}
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

	//VariantTest();

	//SettingTest();

	JsonTest();

    return a.exec();
}
