/*
  This file is part of KDDockWidgets.

  SPDX-FileCopyrightText: 2019-2022 Klarälvdalens Datakonsult AB, a KDAB Group company <info@kdab.com>
  Author: Sérgio Martins <sergio.martins@kdab.com>

  SPDX-License-Identifier: GPL-2.0-only OR GPL-3.0-only

  Contact KDAB at <info@kdab.com> for commercial licensing options.
*/
#include <stdbool.h>
#include <QtCore/qglobal.h>


// tag=1067
//  QString::QString()
void *c_QString__constructor();

// tag=1067
//  QString::append(const QString & s)
void *c_QString__append_QString(void *thisObj, const char *s_);

// tag=1067
//  QString::arg(const QString & a, int fieldWidth) const
void *c_QString__arg_QString_int(void *thisObj, const char *a_, int fieldWidth);

// tag=1067
//  QString::arg(const QString & a1, const QString & a2) const
void *c_QString__arg_QString_QString(void *thisObj, const char *a1_, const char *a2_);

// tag=1067
//  QString::arg(const QString & a1, const QString & a2, const QString & a3) const
void *c_QString__arg_QString_QString_QString(void *thisObj, const char *a1_, const char *a2_, const char *a3_);

// tag=1067
//  QString::arg(const QString & a1, const QString & a2, const QString & a3, const QString & a4) const
void *c_QString__arg_QString_QString_QString_QString(void *thisObj, const char *a1_, const char *a2_, const char *a3_, const char *a4_);

// tag=1067
//  QString::arg(const QString & a1, const QString & a2, const QString & a3, const QString & a4, const QString & a5) const
void *c_QString__arg_QString_QString_QString_QString_QString(void *thisObj, const char *a1_, const char *a2_, const char *a3_, const char *a4_, const char *a5_);

// tag=1067
//  QString::arg(const QString & a1, const QString & a2, const QString & a3, const QString & a4, const QString & a5, const QString & a6) const
void *c_QString__arg_QString_QString_QString_QString_QString_QString(void *thisObj, const char *a1_, const char *a2_, const char *a3_, const char *a4_, const char *a5_, const char *a6_);

// tag=1067
//  QString::arg(const QString & a1, const QString & a2, const QString & a3, const QString & a4, const QString & a5, const QString & a6, const QString & a7) const
void *c_QString__arg_QString_QString_QString_QString_QString_QString_QString(void *thisObj, const char *a1_, const char *a2_, const char *a3_, const char *a4_, const char *a5_, const char *a6_, const char *a7_);

// tag=1067
//  QString::arg(const QString & a1, const QString & a2, const QString & a3, const QString & a4, const QString & a5, const QString & a6, const QString & a7, const QString & a8) const
void *c_QString__arg_QString_QString_QString_QString_QString_QString_QString_QString(void *thisObj, const char *a1_, const char *a2_, const char *a3_, const char *a4_, const char *a5_, const char *a6_, const char *a7_, const char *a8_);

// tag=1067
//  QString::arg(const QString & a1, const QString & a2, const QString & a3, const QString & a4, const QString & a5, const QString & a6, const QString & a7, const QString & a8, const QString & a9) const
void *c_QString__arg_QString_QString_QString_QString_QString_QString_QString_QString_QString(void *thisObj, const char *a1_, const char *a2_, const char *a3_, const char *a4_, const char *a5_, const char *a6_, const char *a7_, const char *a8_, const char *a9_);

// tag=1067
//  QString::arg(int a, int fieldWidth, int base) const
void *c_QString__arg_int_int_int(void *thisObj, int a, int fieldWidth, int base);

// tag=1067
//  QString::arg(long a, int fieldwidth, int base) const
void *c_QString__arg_long_int_int(void *thisObj, long a, int fieldwidth, int base);

// tag=1067
//  QString::arg(qint64 a, int fieldwidth, int base) const
void *c_QString__arg_qint64_int_int(void *thisObj, qint64 a, int fieldwidth, int base);

// tag=1067
//  QString::arg(short a, int fieldWidth, int base) const
void *c_QString__arg_short_int_int(void *thisObj, short a, int fieldWidth, int base);

// tag=1067
//  QString::asprintf(const char * format)
void *c_static_QString__asprintf_char(const char *format);

// tag=1067
//  QString::capacity() const
int c_QString__capacity(void *thisObj);

// tag=1067
//  QString::chop(int n)
void c_QString__chop_int(void *thisObj, int n);

// tag=1067
//  QString::chopped(int n) const
void *c_QString__chopped_int(void *thisObj, int n);

// tag=1067
//  QString::clear()
void c_QString__clear(void *thisObj);

// tag=1067
//  QString::compare(const QString & s) const
int c_QString__compare_QString(void *thisObj, const char *s_);

// tag=1067
//  QString::compare(const QString & s1, const QString & s2)
int c_static_QString__compare_QString_QString(const char *s1_, const char *s2_);

// tag=1067
//  QString::contains(const QString & s) const
bool c_QString__contains_QString(void *thisObj, const char *s_);

// tag=1067
//  QString::count() const
int c_QString__count(void *thisObj);

// tag=1067
//  QString::count(const QString & s) const
int c_QString__count_QString(void *thisObj, const char *s_);

// tag=1067
//  QString::detach()
void c_QString__detach(void *thisObj);

// tag=1067
//  QString::endsWith(const QString & s) const
bool c_QString__endsWith_QString(void *thisObj, const char *s_);

// tag=1067
//  QString::fromLatin1(const QByteArray & str)
void *c_static_QString__fromLatin1_QByteArray(void *str_);

// tag=1067
//  QString::fromLatin1(const char * str, int size)
void *c_static_QString__fromLatin1_char_int(const char *str, int size);

// tag=1067
//  QString::fromLocal8Bit(const QByteArray & str)
void *c_static_QString__fromLocal8Bit_QByteArray(void *str_);

// tag=1067
//  QString::fromLocal8Bit(const char * str, int size)
void *c_static_QString__fromLocal8Bit_char_int(const char *str, int size);

// tag=1067
//  QString::fromUtf8(const QByteArray & str)
void *c_static_QString__fromUtf8_QByteArray(void *str_);

// tag=1067
//  QString::fromUtf8(const char * str, int size)
void *c_static_QString__fromUtf8_char_int(const char *str, int size);

// tag=1067
//  QString::indexOf(const QString & s, int from) const
int c_QString__indexOf_QString_int(void *thisObj, const char *s_, int from);

// tag=1067
//  QString::insert(int i, const QString & s)
void *c_QString__insert_int_QString(void *thisObj, int i, const char *s_);

