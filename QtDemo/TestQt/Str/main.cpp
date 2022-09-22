#include <QtCore/QCoreApplication>

//字符串拼接
void pingjieStr()
{
    //获取ping地址
    QStringList strList = QStringList()
        << "wss://websocket-test.jiaoyoushow.com/ws"
        << "ws://websocket-test.jiaoyoushow.com/ws"
        << "https://h5-test.jiaoyoushow.com/"
        << "http://h5-test.jiaoyoushow.com/";

    QStringList result;
    QStringList startList = QStringList() << "wss://" << "ws://" << "http://" << "https://";
    for (auto site : strList)
    {
        for (auto startStr : startList)
        {
            if (site.startsWith(startStr))
            {
                result.append(site.mid(startStr.size(), site.indexOf("/", startStr.size()) - startStr.size()));
                break;
            }
        }
    }
}

char dec2hexCharX(short n) {
    if (0 <= n && n <= 9) {
        return char(short('0') + n);
    }
    else if (10 <= n && n <= 15) {
        return char(short('A') + n - 10);
    }
    else {
        return char(0);
    }
}

short hexChar2decX(char c) {
    if ('0' <= c && c <= '9') {
        return short(c - '0');
    }
    else if ('a' <= c && c <= 'f') {
        return (short(c - 'a') + 10);
    }
    else if ('A' <= c && c <= 'F') {
        return (short(c - 'A') + 10);
    }
    else {
        return -1;
    }
}


QString urlDecode(const QString &url)
{
    QString result;
    std::string _url = url.toStdString();
    for (unsigned int i = 0; i < _url.size(); i++)
    {
        char c = _url[i];
        if ((c != '%') || (i >= _url.size() - 2))
        {
            result += c;
        }
        else
        {
            char c1 = _url[i + 1];
            char c0 = _url[i + 2];
            if (-1 == hexChar2decX(c1) || -1 == hexChar2decX(c0))
            {
                result += c;
                continue;
            }
            int num = 0;
            num += hexChar2decX(c1) * 16 + hexChar2decX(c0);
            result += char(num);
            i += 2;
        }
    }
    return result;
}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString urlEncodeText = QByteArray::fromPercentEncoding("%E5%B8%85%E6%B0%94%E7%9A%84%E5%AF%92%E5%AF%92");
    return a.exec();
}
