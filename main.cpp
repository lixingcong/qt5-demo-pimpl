/*
 * main.cpp
 *
 * FIXME: 功能简要概述
 *
 * Created on: 2019年 4月 18日
 * Author: lixingcong
 */

#include "Widget.h"
#include "Label.h"
#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Widget w;
	w.show();

	Label l;
	l.show();

	return a.exec();
}
