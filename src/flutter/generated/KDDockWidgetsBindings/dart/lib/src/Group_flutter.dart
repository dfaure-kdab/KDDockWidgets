/*
  This file is part of KDDockWidgets.

  SPDX-FileCopyrightText: 2019-2022 Klarälvdalens Datakonsult AB, a KDAB Group company <info@kdab.com>
  Author: Sérgio Martins <sergio.martins@kdab.com>

  SPDX-License-Identifier: GPL-2.0-only OR GPL-3.0-only

  Contact KDAB at <info@kdab.com> for commercial licensing options.
*/
import 'dart:ffi' as ffi;
import 'package:ffi/ffi.dart';
import 'TypeHelpers.dart';
import '../Bindings.dart';
import '../FinalizerHelpers.dart';

var _dylib = Library.instance().dylib;

class Group_flutter extends View_flutter {
  Group_flutter.fromCppPointer(var cppPointer, [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  Group_flutter.init() : super.init() {}
  factory Group_flutter.fromCache(var cppPointer, [needsAutoDelete = false]) {
    if (View.isCached(cppPointer)) {
      var instance = View.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as Group_flutter;
    }
    return Group_flutter.fromCppPointer(cppPointer, needsAutoDelete);
  } //Group_flutter(KDDockWidgets::Controllers::Group * controller, KDDockWidgets::View * parent)
  Group_flutter(Group? controller, {required View? parent}) : super.init() {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_KDDockWidgets__Views__Group_flutter__constructor_Group_View')
        .asFunction();
    thisCpp = func(controller == null ? ffi.nullptr : controller.thisCpp,
        parent == null ? ffi.nullptr : parent.thisCpp);
    View.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  }
  static void activateWindow_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::activateWindow()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.activateWindow();
  }

  static int close_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::close()! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.close();
    return result ? 1 : 0;
  }

