/*
 * Widget_p.h
 *
 * FIXME: 功能简要概述
 *
 * Created on: 2019年 4月 18日
 * Author: lixingcong
 */

#ifndef WIDGET_P_H
#define WIDGET_P_H

#include "Widget.h"

class WidgetPrivate
{
	Q_DECLARE_PUBLIC(Widget)
public:
	WidgetPrivate(): // no argument for constructor
		data(1),
		q_ptr(nullptr)
	{
	}

	int data;
protected:
	Widget *q_ptr; // q-ptr needs to be initialized
};

#endif // WIDGET_P_H
