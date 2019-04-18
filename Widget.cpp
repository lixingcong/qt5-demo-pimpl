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
	d_ptr->q_ptr=this; // must set value

	Q_D(Widget);

	qDebug("D=%d",d->data);
}

Widget::~Widget()
{
	delete d_ptr;
}

Widget::Widget(WidgetPrivate& d, QWidget* parent):QWidget(parent),
	d_ptr(&d)
{
	d_ptr->q_ptr=this; // must set value
}
