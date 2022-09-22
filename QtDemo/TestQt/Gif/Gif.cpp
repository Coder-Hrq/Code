#include "Gif.h"
#include <QMovie>

Gif::Gif(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

	ui.label_gif->setScaledContents(true);
	ui.label_gif->setRadius(true, 15);
	QMovie *movie = new QMovie("image/lm.gif");
	//ui.label_gif->setMovie(movie);
	movie->start();
	ui.label_gif->setPixmap(QPixmap("D:/work/tmp/image/xxxy_bubble_2022-04-06_15-41-46.png"));
}