// tag=1067
//  QString::isDetached() const
bool c_QString__isDetached(void *thisObj);

// tag=1067
//  QString::isEmpty() const
bool c_QString__isEmpty(void *thisObj);

// tag=1067
//  QString::isLower() const
bool c_QString__isLower(void *thisObj);

// tag=1067
//  QString::isNull() const
bool c_QString__isNull(void *thisObj);

// tag=1067
//  QString::isRightToLeft() const
bool c_QString__isRightToLeft(void *thisObj);

// tag=1067
//  QString::isSharedWith(const QString & other) const
bool c_QString__isSharedWith_QString(void *thisObj, const char *other_);

// tag=1067
//  QString::isSimpleText() const
bool c_QString__isSimpleText(void *thisObj);

// tag=1067
//  QString::isUpper() const
bool c_QString__isUpper(void *thisObj);

// tag=1067
//  QString::isValidUtf16() const
bool c_QString__isValidUtf16(void *thisObj);

// tag=1067
//  QString::lastIndexOf(const QString & s, int from) const
int c_QString__lastIndexOf_QString_int(void *thisObj, const char *s_, int from);

// tag=1067
//  QString::left(int n) const
void *c_QString__left_int(void *thisObj, int n);

// tag=1067
//  QString::leftJustified(int width) const
void *c_QString__leftJustified_int(void *thisObj, int width);

// tag=1067
//  QString::length() const
int c_QString__length(void *thisObj);

// tag=1067
//  QString::localeAwareCompare(const QString & s) const
int c_QString__localeAwareCompare_QString(void *thisObj, const char *s_);

// tag=1067
//  QString::localeAwareCompare(const QString & s1, const QString & s2)
int c_static_QString__localeAwareCompare_QString_QString(const char *s1_, const char *s2_);

// tag=1067
//  QString::mid(int position, int n) const
void *c_QString__mid_int_int(void *thisObj, int position, int n);

// tag=1067
//  QString::number(int arg__1, int base)
void *c_static_QString__number_int_int(int arg__1, int base);

// tag=1067
//  QString::number(long arg__1, int base)
void *c_static_QString__number_long_int(long arg__1, int base);

// tag=1067
//  QString::number(qint64 arg__1, int base)
void *c_static_QString__number_qint64_int(qint64 arg__1, int base);

// tag=1067
//  QString::prepend(const QString & s)
void *c_QString__prepend_QString(void *thisObj, const char *s_);

// tag=1067
//  QString::push_back(const QString & s)
void c_QString__push_back_QString(void *thisObj, const char *s_);

// tag=1067
//  QString::push_front(const QString & s)
void c_QString__push_front_QString(void *thisObj, const char *s_);

// tag=1067
//  QString::remove(const QString & s)
void *c_QString__remove_QString(void *thisObj, const char *s_);

// tag=1067
//  QString::remove(int i, int len)
void *c_QString__remove_int_int(void *thisObj, int i, int len);

// tag=1067
//  QString::repeated(int times) const
void *c_QString__repeated_int(void *thisObj, int times);

// tag=1067
//  QString::replace(const QString & before, const QString & after)
void *c_QString__replace_QString_QString(void *thisObj, const char *before_, const char *after_);

// tag=1067
//  QString::replace(int i, int len, const QString & after)
void *c_QString__replace_int_int_QString(void *thisObj, int i, int len, const char *after_);

// tag=1067
//  QString::reserve(int size)
void c_QString__reserve_int(void *thisObj, int size);

// tag=1067
//  QString::resize(int size)
void c_QString__resize_int(void *thisObj, int size);

// tag=1067
//  QString::right(int n) const
void *c_QString__right_int(void *thisObj, int n);

// tag=1067
//  QString::rightJustified(int width) const
void *c_QString__rightJustified_int(void *thisObj, int width);

// tag=1067
//  QString::section(const QString & in_sep, int start, int end) const
void *c_QString__section_QString_int_int(void *thisObj, const char *in_sep_, int start, int end);

// tag=1067
//  QString::setNum(int arg__1, int base)
void *c_QString__setNum_int_int(void *thisObj, int arg__1, int base);

// tag=1067
//  QString::setNum(long arg__1, int base)
void *c_QString__setNum_long_int(void *thisObj, long arg__1, int base);

// tag=1067
//  QString::setNum(qint64 arg__1, int base)
void *c_QString__setNum_qint64_int(void *thisObj, qint64 arg__1, int base);

// tag=1067
//  QString::setNum(short arg__1, int base)
void *c_QString__setNum_short_int(void *thisObj, short arg__1, int base);

// tag=1067
//  QString::shrink_to_fit()
void c_QString__shrink_to_fit(void *thisObj);

// tag=1067
//  QString::simplified()
void *c_QString__simplified(void *thisObj);

// tag=1067
//  QString::size() const
int c_QString__size(void *thisObj);

// tag=1067
//  QString::squeeze()
void c_QString__squeeze(void *thisObj);

// tag=1067
//  QString::startsWith(const QString & s) const
bool c_QString__startsWith_QString(void *thisObj, const char *s_);

// tag=1067
//  QString::toCaseFolded()
void *c_QString__toCaseFolded(void *thisObj);

// tag=1067
//  QString::toHtmlEscaped() const
void *c_QString__toHtmlEscaped(void *thisObj);

// tag=1067
//  QString::toLatin1()
void *c_QString__toLatin1(void *thisObj);

// tag=1067
//  QString::toLocal8Bit()
void *c_QString__toLocal8Bit(void *thisObj);

// tag=1067
//  QString::toLower()
void *c_QString__toLower(void *thisObj);

// tag=1067
//  QString::toUpper()
void *c_QString__toUpper(void *thisObj);

// tag=1067
//  QString::toUtf8()
void *c_QString__toUtf8(void *thisObj);

// tag=1067
//  QString::trimmed()
void *c_QString__trimmed(void *thisObj);

// tag=1067
//  QString::truncate(int pos)
void c_QString__truncate_int(void *thisObj, int pos);

// tag=1066
void c_QString__destructor(void *thisObj);

// tag=1047
void c_QString_Finalizer(void *, void *cppObj, void *);
// tag=1067
//  QSize::QSize()
void *c_QSize__constructor();

// tag=1067
//  QSize::QSize(int w, int h)
void *c_QSize__constructor_int_int(int w, int h);

// tag=1067
//  QSize::boundedTo(const QSize & arg__1) const
void *c_QSize__boundedTo_QSize(void *thisObj, void *arg__1_);

