/*
 * Label.h
 *
 * FIXME: 功能简要概述
 *
 * Created on: 2019年 4月 18日
 * Author: lixingcong
 */

#ifndef LABEL_H
#define LABEL_H

#include "Widget.h"

class Label : public Widget
{
	Q_OBJECT

public:
	explicit Label(QWidget *parent = nullptr);
};

#endif // LABEL_H
