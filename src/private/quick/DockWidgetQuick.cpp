/*
  This file is part of KDDockWidgets.

  Copyright (C) 2018-2020 Klarälvdalens Datakonsult AB, a KDAB Group company, info@kdab.com
  Author: Sérgio Martins <sergio.martins@kdab.com>

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "DockWidgetQuick.h"

/**
 * @file
 * @brief Represents a dock widget.
 *
 * @author Sérgio Martins \<sergio.martins@kdab.com\>
 */

using namespace KDDockWidgets;

class DockWidgetQuick::Private
{
public:
    Private(DockWidgetQuick *)

    {
    }
};

DockWidgetQuick::DockWidgetQuick(const QString &name, Options options)
    : DockWidgetBase(name, options)
    , d(new Private(this))
{
}

DockWidgetQuick::~DockWidgetQuick()
{
    delete d;
}

/* TODO_QUICK
bool DockWidget::event(QEvent *e)
{
    if (e->type() == QEvent::ParentChange) {
        onParentChanged();
    } else if (e->type() == QEvent::Show) {
        onShown(e->spontaneous());
    } else if (e->type() == QEvent::Hide) {
        onHidden(e->spontaneous());
    }

    return QWidget::event(e);
}

void DockWidget::closeEvent(QCloseEvent *e)
{
    onClosed(e);
}
*/