// tag=1067
//  QSize::expandedTo(const QSize & arg__1) const
void *c_QSize__expandedTo_QSize(void *thisObj, void *arg__1_);

// tag=1067
//  QSize::height() const
int c_QSize__height(void *thisObj);

// tag=1067
//  QSize::isEmpty() const
bool c_QSize__isEmpty(void *thisObj);

// tag=1067
//  QSize::isNull() const
bool c_QSize__isNull(void *thisObj);

// tag=1067
//  QSize::isValid() const
bool c_QSize__isValid(void *thisObj);

// tag=1067
//  QSize::setHeight(int h)
void c_QSize__setHeight_int(void *thisObj, int h);

// tag=1067
//  QSize::setWidth(int w)
void c_QSize__setWidth_int(void *thisObj, int w);

// tag=1067
//  QSize::transpose()
void c_QSize__transpose(void *thisObj);

// tag=1067
//  QSize::transposed() const
void *c_QSize__transposed(void *thisObj);

// tag=1067
//  QSize::width() const
int c_QSize__width(void *thisObj);

// tag=1066
void c_QSize__destructor(void *thisObj);

// tag=1047
void c_QSize_Finalizer(void *, void *cppObj, void *);
// tag=1067
//  QRect::QRect()
void *c_QRect__constructor();

// tag=1067
//  QRect::QRect(const QPoint & topleft, const QPoint & bottomright)
void *c_QRect__constructor_QPoint_QPoint(void *topleft_, void *bottomright_);

// tag=1067
//  QRect::QRect(const QPoint & topleft, const QSize & size)
void *c_QRect__constructor_QPoint_QSize(void *topleft_, void *size_);

// tag=1067
//  QRect::QRect(int left, int top, int width, int height)
void *c_QRect__constructor_int_int_int_int(int left, int top, int width, int height);

// tag=1067
//  QRect::adjust(int x1, int y1, int x2, int y2)
void c_QRect__adjust_int_int_int_int(void *thisObj, int x1, int y1, int x2, int y2);

// tag=1067
//  QRect::adjusted(int x1, int y1, int x2, int y2) const
void *c_QRect__adjusted_int_int_int_int(void *thisObj, int x1, int y1, int x2, int y2);

// tag=1067
//  QRect::bottom() const
int c_QRect__bottom(void *thisObj);

// tag=1067
//  QRect::bottomLeft() const
void *c_QRect__bottomLeft(void *thisObj);

// tag=1067
//  QRect::bottomRight() const
void *c_QRect__bottomRight(void *thisObj);

// tag=1067
//  QRect::center() const
void *c_QRect__center(void *thisObj);

// tag=1067
//  QRect::contains(const QPoint & p, bool proper) const
bool c_QRect__contains_QPoint_bool(void *thisObj, void *p_, bool proper);

// tag=1067
//  QRect::contains(const QRect & r, bool proper) const
bool c_QRect__contains_QRect_bool(void *thisObj, void *r_, bool proper);

// tag=1067
//  QRect::contains(int x, int y) const
bool c_QRect__contains_int_int(void *thisObj, int x, int y);

// tag=1067
//  QRect::contains(int x, int y, bool proper) const
bool c_QRect__contains_int_int_bool(void *thisObj, int x, int y, bool proper);

// tag=1067
//  QRect::height() const
int c_QRect__height(void *thisObj);

// tag=1067
//  QRect::intersected(const QRect & other) const
void *c_QRect__intersected_QRect(void *thisObj, void *other_);

// tag=1067
//  QRect::intersects(const QRect & r) const
bool c_QRect__intersects_QRect(void *thisObj, void *r_);

// tag=1067
//  QRect::isEmpty() const
bool c_QRect__isEmpty(void *thisObj);

// tag=1067
//  QRect::isNull() const
bool c_QRect__isNull(void *thisObj);

// tag=1067
//  QRect::isValid() const
bool c_QRect__isValid(void *thisObj);

// tag=1067
//  QRect::left() const
int c_QRect__left(void *thisObj);

// tag=1067
//  QRect::moveBottom(int pos)
void c_QRect__moveBottom_int(void *thisObj, int pos);

// tag=1067
//  QRect::moveBottomLeft(const QPoint & p)
void c_QRect__moveBottomLeft_QPoint(void *thisObj, void *p_);

// tag=1067
//  QRect::moveBottomRight(const QPoint & p)
void c_QRect__moveBottomRight_QPoint(void *thisObj, void *p_);

// tag=1067
//  QRect::moveCenter(const QPoint & p)
void c_QRect__moveCenter_QPoint(void *thisObj, void *p_);

// tag=1067
//  QRect::moveLeft(int pos)
void c_QRect__moveLeft_int(void *thisObj, int pos);

// tag=1067
//  QRect::moveRight(int pos)
void c_QRect__moveRight_int(void *thisObj, int pos);

// tag=1067
//  QRect::moveTo(const QPoint & p)
void c_QRect__moveTo_QPoint(void *thisObj, void *p_);

// tag=1067
//  QRect::moveTo(int x, int t)
void c_QRect__moveTo_int_int(void *thisObj, int x, int t);

// tag=1067
//  QRect::moveTop(int pos)
void c_QRect__moveTop_int(void *thisObj, int pos);

// tag=1067
//  QRect::moveTopLeft(const QPoint & p)
void c_QRect__moveTopLeft_QPoint(void *thisObj, void *p_);

// tag=1067
//  QRect::moveTopRight(const QPoint & p)
void c_QRect__moveTopRight_QPoint(void *thisObj, void *p_);

// tag=1067
//  QRect::normalized() const
void *c_QRect__normalized(void *thisObj);

// tag=1067
//  QRect::right() const
int c_QRect__right(void *thisObj);

// tag=1067
//  QRect::setBottom(int pos)
void c_QRect__setBottom_int(void *thisObj, int pos);

// tag=1067
//  QRect::setBottomLeft(const QPoint & p)
void c_QRect__setBottomLeft_QPoint(void *thisObj, void *p_);

// tag=1067
//  QRect::setBottomRight(const QPoint & p)
void c_QRect__setBottomRight_QPoint(void *thisObj, void *p_);

// tag=1067
//  QRect::setCoords(int x1, int y1, int x2, int y2)
void c_QRect__setCoords_int_int_int_int(void *thisObj, int x1, int y1, int x2, int y2);

// tag=1067
//  QRect::setHeight(int h)
void c_QRect__setHeight_int(void *thisObj, int h);

// tag=1067
//  QRect::setLeft(int pos)
void c_QRect__setLeft_int(void *thisObj, int pos);

