/*
 * Widget.cpp
 *
 * FIXME: 功能简要概述
 *
 * Created on: 2019年 4月 18日
 * Author: lixingcong
 */

#include "Widget.h"
#include "Widget_p.h"

Widget::Widget(QWidget *parent)
	: QWidget(parent),
	  d_ptr(new WidgetPrivate)
{
	Q_D(Widget);
	d->q_ptr=this; // must set value

	qDebug("Widget Data=%d",d->data);
	d->printWidget();
}

Widget::~Widget()
{
	delete d_ptr;
}

void Widget::printWidget()
{
	qDebug("Widget!");
}

Widget::Widget(WidgetPrivate& dd, QWidget* parent):QWidget(parent),
	d_ptr(&dd)
{
	Q_D(Widget);
	d->q_ptr=this; // must set value
}
