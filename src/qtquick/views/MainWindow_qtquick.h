/*
  This file is part of KDDockWidgets.

  SPDX-FileCopyrightText: 2019-2022 Klarälvdalens Datakonsult AB, a KDAB Group company <info@kdab.com>
  Author: Sérgio Martins <sergio.martins@kdab.com>

  SPDX-License-Identifier: GPL-2.0-only OR GPL-3.0-only

  Contact KDAB at <info@kdab.com> for commercial licensing options.
*/

#ifndef KD_MAIN_WINDOW_QUICK_P_H
#define KD_MAIN_WINDOW_QUICK_P_H

#include "View_qtquick.h"
#include "kddockwidgets/views/MainWindowViewInterface.h"

namespace KDDockWidgets {

namespace Controllers {
class SideBar;
}

namespace Views {

///@brief A docking area for dock widgets
/// Named MainWindow as it's the QtWidgets/QMainWindow counterpart.
/// Provides the ability of acepting drops of dock widgets.
/// It's not a real QWindow and not a main window in the sense of QMainWindow. Would be overkill
/// to have tool bars, menu bar and footer in the QtQuick implementation. That's left for the user to do.
/// From QML just use DockingArea {}, which will create a this class behind the scenes. It's mostly
/// an implementation detail unless you want to use C++.

class DOCKS_EXPORT MainWindow_qtquick : public Views::View_qtquick, public MainWindowViewInterface
{
    Q_OBJECT
public:
    explicit MainWindow_qtquick(const QString &uniqueName,
                                MainWindowOptions options = {},
                                QQuickItem *parent = nullptr, Qt::WindowFlags flags = {});

    ~MainWindow_qtquick() override;

    /// @reimp
    QSize minSize() const override;

    /// @reimp
    QSize maximumSize() const override;

protected:
    Controllers::SideBar *sideBar(SideBarLocation) const override;
    QMargins centerWidgetMargins() const override;
    QRect centralAreaGeometry() const override;
    void setContentsMargins(int left, int top, int right, int bottom) override;

private:
    class Private;
    Private *const d;
};
}
}

#endif