// tag=1067
//  QRect::setRect(int x, int y, int w, int h)
void c_QRect__setRect_int_int_int_int(void *thisObj, int x, int y, int w, int h);

// tag=1067
//  QRect::setRight(int pos)
void c_QRect__setRight_int(void *thisObj, int pos);

// tag=1067
//  QRect::setSize(const QSize & s)
void c_QRect__setSize_QSize(void *thisObj, void *s_);

// tag=1067
//  QRect::setTop(int pos)
void c_QRect__setTop_int(void *thisObj, int pos);

// tag=1067
//  QRect::setTopLeft(const QPoint & p)
void c_QRect__setTopLeft_QPoint(void *thisObj, void *p_);

// tag=1067
//  QRect::setTopRight(const QPoint & p)
void c_QRect__setTopRight_QPoint(void *thisObj, void *p_);

// tag=1067
//  QRect::setWidth(int w)
void c_QRect__setWidth_int(void *thisObj, int w);

// tag=1067
//  QRect::setX(int x)
void c_QRect__setX_int(void *thisObj, int x);

// tag=1067
//  QRect::setY(int y)
void c_QRect__setY_int(void *thisObj, int y);

// tag=1067
//  QRect::size() const
void *c_QRect__size(void *thisObj);

// tag=1067
//  QRect::top() const
int c_QRect__top(void *thisObj);

// tag=1067
//  QRect::topLeft() const
void *c_QRect__topLeft(void *thisObj);

// tag=1067
//  QRect::topRight() const
void *c_QRect__topRight(void *thisObj);

// tag=1067
//  QRect::translate(const QPoint & p)
void c_QRect__translate_QPoint(void *thisObj, void *p_);

// tag=1067
//  QRect::translate(int dx, int dy)
void c_QRect__translate_int_int(void *thisObj, int dx, int dy);

// tag=1067
//  QRect::translated(const QPoint & p) const
void *c_QRect__translated_QPoint(void *thisObj, void *p_);

// tag=1067
//  QRect::translated(int dx, int dy) const
void *c_QRect__translated_int_int(void *thisObj, int dx, int dy);

// tag=1067
//  QRect::transposed() const
void *c_QRect__transposed(void *thisObj);

// tag=1067
//  QRect::united(const QRect & other) const
void *c_QRect__united_QRect(void *thisObj, void *other_);

// tag=1067
//  QRect::width() const
int c_QRect__width(void *thisObj);

// tag=1067
//  QRect::x() const
int c_QRect__x(void *thisObj);

// tag=1067
//  QRect::y() const
int c_QRect__y(void *thisObj);

// tag=1066
void c_QRect__destructor(void *thisObj);

// tag=1047
void c_QRect_Finalizer(void *, void *cppObj, void *);
// tag=1067
//  QPoint::QPoint()
void *c_QPoint__constructor();

// tag=1067
//  QPoint::QPoint(int xpos, int ypos)
void *c_QPoint__constructor_int_int(int xpos, int ypos);

// tag=1067
//  QPoint::dotProduct(const QPoint & p1, const QPoint & p2)
int c_static_QPoint__dotProduct_QPoint_QPoint(void *p1_, void *p2_);

// tag=1067
//  QPoint::isNull() const
bool c_QPoint__isNull(void *thisObj);

// tag=1067
//  QPoint::manhattanLength() const
int c_QPoint__manhattanLength(void *thisObj);

// tag=1067
//  QPoint::setX(int x)
void c_QPoint__setX_int(void *thisObj, int x);

// tag=1067
//  QPoint::setY(int y)
void c_QPoint__setY_int(void *thisObj, int y);

// tag=1067
//  QPoint::transposed() const
void *c_QPoint__transposed(void *thisObj);

// tag=1067
//  QPoint::x() const
int c_QPoint__x(void *thisObj);

// tag=1067
//  QPoint::y() const
int c_QPoint__y(void *thisObj);

// tag=1066
void c_QPoint__destructor(void *thisObj);

// tag=1047
void c_QPoint_Finalizer(void *, void *cppObj, void *);
// tag=1067
//  QObject::QObject(QObject * parent)
void *c_QObject__constructor_QObject(void *parent_);

// tag=1067
//  QObject::blockSignals(bool b)
bool c_QObject__blockSignals_bool(void *thisObj, bool b);

// tag=1067
//  QObject::children() const
void *c_QObject__children(void *thisObj);

// tag=1067
//  QObject::deleteLater()
void c_QObject__deleteLater(void *thisObj);

// tag=1067
//  QObject::destroyed(QObject * arg__1)
void c_QObject__destroyed_QObject(void *thisObj, void *arg__1_);

