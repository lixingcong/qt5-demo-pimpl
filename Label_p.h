/*
 * Label_p.h
 *
 * FIXME: 功能简要概述
 *
 * Created on: 2019年 4月 18日
 * Author: lixingcong
 */

#ifndef LABEL_P_H
#define LABEL_P_H

#include "Widget_p.h"
#include "Label.h"

class LabelPrivate : public WidgetPrivate
{
	Q_DECLARE_PUBLIC(Label)

public:
	LabelPrivate():WidgetPrivate()
	{
	}

	int dataB;
};

#endif // LABEL_P_H
