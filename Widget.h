/*
 * Widget.h
 *
 * FIXME: 功能简要概述
 *
 * Created on: 2019年 4月 18日
 * Author: lixingcong
 */

#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class WidgetPrivate;

class Widget : public QWidget
{
	Q_OBJECT

public:
	Widget(QWidget *parent = 0);
	~Widget();

protected:
	Widget(WidgetPrivate &d, QWidget *parent = 0);
	WidgetPrivate* d_ptr;
	Q_DECLARE_PRIVATE(Widget)
};

#endif // WIDGET_H