// tag=1078
void c_QObject__onDestroyed_QObject(void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QObject::disconnect(const QObject * receiver, const char * member) const
bool c_QObject__disconnect_QObject_char(void *thisObj, void *receiver_, const char *member);

// tag=1067
//  QObject::disconnect(const QObject * sender, const char * signal, const QObject * receiver, const char * member)
bool c_static_QObject__disconnect_QObject_char_QObject_char(void *sender_, const char *signal, void *receiver_, const char *member);

// tag=1067
//  QObject::disconnect(const char * signal, const QObject * receiver, const char * member) const
bool c_QObject__disconnect_char_QObject_char(void *thisObj, const char *signal, void *receiver_, const char *member);

// tag=1067
//  QObject::dumpObjectInfo()
void c_QObject__dumpObjectInfo(void *thisObj);

// tag=1067
//  QObject::dumpObjectTree()
void c_QObject__dumpObjectTree(void *thisObj);

// tag=1067
//  QObject::dynamicPropertyNames() const
void *c_QObject__dynamicPropertyNames(void *thisObj);

// tag=1067
//  QObject::inherits(const char * classname) const
bool c_QObject__inherits_char(void *thisObj, const char *classname);

// tag=1067
//  QObject::installEventFilter(QObject * filterObj)
void c_QObject__installEventFilter_QObject(void *thisObj, void *filterObj_);

// tag=1067
//  QObject::isWidgetType() const
bool c_QObject__isWidgetType(void *thisObj);

// tag=1067
//  QObject::isWindowType() const
bool c_QObject__isWindowType(void *thisObj);

// tag=1067
//  QObject::killTimer(int id)
void c_QObject__killTimer_int(void *thisObj, int id);

// tag=1067
//  QObject::objectName() const
void *c_QObject__objectName(void *thisObj);

// tag=1067
//  QObject::parent() const
void *c_QObject__parent(void *thisObj);

// tag=1067
//  QObject::receivers(const char * signal) const
int c_QObject__receivers_char(void *thisObj, const char *signal);

// tag=1067
//  QObject::removeEventFilter(QObject * obj)
void c_QObject__removeEventFilter_QObject(void *thisObj, void *obj_);

// tag=1067
//  QObject::sender() const
void *c_QObject__sender(void *thisObj);

// tag=1067
//  QObject::senderSignalIndex() const
int c_QObject__senderSignalIndex(void *thisObj);

// tag=1067
//  QObject::setObjectName(const QString & name)
void c_QObject__setObjectName_QString(void *thisObj, const char *name_);

// tag=1067
//  QObject::setParent(QObject * parent)
void c_QObject__setParent_QObject(void *thisObj, void *parent_);

// tag=1067
//  QObject::signalsBlocked() const
bool c_QObject__signalsBlocked(void *thisObj);

// tag=1067
//  QObject::startTimer(int interval)
int c_QObject__startTimer_int(void *thisObj, int interval);

// tag=1067
//  QObject::tr(const char * s, const char * c, int n)
void *c_static_QObject__tr_char_char_int(const char *s, const char *c, int n);

// tag=1066
void c_QObject__destructor(void *thisObj);

// tag=1046
void c_QObject__registerVirtualMethodCallback(void *ptr, void *callback, int methodId);
// tag=1047
void c_QObject_Finalizer(void *, void *cppObj, void *);
// tag=1067
//  QList::QList<T>()
void *c_QList_T_QObject_T___constructor();

// tag=1067
//  QList::append(const QList<T > & t)
void c_QList_T_QObject_T___append_QList_T(void *thisObj, void *t_);

// tag=1067
//  QList::append(const T & t)
void c_QList_T_QObject_T___append_QObject(void *thisObj, void *t_);

// tag=1067
//  QList::at(int i) const
const void *c_QList_T_QObject_T___at_int(void *thisObj, int i);

// tag=1067
//  QList::back()
void *c_QList_T_QObject_T___back(void *thisObj);

// tag=1067
//  QList::clear()
void c_QList_T_QObject_T___clear(void *thisObj);

// tag=1067
//  QList::constFirst() const
const void *c_QList_T_QObject_T___constFirst(void *thisObj);

// tag=1067
//  QList::constLast() const
const void *c_QList_T_QObject_T___constLast(void *thisObj);

// tag=1067
//  QList::contains(const T & t) const
bool c_QList_T_QObject_T___contains_QObject(void *thisObj, void *t_);

// tag=1067
//  QList::count() const
int c_QList_T_QObject_T___count(void *thisObj);

// tag=1067
//  QList::count(const T & t) const
int c_QList_T_QObject_T___count_QObject(void *thisObj, void *t_);

// tag=1067
//  QList::detach()
void c_QList_T_QObject_T___detach(void *thisObj);

// tag=1067
//  QList::detachShared()
void c_QList_T_QObject_T___detachShared(void *thisObj);

// tag=1067
//  QList::empty() const
bool c_QList_T_QObject_T___empty(void *thisObj);

// tag=1067
//  QList::endsWith(const T & t) const
bool c_QList_T_QObject_T___endsWith_QObject(void *thisObj, void *t_);

// tag=1067
//  QList::first()
void *c_QList_T_QObject_T___first(void *thisObj);

// tag=1067
//  QList::front()
void *c_QList_T_QObject_T___front(void *thisObj);

// tag=1067
//  QList::indexOf(const T & t, int from) const
int c_QList_T_QObject_T___indexOf_QObject_int(void *thisObj, void *t_, int from);

// tag=1067
//  QList::insert(int i, const T & t)
void c_QList_T_QObject_T___insert_int_QObject(void *thisObj, int i, void *t_);

// tag=1067
//  QList::isDetached() const
bool c_QList_T_QObject_T___isDetached(void *thisObj);

// tag=1067
//  QList::isEmpty() const
bool c_QList_T_QObject_T___isEmpty(void *thisObj);

// tag=1067
//  QList::isSharedWith(const QList<T > & other) const
bool c_QList_T_QObject_T___isSharedWith_QList_T(void *thisObj, void *other_);

// tag=1067
//  QList::last()
void *c_QList_T_QObject_T___last(void *thisObj);

// tag=1067
//  QList::lastIndexOf(const T & t, int from) const
int c_QList_T_QObject_T___lastIndexOf_QObject_int(void *thisObj, void *t_, int from);

// tag=1067
//  QList::length() const
int c_QList_T_QObject_T___length(void *thisObj);

// tag=1067
//  QList::mid(int pos, int length) const
void *c_QList_T_QObject_T___mid_int_int(void *thisObj, int pos, int length);

// tag=1067
//  QList::move(int from, int to)
void c_QList_T_QObject_T___move_int_int(void *thisObj, int from, int to);

// tag=1067
//  QList::pop_back()
void c_QList_T_QObject_T___pop_back(void *thisObj);

// tag=1067
//  QList::pop_front()
void c_QList_T_QObject_T___pop_front(void *thisObj);

// tag=1067
//  QList::prepend(const T & t)
void c_QList_T_QObject_T___prepend_QObject(void *thisObj, void *t_);

// tag=1067
//  QList::push_back(const T & t)
void c_QList_T_QObject_T___push_back_QObject(void *thisObj, void *t_);

// tag=1067
//  QList::push_front(const T & t)
void c_QList_T_QObject_T___push_front_QObject(void *thisObj, void *t_);

// tag=1067
//  QList::removeAll(const T & t)
int c_QList_T_QObject_T___removeAll_QObject(void *thisObj, void *t_);

// tag=1067
//  QList::removeAt(int i)
void c_QList_T_QObject_T___removeAt_int(void *thisObj, int i);

// tag=1067
//  QList::removeFirst()
void c_QList_T_QObject_T___removeFirst(void *thisObj);

// tag=1067
//  QList::removeLast()
void c_QList_T_QObject_T___removeLast(void *thisObj);

// tag=1067
//  QList::removeOne(const T & t)
bool c_QList_T_QObject_T___removeOne_QObject(void *thisObj, void *t_);

// tag=1067
//  QList::replace(int i, const T & t)
void c_QList_T_QObject_T___replace_int_QObject(void *thisObj, int i, void *t_);

// tag=1067
//  QList::reserve(int size)
void c_QList_T_QObject_T___reserve_int(void *thisObj, int size);

// tag=1067
//  QList::setSharable(bool sharable)
void c_QList_T_QObject_T___setSharable_bool(void *thisObj, bool sharable);

// tag=1067
//  QList::size() const
int c_QList_T_QObject_T___size(void *thisObj);

// tag=1067
//  QList::startsWith(const T & t) const
bool c_QList_T_QObject_T___startsWith_QObject(void *thisObj, void *t_);

// tag=1067
//  QList::swapItemsAt(int i, int j)
void c_QList_T_QObject_T___swapItemsAt_int_int(void *thisObj, int i, int j);

// tag=1067
//  QList::takeAt(int i)
void *c_QList_T_QObject_T___takeAt_int(void *thisObj, int i);

// tag=1067
//  QList::takeFirst()
void *c_QList_T_QObject_T___takeFirst(void *thisObj);

// tag=1067
//  QList::takeLast()
void *c_QList_T_QObject_T___takeLast(void *thisObj);

// tag=1067
//  QList::value(int i) const
void *c_QList_T_QObject_T___value_int(void *thisObj, int i);

// tag=1067
//  QList::value(int i, const T & defaultValue) const
void *c_QList_T_QObject_T___value_int_QObject(void *thisObj, int i, void *defaultValue_);

// tag=1066
void c_QList_T_QObject_T___destructor(void *thisObj);

// tag=1047
void c_QList_T_QObject_T__Finalizer(void *, void *cppObj, void *);
// tag=1067
//  QList::QList<T>()
void *c_QList_T_QByteArray_T___constructor();

// tag=1067
//  QList::append(const QList<T > & t)
void c_QList_T_QByteArray_T___append_QList_T(void *thisObj, void *t_);

// tag=1067
//  QList::append(const T & t)
void c_QList_T_QByteArray_T___append_QByteArray(void *thisObj, void *t_);

// tag=1067
//  QList::at(int i) const
const void *c_QList_T_QByteArray_T___at_int(void *thisObj, int i);

// tag=1067
//  QList::back()
void *c_QList_T_QByteArray_T___back(void *thisObj);

// tag=1067
//  QList::clear()
void c_QList_T_QByteArray_T___clear(void *thisObj);

// tag=1067
//  QList::constFirst() const
const void *c_QList_T_QByteArray_T___constFirst(void *thisObj);

// tag=1067
//  QList::constLast() const
const void *c_QList_T_QByteArray_T___constLast(void *thisObj);

// tag=1067
//  QList::contains(const T & t) const
bool c_QList_T_QByteArray_T___contains_QByteArray(void *thisObj, void *t_);

// tag=1067
//  QList::count() const
int c_QList_T_QByteArray_T___count(void *thisObj);

// tag=1067
//  QList::count(const T & t) const
int c_QList_T_QByteArray_T___count_QByteArray(void *thisObj, void *t_);

// tag=1067
//  QList::detach()
void c_QList_T_QByteArray_T___detach(void *thisObj);

// tag=1067
//  QList::detachShared()
void c_QList_T_QByteArray_T___detachShared(void *thisObj);

// tag=1067
//  QList::empty() const
bool c_QList_T_QByteArray_T___empty(void *thisObj);

// tag=1067
//  QList::endsWith(const T & t) const
bool c_QList_T_QByteArray_T___endsWith_QByteArray(void *thisObj, void *t_);

// tag=1067
//  QList::first()
void *c_QList_T_QByteArray_T___first(void *thisObj);

// tag=1067
//  QList::front()
void *c_QList_T_QByteArray_T___front(void *thisObj);

// tag=1067
//  QList::indexOf(const T & t, int from) const
int c_QList_T_QByteArray_T___indexOf_QByteArray_int(void *thisObj, void *t_, int from);

// tag=1067
//  QList::insert(int i, const T & t)
void c_QList_T_QByteArray_T___insert_int_QByteArray(void *thisObj, int i, void *t_);

// tag=1067
//  QList::isDetached() const
bool c_QList_T_QByteArray_T___isDetached(void *thisObj);

// tag=1067
//  QList::isEmpty() const
bool c_QList_T_QByteArray_T___isEmpty(void *thisObj);

// tag=1067
//  QList::isSharedWith(const QList<T > & other) const
bool c_QList_T_QByteArray_T___isSharedWith_QList_T(void *thisObj, void *other_);

// tag=1067
//  QList::last()
void *c_QList_T_QByteArray_T___last(void *thisObj);

// tag=1067
//  QList::lastIndexOf(const T & t, int from) const
int c_QList_T_QByteArray_T___lastIndexOf_QByteArray_int(void *thisObj, void *t_, int from);

// tag=1067
//  QList::length() const
int c_QList_T_QByteArray_T___length(void *thisObj);

// tag=1067
//  QList::mid(int pos, int length) const
void *c_QList_T_QByteArray_T___mid_int_int(void *thisObj, int pos, int length);

// tag=1067
//  QList::move(int from, int to)
void c_QList_T_QByteArray_T___move_int_int(void *thisObj, int from, int to);

// tag=1067
//  QList::pop_back()
void c_QList_T_QByteArray_T___pop_back(void *thisObj);

// tag=1067
//  QList::pop_front()
void c_QList_T_QByteArray_T___pop_front(void *thisObj);

// tag=1067
//  QList::prepend(const T & t)
void c_QList_T_QByteArray_T___prepend_QByteArray(void *thisObj, void *t_);

// tag=1067
//  QList::push_back(const T & t)
void c_QList_T_QByteArray_T___push_back_QByteArray(void *thisObj, void *t_);

// tag=1067
//  QList::push_front(const T & t)
void c_QList_T_QByteArray_T___push_front_QByteArray(void *thisObj, void *t_);

// tag=1067
//  QList::removeAll(const T & t)
int c_QList_T_QByteArray_T___removeAll_QByteArray(void *thisObj, void *t_);

// tag=1067
//  QList::removeAt(int i)
void c_QList_T_QByteArray_T___removeAt_int(void *thisObj, int i);

// tag=1067
//  QList::removeFirst()
void c_QList_T_QByteArray_T___removeFirst(void *thisObj);

// tag=1067
//  QList::removeLast()
void c_QList_T_QByteArray_T___removeLast(void *thisObj);

// tag=1067
//  QList::removeOne(const T & t)
bool c_QList_T_QByteArray_T___removeOne_QByteArray(void *thisObj, void *t_);

// tag=1067
//  QList::replace(int i, const T & t)
void c_QList_T_QByteArray_T___replace_int_QByteArray(void *thisObj, int i, void *t_);

// tag=1067
//  QList::reserve(int size)
void c_QList_T_QByteArray_T___reserve_int(void *thisObj, int size);

// tag=1067
//  QList::setSharable(bool sharable)
void c_QList_T_QByteArray_T___setSharable_bool(void *thisObj, bool sharable);

// tag=1067
//  QList::size() const
int c_QList_T_QByteArray_T___size(void *thisObj);

// tag=1067
//  QList::startsWith(const T & t) const
bool c_QList_T_QByteArray_T___startsWith_QByteArray(void *thisObj, void *t_);

// tag=1067
//  QList::swapItemsAt(int i, int j)
void c_QList_T_QByteArray_T___swapItemsAt_int_int(void *thisObj, int i, int j);

// tag=1067
//  QList::takeAt(int i)
void *c_QList_T_QByteArray_T___takeAt_int(void *thisObj, int i);

// tag=1067
//  QList::takeFirst()
void *c_QList_T_QByteArray_T___takeFirst(void *thisObj);

// tag=1067
//  QList::takeLast()
void *c_QList_T_QByteArray_T___takeLast(void *thisObj);

// tag=1067
//  QList::value(int i) const
void *c_QList_T_QByteArray_T___value_int(void *thisObj, int i);

// tag=1067
//  QList::value(int i, const T & defaultValue) const
void *c_QList_T_QByteArray_T___value_int_QByteArray(void *thisObj, int i, void *defaultValue_);

// tag=1066
void c_QList_T_QByteArray_T___destructor(void *thisObj);

// tag=1047
void c_QList_T_QByteArray_T__Finalizer(void *, void *cppObj, void *);
// tag=1067
//  QByteArray::QByteArray()
void *c_QByteArray__constructor();

// tag=1067
//  QByteArray::QByteArray(const char * arg__1, int size)
void *c_QByteArray__constructor_char_int(const char *arg__1, int size);

// tag=1067
//  QByteArray::append(const QByteArray & a)
void *c_QByteArray__append_QByteArray(void *thisObj, void *a_);

// tag=1067
//  QByteArray::append(const char * s)
void *c_QByteArray__append_char(void *thisObj, const char *s);

// tag=1067
//  QByteArray::append(const char * s, int len)
void *c_QByteArray__append_char_int(void *thisObj, const char *s, int len);

// tag=1067
//  QByteArray::at(int i) const
char c_QByteArray__at_int(void *thisObj, int i);

// tag=1067
//  QByteArray::back() const
char c_QByteArray__back(void *thisObj);

// tag=1067
//  QByteArray::begin() const
const char *c_QByteArray__begin(void *thisObj);

// tag=1067
//  QByteArray::capacity() const
int c_QByteArray__capacity(void *thisObj);

// tag=1067
//  QByteArray::cbegin() const
const char *c_QByteArray__cbegin(void *thisObj);

// tag=1067
//  QByteArray::cend() const
const char *c_QByteArray__cend(void *thisObj);

// tag=1067
//  QByteArray::chop(int n)
void c_QByteArray__chop_int(void *thisObj, int n);

// tag=1067
//  QByteArray::chopped(int len) const
void *c_QByteArray__chopped_int(void *thisObj, int len);

// tag=1067
//  QByteArray::clear()
void c_QByteArray__clear(void *thisObj);

// tag=1067
//  QByteArray::compare(const QByteArray & a) const
int c_QByteArray__compare_QByteArray(void *thisObj, void *a_);

// tag=1067
//  QByteArray::compare(const char * c) const
int c_QByteArray__compare_char(void *thisObj, const char *c);

// tag=1067
//  QByteArray::constBegin() const
const char *c_QByteArray__constBegin(void *thisObj);

// tag=1067
//  QByteArray::constData() const
const char *c_QByteArray__constData(void *thisObj);

// tag=1067
//  QByteArray::constEnd() const
const char *c_QByteArray__constEnd(void *thisObj);

// tag=1067
//  QByteArray::contains(const QByteArray & a) const
bool c_QByteArray__contains_QByteArray(void *thisObj, void *a_);

// tag=1067
//  QByteArray::contains(const char * a) const
bool c_QByteArray__contains_char(void *thisObj, const char *a);

// tag=1067
//  QByteArray::count() const
int c_QByteArray__count(void *thisObj);

// tag=1067
//  QByteArray::count(const QByteArray & a) const
int c_QByteArray__count_QByteArray(void *thisObj, void *a_);

// tag=1067
//  QByteArray::count(const char * a) const
int c_QByteArray__count_char(void *thisObj, const char *a);

// tag=1067
//  QByteArray::data() const
const char *c_QByteArray__data(void *thisObj);

// tag=1067
//  QByteArray::detach()
void c_QByteArray__detach(void *thisObj);

// tag=1067
//  QByteArray::end() const
const char *c_QByteArray__end(void *thisObj);

// tag=1067
//  QByteArray::endsWith(const QByteArray & a) const
bool c_QByteArray__endsWith_QByteArray(void *thisObj, void *a_);

// tag=1067
//  QByteArray::endsWith(const char * c) const
bool c_QByteArray__endsWith_char(void *thisObj, const char *c);

// tag=1067
//  QByteArray::fromBase64(const QByteArray & base64)
void *c_static_QByteArray__fromBase64_QByteArray(void *base64_);

// tag=1067
//  QByteArray::fromHex(const QByteArray & hexEncoded)
void *c_static_QByteArray__fromHex_QByteArray(void *hexEncoded_);

// tag=1067
//  QByteArray::fromRawData(const char * arg__1, int size)
void *c_static_QByteArray__fromRawData_char_int(const char *arg__1, int size);

// tag=1067
//  QByteArray::front() const
char c_QByteArray__front(void *thisObj);

// tag=1067
//  QByteArray::indexOf(const QByteArray & a, int from) const
int c_QByteArray__indexOf_QByteArray_int(void *thisObj, void *a_, int from);

// tag=1067
//  QByteArray::indexOf(const char * c, int from) const
int c_QByteArray__indexOf_char_int(void *thisObj, const char *c, int from);

// tag=1067
//  QByteArray::insert(int i, const QByteArray & a)
void *c_QByteArray__insert_int_QByteArray(void *thisObj, int i, void *a_);

// tag=1067
//  QByteArray::insert(int i, const char * s)
void *c_QByteArray__insert_int_char(void *thisObj, int i, const char *s);

// tag=1067
//  QByteArray::insert(int i, const char * s, int len)
void *c_QByteArray__insert_int_char_int(void *thisObj, int i, const char *s, int len);

// tag=1067
//  QByteArray::isDetached() const
bool c_QByteArray__isDetached(void *thisObj);

// tag=1067
//  QByteArray::isEmpty() const
bool c_QByteArray__isEmpty(void *thisObj);

// tag=1067
//  QByteArray::isLower() const
bool c_QByteArray__isLower(void *thisObj);

// tag=1067
//  QByteArray::isNull() const
bool c_QByteArray__isNull(void *thisObj);

// tag=1067
//  QByteArray::isSharedWith(const QByteArray & other) const
bool c_QByteArray__isSharedWith_QByteArray(void *thisObj, void *other_);

// tag=1067
//  QByteArray::isUpper() const
bool c_QByteArray__isUpper(void *thisObj);

// tag=1067
//  QByteArray::lastIndexOf(const QByteArray & a, int from) const
int c_QByteArray__lastIndexOf_QByteArray_int(void *thisObj, void *a_, int from);

// tag=1067
//  QByteArray::lastIndexOf(const char * c, int from) const
int c_QByteArray__lastIndexOf_char_int(void *thisObj, const char *c, int from);

// tag=1067
//  QByteArray::left(int len) const
void *c_QByteArray__left_int(void *thisObj, int len);

// tag=1067
//  QByteArray::length() const
int c_QByteArray__length(void *thisObj);

// tag=1067
//  QByteArray::mid(int index, int len) const
void *c_QByteArray__mid_int_int(void *thisObj, int index, int len);

// tag=1067
//  QByteArray::number(int arg__1, int base)
void *c_static_QByteArray__number_int_int(int arg__1, int base);

// tag=1067
//  QByteArray::number(qint64 arg__1, int base)
void *c_static_QByteArray__number_qint64_int(qint64 arg__1, int base);

// tag=1067
//  QByteArray::prepend(const QByteArray & a)
void *c_QByteArray__prepend_QByteArray(void *thisObj, void *a_);

// tag=1067
//  QByteArray::prepend(const char * s)
void *c_QByteArray__prepend_char(void *thisObj, const char *s);

// tag=1067
//  QByteArray::prepend(const char * s, int len)
void *c_QByteArray__prepend_char_int(void *thisObj, const char *s, int len);

// tag=1067
//  QByteArray::push_back(const QByteArray & a)
void c_QByteArray__push_back_QByteArray(void *thisObj, void *a_);

// tag=1067
//  QByteArray::push_back(const char * c)
void c_QByteArray__push_back_char(void *thisObj, const char *c);

// tag=1067
//  QByteArray::push_front(const QByteArray & a)
void c_QByteArray__push_front_QByteArray(void *thisObj, void *a_);

// tag=1067
//  QByteArray::push_front(const char * c)
void c_QByteArray__push_front_char(void *thisObj, const char *c);

// tag=1067
//  QByteArray::remove(int index, int len)
void *c_QByteArray__remove_int_int(void *thisObj, int index, int len);

// tag=1067
//  QByteArray::repeated(int times) const
void *c_QByteArray__repeated_int(void *thisObj, int times);

// tag=1067
//  QByteArray::replace(const QByteArray & before, const QByteArray & after)
void *c_QByteArray__replace_QByteArray_QByteArray(void *thisObj, void *before_, void *after_);

// tag=1067
//  QByteArray::replace(const QByteArray & before, const char * after)
void *c_QByteArray__replace_QByteArray_char(void *thisObj, void *before_, const char *after);

// tag=1067
//  QByteArray::replace(const char * before, const QByteArray & after)
void *c_QByteArray__replace_char_QByteArray(void *thisObj, const char *before, void *after_);

// tag=1067
//  QByteArray::replace(const char * before, const char * after)
void *c_QByteArray__replace_char_char(void *thisObj, const char *before, const char *after);

// tag=1067
//  QByteArray::replace(const char * before, int bsize, const char * after, int asize)
void *c_QByteArray__replace_char_int_char_int(void *thisObj, const char *before, int bsize, const char *after, int asize);

// tag=1067
//  QByteArray::replace(int index, int len, const QByteArray & s)
void *c_QByteArray__replace_int_int_QByteArray(void *thisObj, int index, int len, void *s_);

// tag=1067
//  QByteArray::replace(int index, int len, const char * s)
void *c_QByteArray__replace_int_int_char(void *thisObj, int index, int len, const char *s);

// tag=1067
//  QByteArray::replace(int index, int len, const char * s, int alen)
void *c_QByteArray__replace_int_int_char_int(void *thisObj, int index, int len, const char *s, int alen);

// tag=1067
//  QByteArray::reserve(int size)
void c_QByteArray__reserve_int(void *thisObj, int size);

// tag=1067
//  QByteArray::resize(int size)
void c_QByteArray__resize_int(void *thisObj, int size);

// tag=1067
//  QByteArray::right(int len) const
void *c_QByteArray__right_int(void *thisObj, int len);

// tag=1067
//  QByteArray::setNum(int arg__1, int base)
void *c_QByteArray__setNum_int_int(void *thisObj, int arg__1, int base);

// tag=1067
//  QByteArray::setNum(qint64 arg__1, int base)
void *c_QByteArray__setNum_qint64_int(void *thisObj, qint64 arg__1, int base);

// tag=1067
//  QByteArray::setNum(short arg__1, int base)
void *c_QByteArray__setNum_short_int(void *thisObj, short arg__1, int base);

// tag=1067
//  QByteArray::shrink_to_fit()
void c_QByteArray__shrink_to_fit(void *thisObj);

// tag=1067
//  QByteArray::simplified()
void *c_QByteArray__simplified(void *thisObj);

// tag=1067
//  QByteArray::size() const
int c_QByteArray__size(void *thisObj);

// tag=1067
//  QByteArray::squeeze()
void c_QByteArray__squeeze(void *thisObj);

// tag=1067
//  QByteArray::startsWith(const QByteArray & a) const
bool c_QByteArray__startsWith_QByteArray(void *thisObj, void *a_);

// tag=1067
//  QByteArray::startsWith(const char * c) const
bool c_QByteArray__startsWith_char(void *thisObj, const char *c);

// tag=1067
//  QByteArray::toBase64() const
void *c_QByteArray__toBase64(void *thisObj);

// tag=1067
//  QByteArray::toHex() const
void *c_QByteArray__toHex(void *thisObj);

// tag=1067
//  QByteArray::toLower()
void *c_QByteArray__toLower(void *thisObj);

// tag=1067
//  QByteArray::toUpper()
void *c_QByteArray__toUpper(void *thisObj);

// tag=1067
//  QByteArray::trimmed()
void *c_QByteArray__trimmed(void *thisObj);

// tag=1067
//  QByteArray::truncate(int pos)
void c_QByteArray__truncate_int(void *thisObj, int pos);

// tag=1066
void c_QByteArray__destructor(void *thisObj);

// tag=1047
void c_QByteArray_Finalizer(void *, void *cppObj, void *);