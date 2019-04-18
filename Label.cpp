/*
 * Label.cpp
 *
 * FIXME: 功能简要概述
 *
 * Created on: 2019年 4月 18日
 * Author: lixingcong
 */

#include "Label.h"
#include "Label_p.h"

Label::Label(QWidget *parent) : Widget(*new LabelPrivate, parent)
{
	auto d=static_cast<LabelPrivate*>(d_func());

	qDebug("Label Data=%d",d->dataB);
}
