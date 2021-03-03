/*
  This file is part of KDDockWidgets.

  SPDX-FileCopyrightText: 2019-2021 Klarälvdalens Datakonsult AB, a KDAB Group company <info@kdab.com>
  Author: Sérgio Martins <sergio.martins@kdab.com>

  SPDX-License-Identifier: GPL-2.0-only OR GPL-3.0-only

  Contact KDAB at <info@kdab.com> for commercial licensing options.
*/

import QtQuick 2.9
import QtQuick.Controls 2.9
import QtQuick.Layouts 1.9


MouseArea {
    id: root
    property int resizeMargin: 2
    property int shape
    property bool resizeAllowed: true

    hoverEnabled: true
    width: resizeMargin
    cursorShape: enabled ? shape : Qt.ArrowCursor // Even if disabled the MouseArea changes cursor, as it's different than Item.enabled, so explicitly change cursor if disabled
    z: mouseArea.z + 1
    enabled: resizeAllowed
    onPressed: { mouse.accepted = false; }
    onReleased: { mouse.accepted = false; }
}