  static void createPlatformWindow_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::createPlatformWindow()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.createPlatformWindow();
  } // currentIndex() const

  int currentIndex() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_KDDockWidgets__Views__Group_flutter__currentIndex')
        .asFunction();
    return func(thisCpp);
  } // dragRect() const

  QRect dragRect() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            cFunctionSymbolName(995))
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QRect.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> dragRect_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::dragRect() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.dragRect();
    return result.thisCpp;
  }

  static int flags_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::flags() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.flags();
    return result;
  }

  static void free_impl_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::free_impl()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.free_impl();
  }

  static ffi.Pointer<void> geometry_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::geometry() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.geometry();
    return result.thisCpp;
  }

  static void grabMouse_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::grabMouse()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.grabMouse();
  }

  static int hasFocus_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::hasFocus() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.hasFocus();
    return result ? 1 : 0;
  }

  static void hide_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::hide()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.hide();
  }

  static void init_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::init()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.init();
  }

  static int isActiveWindow_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::isActiveWindow() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.isActiveWindow();
    return result ? 1 : 0;
  }

  static int isMaximized_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::isMaximized() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.isMaximized();
    return result ? 1 : 0;
  }

  static int isMinimized_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::isMinimized() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.isMinimized();
    return result ? 1 : 0;
  }

  static int isNull_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::isNull() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.isNull();
    return result ? 1 : 0;
  }

  static int isRootView_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::isRootView() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.isRootView();
    return result ? 1 : 0;
  }

  static int isVisible_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::isVisible() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.isVisible();
    return result ? 1 : 0;
  }

  static ffi.Pointer<void> mapFromGlobal_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> globalPt) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::mapFromGlobal(QPoint globalPt) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.mapFromGlobal(QPoint.fromCppPointer(globalPt));
    return result.thisCpp;
  }

  static ffi.Pointer<void> mapTo_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void>? parent, ffi.Pointer<void> pos) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::mapTo(KDDockWidgets::View * parent, QPoint pos) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.mapTo(
        View.fromCppPointer(parent), QPoint.fromCppPointer(pos));
    return result.thisCpp;
  }

  static ffi.Pointer<void> mapToGlobal_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> localPt) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::mapToGlobal(QPoint localPt) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.mapToGlobal(QPoint.fromCppPointer(localPt));
    return result.thisCpp;
  }

  static ffi.Pointer<void> maxSizeHint_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::maxSizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.maxSizeHint();
    return result.thisCpp;
  }

  static ffi.Pointer<void> minSize_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::minSize() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.minSize();
    return result.thisCpp;
  }

  static int minimumHeight_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::minimumHeight() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.minimumHeight();
    return result;
  }

  static int minimumWidth_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::minimumWidth() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.minimumWidth();
    return result;
  }

  static void move_2_calledFromC(ffi.Pointer<void> thisCpp, int x, int y) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::move(int x, int y)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.move_2(x, y);
  } // nonContentsHeight() const

  int nonContentsHeight() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            cFunctionSymbolName(996))
        .asFunction();
    return func(thisCpp);
  }

  static int nonContentsHeight_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::nonContentsHeight() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.nonContentsHeight();
    return result;
  }

  static ffi.Pointer<void> normalGeometry_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::normalGeometry() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.normalGeometry();
    return result.thisCpp;
  }

  static ffi.Pointer<void> objectName_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::objectName() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.objectName();
    return result.thisCpp;
  }

  static void onChildAdded_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? childView) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::onChildAdded(KDDockWidgets::View * childView)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.onChildAdded(View.fromCppPointer(childView));
  }

  static void onChildRemoved_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? childView) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::onChildRemoved(KDDockWidgets::View * childView)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.onChildRemoved(View.fromCppPointer(childView));
  }

  static int onResize_2_calledFromC(ffi.Pointer<void> thisCpp, int w, int h) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::onResize(int w, int h)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.onResize_2(w, h);
    return result ? 1 : 0;
  }

  static void raise_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::raise()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.raise();
  }

  static void raiseAndActivate_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::raiseAndActivate()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.raiseAndActivate();
  }

  static void releaseKeyboard_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::releaseKeyboard()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.releaseKeyboard();
  }

  static void releaseMouse_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::releaseMouse()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.releaseMouse();
  } // renameTab(int index, const QString & arg__2)

  renameTab(int index, String? arg__2) {
    final void_Func_voidstar_int_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_voidstar_FFI>>(
            cFunctionSymbolName(997))
        .asFunction();
    func(thisCpp, index, arg__2?.toNativeUtf8() ?? ffi.nullptr);
  }

  static void renameTab_calledFromC(
      ffi.Pointer<void> thisCpp, int index, ffi.Pointer<void>? arg__2) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::renameTab(int index, const QString & arg__2)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.renameTab(
        index, QString.fromCppPointer(arg__2).toDartString());
  } // setCurrentTabIndex_impl(int index)

  setCurrentTabIndex_impl(int index) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            cFunctionSymbolName(998))
        .asFunction();
    func(thisCpp, index);
  }

  static void setCurrentTabIndex_impl_calledFromC(
      ffi.Pointer<void> thisCpp, int index) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::setCurrentTabIndex_impl(int index)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setCurrentTabIndex_impl(index);
  }

  static void setCursor_calledFromC(ffi.Pointer<void> thisCpp, int shape) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::setCursor(Qt::CursorShape shape)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setCursor(shape);
  }

  static void setFixedHeight_calledFromC(ffi.Pointer<void> thisCpp, int h) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::setFixedHeight(int h)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setFixedHeight(h);
  }

  static void setFixedWidth_calledFromC(ffi.Pointer<void> thisCpp, int w) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::setFixedWidth(int w)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setFixedWidth(w);
  }

  static void setGeometry_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> geometry) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::setGeometry(QRect geometry)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setGeometry(QRect.fromCppPointer(geometry));
  }

  static void setHeight_calledFromC(ffi.Pointer<void> thisCpp, int h) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::setHeight(int h)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setHeight(h);
  }

  static void setMaximumSize_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> sz) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::setMaximumSize(QSize sz)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setMaximumSize(QSize.fromCppPointer(sz));
  }

  static void setMinimumSize_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> sz) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::setMinimumSize(QSize sz)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setMinimumSize(QSize.fromCppPointer(sz));
  }

  static void setMouseTracking_calledFromC(
      ffi.Pointer<void> thisCpp, int enable) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::setMouseTracking(bool enable)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setMouseTracking(enable != 0);
  }

  static void setObjectName_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? name) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::setObjectName(const QString & name)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setObjectName(QString.fromCppPointer(name).toDartString());
  }

  static void setParent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? parent) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::setParent(KDDockWidgets::View * parent)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setParent(View.fromCppPointer(parent));
  }

  static void setSize_2_calledFromC(ffi.Pointer<void> thisCpp, int w, int h) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::setSize(int w, int h)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setSize_2(w, h);
  }

  static void setVisible_calledFromC(ffi.Pointer<void> thisCpp, int visible) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::setVisible(bool visible)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setVisible(visible != 0);
  }

  static void setWidth_calledFromC(ffi.Pointer<void> thisCpp, int w) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::setWidth(int w)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setWidth(w);
  }

  static void setWindowOpacity_calledFromC(
      ffi.Pointer<void> thisCpp, double v) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::setWindowOpacity(double v)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setWindowOpacity(v);
  }

  static void setWindowTitle_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? title) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::setWindowTitle(const QString & title)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setWindowTitle(QString.fromCppPointer(title).toDartString());
  }

  static void setZOrder_calledFromC(ffi.Pointer<void> thisCpp, int z) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::setZOrder(int z)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setZOrder(z);
  }

  static void show_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::show()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.show();
  }

  static void showMaximized_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::showMaximized()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.showMaximized();
  }

  static void showMinimized_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::showMinimized()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.showMinimized();
  }

  static void showNormal_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::showNormal()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.showNormal();
  }

  static ffi.Pointer<void> sizeHint_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::sizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sizeHint();
    return result.thisCpp;
  }

  static void update_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        View.s_dartInstanceByCppPtr[thisCpp.address] as Group_flutter;
    if (dartInstance == null) {
      print(
          "Dart instance not found for Group_flutter::update()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.update();
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_KDDockWidgets__Views__Group_flutter__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 840:
        return "c_KDDockWidgets__Views__Group_flutter__activateWindow";
      case 849:
        return "c_KDDockWidgets__Views__Group_flutter__close";
      case 852:
        return "c_KDDockWidgets__Views__Group_flutter__createPlatformWindow";
      case 995:
        return "c_KDDockWidgets__Views__Group_flutter__dragRect";
      case 857:
        return "c_KDDockWidgets__Views__Group_flutter__flags";
      case 859:
        return "c_KDDockWidgets__Views__Group_flutter__free_impl";
      case 861:
        return "c_KDDockWidgets__Views__Group_flutter__geometry";
      case 863:
        return "c_KDDockWidgets__Views__Group_flutter__grabMouse";
      case 866:
        return "c_KDDockWidgets__Views__Group_flutter__hasFocus";
      case 868:
        return "c_KDDockWidgets__Views__Group_flutter__hide";
      case 871:
        return "c_KDDockWidgets__Views__Group_flutter__init";
      case 873:
        return "c_KDDockWidgets__Views__Group_flutter__isActiveWindow";
      case 874:
        return "c_KDDockWidgets__Views__Group_flutter__isMaximized";
      case 875:
        return "c_KDDockWidgets__Views__Group_flutter__isMinimized";
      case 876:
        return "c_KDDockWidgets__Views__Group_flutter__isNull";
      case 877:
        return "c_KDDockWidgets__Views__Group_flutter__isRootView";
      case 878:
        return "c_KDDockWidgets__Views__Group_flutter__isVisible";
      case 879:
        return "c_KDDockWidgets__Views__Group_flutter__mapFromGlobal_QPoint";
      case 880:
        return "c_KDDockWidgets__Views__Group_flutter__mapTo_View_QPoint";
      case 881:
        return "c_KDDockWidgets__Views__Group_flutter__mapToGlobal_QPoint";
      case 882:
        return "c_KDDockWidgets__Views__Group_flutter__maxSizeHint";
      case 883:
        return "c_KDDockWidgets__Views__Group_flutter__minSize";
      case 884:
        return "c_KDDockWidgets__Views__Group_flutter__minimumHeight";
      case 885:
        return "c_KDDockWidgets__Views__Group_flutter__minimumWidth";
      case 887:
        return "c_KDDockWidgets__Views__Group_flutter__move_int_int";
      case 996:
        return "c_KDDockWidgets__Views__Group_flutter__nonContentsHeight";
      case 888:
        return "c_KDDockWidgets__Views__Group_flutter__normalGeometry";
      case 889:
        return "c_KDDockWidgets__Views__Group_flutter__objectName";
      case 954:
        return "c_KDDockWidgets__Views__Group_flutter__onChildAdded_View";
      case 955:
        return "c_KDDockWidgets__Views__Group_flutter__onChildRemoved_View";
      case 891:
        return "c_KDDockWidgets__Views__Group_flutter__onResize_int_int";
      case 894:
        return "c_KDDockWidgets__Views__Group_flutter__raise";
      case 895:
        return "c_KDDockWidgets__Views__Group_flutter__raiseAndActivate";
      case 897:
        return "c_KDDockWidgets__Views__Group_flutter__releaseKeyboard";
      case 898:
        return "c_KDDockWidgets__Views__Group_flutter__releaseMouse";
      case 997:
        return "c_KDDockWidgets__Views__Group_flutter__renameTab_int_QString";
      case 998:
        return "c_KDDockWidgets__Views__Group_flutter__setCurrentTabIndex_impl_int";
      case 902:
        return "c_KDDockWidgets__Views__Group_flutter__setCursor_CursorShape";
      case 903:
        return "c_KDDockWidgets__Views__Group_flutter__setFixedHeight_int";
      case 904:
        return "c_KDDockWidgets__Views__Group_flutter__setFixedWidth_int";
      case 905:
        return "c_KDDockWidgets__Views__Group_flutter__setGeometry_QRect";
      case 906:
        return "c_KDDockWidgets__Views__Group_flutter__setHeight_int";
      case 907:
        return "c_KDDockWidgets__Views__Group_flutter__setMaximumSize_QSize";
      case 908:
        return "c_KDDockWidgets__Views__Group_flutter__setMinimumSize_QSize";
      case 909:
        return "c_KDDockWidgets__Views__Group_flutter__setMouseTracking_bool";
      case 910:
        return "c_KDDockWidgets__Views__Group_flutter__setObjectName_QString";
      case 911:
        return "c_KDDockWidgets__Views__Group_flutter__setParent_View";
      case 913:
        return "c_KDDockWidgets__Views__Group_flutter__setSize_int_int";
      case 914:
        return "c_KDDockWidgets__Views__Group_flutter__setVisible_bool";
      case 915:
        return "c_KDDockWidgets__Views__Group_flutter__setWidth_int";
      case 916:
        return "c_KDDockWidgets__Views__Group_flutter__setWindowOpacity_double";
      case 917:
        return "c_KDDockWidgets__Views__Group_flutter__setWindowTitle_QString";
      case 918:
        return "c_KDDockWidgets__Views__Group_flutter__setZOrder_int";
      case 919:
        return "c_KDDockWidgets__Views__Group_flutter__show";
      case 920:
        return "c_KDDockWidgets__Views__Group_flutter__showMaximized";
      case 921:
        return "c_KDDockWidgets__Views__Group_flutter__showMinimized";
      case 922:
        return "c_KDDockWidgets__Views__Group_flutter__showNormal";
      case 924:
        return "c_KDDockWidgets__Views__Group_flutter__sizeHint";
      case 926:
        return "c_KDDockWidgets__Views__Group_flutter__update";
    }
    return super.cFunctionSymbolName(methodId);
  }

  static String methodNameFromId(int methodId) {
    switch (methodId) {
      case 840:
        return "activateWindow";
      case 849:
        return "close";
      case 852:
        return "createPlatformWindow";
      case 995:
        return "dragRect";
      case 857:
        return "flags";
      case 859:
        return "free_impl";
      case 861:
        return "geometry";
      case 863:
        return "grabMouse";
      case 866:
        return "hasFocus";
      case 868:
        return "hide";
      case 871:
        return "init";
      case 873:
        return "isActiveWindow";
      case 874:
        return "isMaximized";
      case 875:
        return "isMinimized";
      case 876:
        return "isNull";
      case 877:
        return "isRootView";
      case 878:
        return "isVisible";
      case 879:
        return "mapFromGlobal";
      case 880:
        return "mapTo";
      case 881:
        return "mapToGlobal";
      case 882:
        return "maxSizeHint";
      case 883:
        return "minSize";
      case 884:
        return "minimumHeight";
      case 885:
        return "minimumWidth";
      case 887:
        return "move_2";
      case 996:
        return "nonContentsHeight";
      case 888:
        return "normalGeometry";
      case 889:
        return "objectName";
      case 954:
        return "onChildAdded";
      case 955:
        return "onChildRemoved";
      case 891:
        return "onResize_2";
      case 894:
        return "raise";
      case 895:
        return "raiseAndActivate";
      case 897:
        return "releaseKeyboard";
      case 898:
        return "releaseMouse";
      case 997:
        return "renameTab";
      case 998:
        return "setCurrentTabIndex_impl";
      case 902:
        return "setCursor";
      case 903:
        return "setFixedHeight";
      case 904:
        return "setFixedWidth";
      case 905:
        return "setGeometry";
      case 906:
        return "setHeight";
      case 907:
        return "setMaximumSize";
      case 908:
        return "setMinimumSize";
      case 909:
        return "setMouseTracking";
      case 910:
        return "setObjectName";
      case 911:
        return "setParent";
      case 913:
        return "setSize_2";
      case 914:
        return "setVisible";
      case 915:
        return "setWidth";
      case 916:
        return "setWindowOpacity";
      case 917:
        return "setWindowTitle";
      case 918:
        return "setZOrder";
      case 919:
        return "show";
      case 920:
        return "showMaximized";
      case 921:
        return "showMinimized";
      case 922:
        return "showNormal";
      case 924:
        return "sizeHint";
      case 926:
        return "update";
    }
    throw Error();
  }

  void registerCallbacks() {
    assert(thisCpp != null);
    final RegisterMethodIsReimplementedCallback registerCallback = _dylib
        .lookup<ffi.NativeFunction<RegisterMethodIsReimplementedCallback_FFI>>(
            'c_KDDockWidgets__Views__Group_flutter__registerVirtualMethodCallback')
        .asFunction();
    final callback840 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        View_flutter.activateWindow_calledFromC);
    registerCallback(thisCpp, callback840, 840);
    const callbackExcept849 = 0;
    final callback849 = ffi.Pointer.fromFunction<bool_Func_voidstar_FFI>(
        View_flutter.close_calledFromC, callbackExcept849);
    registerCallback(thisCpp, callback849, 849);
    final callback852 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        View.createPlatformWindow_calledFromC);
    registerCallback(thisCpp, callback852, 852);
    final callback995 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        Group_flutter.dragRect_calledFromC);
    registerCallback(thisCpp, callback995, 995);
    const callbackExcept857 = 0;
    final callback857 = ffi.Pointer.fromFunction<int_Func_voidstar_FFI>(
        View_flutter.flags_calledFromC, callbackExcept857);
    registerCallback(thisCpp, callback857, 857);
    final callback859 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        View_flutter.free_impl_calledFromC);
    registerCallback(thisCpp, callback859, 859);
    final callback861 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        View_flutter.geometry_calledFromC);
    registerCallback(thisCpp, callback861, 861);
    final callback863 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        View_flutter.grabMouse_calledFromC);
    registerCallback(thisCpp, callback863, 863);
    const callbackExcept866 = 0;
    final callback866 = ffi.Pointer.fromFunction<bool_Func_voidstar_FFI>(
        View_flutter.hasFocus_calledFromC, callbackExcept866);
    registerCallback(thisCpp, callback866, 866);
    final callback868 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        View_flutter.hide_calledFromC);
    registerCallback(thisCpp, callback868, 868);
    final callback871 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        Group_flutter.init_calledFromC);
    registerCallback(thisCpp, callback871, 871);
    const callbackExcept873 = 0;
    final callback873 = ffi.Pointer.fromFunction<bool_Func_voidstar_FFI>(
        View_flutter.isActiveWindow_calledFromC, callbackExcept873);
    registerCallback(thisCpp, callback873, 873);
    const callbackExcept874 = 0;
    final callback874 = ffi.Pointer.fromFunction<bool_Func_voidstar_FFI>(
        View_flutter.isMaximized_calledFromC, callbackExcept874);
    registerCallback(thisCpp, callback874, 874);
    const callbackExcept875 = 0;
    final callback875 = ffi.Pointer.fromFunction<bool_Func_voidstar_FFI>(
        View_flutter.isMinimized_calledFromC, callbackExcept875);
    registerCallback(thisCpp, callback875, 875);
    const callbackExcept876 = 0;
    final callback876 = ffi.Pointer.fromFunction<bool_Func_voidstar_FFI>(
        View.isNull_calledFromC, callbackExcept876);
    registerCallback(thisCpp, callback876, 876);
    const callbackExcept877 = 0;
    final callback877 = ffi.Pointer.fromFunction<bool_Func_voidstar_FFI>(
        View_flutter.isRootView_calledFromC, callbackExcept877);
    registerCallback(thisCpp, callback877, 877);
    const callbackExcept878 = 0;
    final callback878 = ffi.Pointer.fromFunction<bool_Func_voidstar_FFI>(
        View_flutter.isVisible_calledFromC, callbackExcept878);
    registerCallback(thisCpp, callback878, 878);
    final callback879 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_voidstar_FFI>(
            View_flutter.mapFromGlobal_calledFromC);
    registerCallback(thisCpp, callback879, 879);
    final callback880 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_voidstar_voidstar_FFI>(
            View_flutter.mapTo_calledFromC);
    registerCallback(thisCpp, callback880, 880);
    final callback881 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_voidstar_FFI>(
            View_flutter.mapToGlobal_calledFromC);
    registerCallback(thisCpp, callback881, 881);
    final callback882 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        Group_flutter.maxSizeHint_calledFromC);
    registerCallback(thisCpp, callback882, 882);
    final callback883 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        Group_flutter.minSize_calledFromC);
    registerCallback(thisCpp, callback883, 883);
    const callbackExcept884 = 0;
    final callback884 = ffi.Pointer.fromFunction<int_Func_voidstar_FFI>(
        View.minimumHeight_calledFromC, callbackExcept884);
    registerCallback(thisCpp, callback884, 884);
    const callbackExcept885 = 0;
    final callback885 = ffi.Pointer.fromFunction<int_Func_voidstar_FFI>(
        View.minimumWidth_calledFromC, callbackExcept885);
    registerCallback(thisCpp, callback885, 885);
    final callback887 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>(
            View_flutter.move_2_calledFromC);
    registerCallback(thisCpp, callback887, 887);
    const callbackExcept996 = 0;
    final callback996 = ffi.Pointer.fromFunction<int_Func_voidstar_FFI>(
        Group_flutter.nonContentsHeight_calledFromC, callbackExcept996);
    registerCallback(thisCpp, callback996, 996);
    final callback888 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        View_flutter.normalGeometry_calledFromC);
    registerCallback(thisCpp, callback888, 888);
    final callback889 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        View_flutter.objectName_calledFromC);
    registerCallback(thisCpp, callback889, 889);
    final callback954 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            View_flutter.onChildAdded_calledFromC);
    registerCallback(thisCpp, callback954, 954);
    final callback955 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            View_flutter.onChildRemoved_calledFromC);
    registerCallback(thisCpp, callback955, 955);
    const callbackExcept891 = 0;
    final callback891 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_ffi_Int32_ffi_Int32_FFI>(
            View_flutter.onResize_2_calledFromC, callbackExcept891);
    registerCallback(thisCpp, callback891, 891);
    final callback894 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        View_flutter.raise_calledFromC);
    registerCallback(thisCpp, callback894, 894);
    final callback895 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        View_flutter.raiseAndActivate_calledFromC);
    registerCallback(thisCpp, callback895, 895);
    final callback897 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        View_flutter.releaseKeyboard_calledFromC);
    registerCallback(thisCpp, callback897, 897);
    final callback898 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        View_flutter.releaseMouse_calledFromC);
    registerCallback(thisCpp, callback898, 898);
    final callback997 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_voidstar_FFI>(
            Group_flutter.renameTab_calledFromC);
    registerCallback(thisCpp, callback997, 997);
    final callback998 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_FFI>(
            Group_flutter.setCurrentTabIndex_impl_calledFromC);
    registerCallback(thisCpp, callback998, 998);
    final callback902 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_FFI>(
            View_flutter.setCursor_calledFromC);
    registerCallback(thisCpp, callback902, 902);
    final callback903 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_FFI>(
            View_flutter.setFixedHeight_calledFromC);
    registerCallback(thisCpp, callback903, 903);
    final callback904 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_FFI>(
            View_flutter.setFixedWidth_calledFromC);
    registerCallback(thisCpp, callback904, 904);
    final callback905 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            View_flutter.setGeometry_calledFromC);
    registerCallback(thisCpp, callback905, 905);
    final callback906 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_FFI>(
            View_flutter.setHeight_calledFromC);
    registerCallback(thisCpp, callback906, 906);
    final callback907 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            View_flutter.setMaximumSize_calledFromC);
    registerCallback(thisCpp, callback907, 907);
    final callback908 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            View_flutter.setMinimumSize_calledFromC);
    registerCallback(thisCpp, callback908, 908);
    final callback909 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int8_FFI>(
            View_flutter.setMouseTracking_calledFromC);
    registerCallback(thisCpp, callback909, 909);
    final callback910 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            View_flutter.setObjectName_calledFromC);
    registerCallback(thisCpp, callback910, 910);
    final callback911 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            View_flutter.setParent_calledFromC);
    registerCallback(thisCpp, callback911, 911);
    final callback913 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>(
            View_flutter.setSize_2_calledFromC);
    registerCallback(thisCpp, callback913, 913);
    final callback914 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int8_FFI>(
            View_flutter.setVisible_calledFromC);
    registerCallback(thisCpp, callback914, 914);
    final callback915 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_FFI>(
            View_flutter.setWidth_calledFromC);
    registerCallback(thisCpp, callback915, 915);
    final callback916 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Double_FFI>(
            View_flutter.setWindowOpacity_calledFromC);
    registerCallback(thisCpp, callback916, 916);
    final callback917 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            View_flutter.setWindowTitle_calledFromC);
    registerCallback(thisCpp, callback917, 917);
    final callback918 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_FFI>(
            View_flutter.setZOrder_calledFromC);
    registerCallback(thisCpp, callback918, 918);
    final callback919 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        View_flutter.show_calledFromC);
    registerCallback(thisCpp, callback919, 919);
    final callback920 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        View_flutter.showMaximized_calledFromC);
    registerCallback(thisCpp, callback920, 920);
    final callback921 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        View_flutter.showMinimized_calledFromC);
    registerCallback(thisCpp, callback921, 921);
    final callback922 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        View_flutter.showNormal_calledFromC);
    registerCallback(thisCpp, callback922, 922);
    final callback924 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        View_flutter.sizeHint_calledFromC);
    registerCallback(thisCpp, callback924, 924);
    final callback926 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        View_flutter.update_calledFromC);
    registerCallback(thisCpp, callback926, 926);
  }
}
