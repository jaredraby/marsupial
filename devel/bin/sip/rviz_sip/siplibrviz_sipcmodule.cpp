/*
 * Module code.
 *
 * Generated by SIP 4.15.5 on Sun Oct 19 18:23:54 2014
 */

#include "sipAPIlibrviz_sip.h"

#line 34 "/usr/share/sip/PyQt4/QtCore/qobject.sip"
#include <qobject.h>
#line 12 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_sipcmodule.cpp"
#line 7 "config.sip"
#define ROS_PACKAGE_NAME "rviz"
#include <rviz/config.h>
#line 16 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_sipcmodule.cpp"
#line 7 "property.sip"
#define ROS_PACKAGE_NAME "rviz"
#include <rviz/properties/property.h>
#line 20 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_sipcmodule.cpp"
#line 35 "/usr/share/sip/PyQt4/QtGui/qcursor.sip"
#include <qcursor.h>
#line 23 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_sipcmodule.cpp"
#line 7 "view_controller.sip"
#define ROS_PACKAGE_NAME "rviz"
#include <rviz/view_controller.h>
#line 27 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_sipcmodule.cpp"
#line 35 "/usr/share/sip/PyQt4/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 30 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_sipcmodule.cpp"
#line 35 "/usr/share/sip/PyQt4/QtGui/qwidget.sip"
#include <qwidget.h>
#line 33 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_sipcmodule.cpp"
#line 1135 "/usr/share/sip/PyQt4/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 36 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_sipcmodule.cpp"
#line 35 "/usr/share/sip/PyQt4/QtGui/qpainter.sip"
#include <qpainter.h>
#line 39 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_sipcmodule.cpp"
#line 274 "/usr/share/sip/PyQt4/QtCore/qvariant.sip"
#include <qvariant.h>
#line 42 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_sipcmodule.cpp"
#line 7 "display_group.sip"
#define ROS_PACKAGE_NAME "rviz"
#include <rviz/display_group.h>
#line 46 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_sipcmodule.cpp"
#line 7 "display.sip"
#define ROS_PACKAGE_NAME "rviz"
#include <rviz/display.h>
#line 50 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_sipcmodule.cpp"
#line 7 "view_manager.sip"
#define ROS_PACKAGE_NAME "rviz"
#include <rviz/view_manager.h>
#line 54 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_sipcmodule.cpp"
#line 7 "tool_manager.sip"
#define ROS_PACKAGE_NAME "rviz"
#include <rviz/tool_manager.h>
#line 58 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_sipcmodule.cpp"
#line 7 "panel_dock_widget.sip"
#include <rviz/panel_dock_widget.h>
#line 61 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_sipcmodule.cpp"
#line 36 "/usr/share/sip/PyQt4/QtCore/qstring.sip"
#include <qstring.h>
#line 64 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_sipcmodule.cpp"
#line 35 "/usr/share/sip/PyQt4/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 67 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_sipcmodule.cpp"

/* Define the strings used by this module. */
const char sipStrings_librviz_sip[] = {
    's', 'e', 't', 'C', 'u', 'r', 'r', 'e', 'n', 't', 'V', 'i', 'e', 'w', 'C', 'o', 'n', 't', 'r', 'o', 'l', 'l', 'e', 'r', 'T', 'y', 'p', 'e', 0,
    'P', 'y', 'Q', 't', '4', '.', 'Q', 't', 'C', 'o', 'r', 'e', '.', 'p', 'y', 'q', 't', 'W', 'r', 'a', 'p', 'p', 'e', 'r', 'T', 'y', 'p', 'e', 0,
    'r', 'v', 'i', 'z', ':', ':', 'V', 'i', 's', 'u', 'a', 'l', 'i', 'z', 'a', 't', 'i', 'o', 'n', 'M', 'a', 'n', 'a', 'g', 'e', 'r', 0,
    'r', 'v', 'i', 'z', ':', ':', 'C', 'o', 'n', 'f', 'i', 'g', ':', ':', 'M', 'a', 'p', 'I', 't', 'e', 'r', 'a', 't', 'o', 'r', 0,
    'r', 'v', 'i', 'z', ':', ':', 'V', 'i', 's', 'u', 'a', 'l', 'i', 'z', 'a', 't', 'i', 'o', 'n', 'F', 'r', 'a', 'm', 'e', 0,
    's', 'e', 't', 'H', 'i', 'd', 'e', 'B', 'u', 't', 't', 'o', 'n', 'V', 'i', 's', 'i', 'b', 'i', 'l', 'i', 't', 'y', 0,
    'r', 'v', 'i', 'z', ':', ':', 'Y', 'a', 'm', 'l', 'C', 'o', 'n', 'f', 'i', 'g', 'R', 'e', 'a', 'd', 'e', 'r', 0,
    'r', 'v', 'i', 'z', ':', ':', 'Y', 'a', 'm', 'l', 'C', 'o', 'n', 'f', 'i', 'g', 'W', 'r', 'i', 't', 'e', 'r', 0,
    's', 'a', 'v', 'e', 'P', 'e', 'r', 's', 'i', 's', 't', 'e', 'n', 't', 'S', 'e', 't', 't', 'i', 'n', 'g', 's', 0,
    'l', 'o', 'a', 'd', 'P', 'e', 'r', 's', 'i', 's', 't', 'e', 'n', 't', 'S', 'e', 't', 't', 'i', 'n', 'g', 's', 0,
    's', 'e', 't', 'S', 'h', 'o', 'w', 'C', 'h', 'o', 'o', 's', 'e', 'N', 'e', 'w', 'M', 'a', 's', 't', 'e', 'r', 0,
    'w', 'i', 'n', 'd', 'o', 'w', 'A', 'c', 't', 'i', 'v', 'a', 't', 'i', 'o', 'n', 'C', 'h', 'a', 'n', 'g', 'e', 0,
    'r', 'v', 'i', 'z', ':', ':', 'P', 'a', 'n', 'e', 'l', 'D', 'o', 'c', 'k', 'W', 'i', 'd', 'g', 'e', 't', 0,
    'm', 'o', 'u', 's', 'e', 'D', 'o', 'u', 'b', 'l', 'e', 'C', 'l', 'i', 'c', 'k', 'E', 'v', 'e', 'n', 't', 0,
    'g', 'e', 't', 'P', 'r', 'o', 'p', 'e', 'r', 't', 'y', 'C', 'o', 'n', 't', 'a', 'i', 'n', 'e', 'r', 0,
    'r', 'v', 'i', 'z', ':', ':', 'V', 'i', 'e', 'w', 'C', 'o', 'n', 't', 'r', 'o', 'l', 'l', 'e', 'r', 0,
    'g', 'e', 't', 'R', 'o', 'o', 't', 'D', 'i', 's', 'p', 'l', 'a', 'y', 'G', 'r', 'o', 'u', 'p', 0,
    'n', 'o', 't', 'i', 'f', 'y', 'C', 'o', 'n', 'f', 'i', 'g', 'C', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    'g', 'e', 't', 'W', 'a', 'l', 'l', 'C', 'l', 'o', 'c', 'k', 'E', 'l', 'a', 'p', 's', 'e', 'd', 0,
    'd', 'e', 'f', 'a', 'u', 'l', 't', 'B', 'u', 't', 't', 'o', 'n', 'N', 'u', 'm', 'b', 'e', 'r', 0,
    'r', 'v', 'i', 'z', ':', ':', 'C', 'o', 'n', 'f', 'i', 'g', ':', ':', 'T', 'y', 'p', 'e', 0,
    'r', 'v', 'i', 'z', ':', ':', 'B', 'o', 'o', 'l', 'P', 'r', 'o', 'p', 'e', 'r', 't', 'y', 0,
    'r', 'v', 'i', 'z', ':', ':', 'D', 'i', 's', 'p', 'l', 'a', 'y', 'G', 'r', 'o', 'u', 'p', 0,
    'f', 'o', 'c', 'u', 's', 'P', 'r', 'e', 'v', 'i', 'o', 'u', 's', 'C', 'h', 'i', 'l', 'd', 0,
    'e', 's', 'c', 'a', 'p', 'e', 'B', 'u', 't', 't', 'o', 'n', 'N', 'u', 'm', 'b', 'e', 'r', 0,
    'f', 'o', 'c', 'u', 's', 'N', 'e', 'x', 't', 'P', 'r', 'e', 'v', 'C', 'h', 'i', 'l', 'd', 0,
    'r', 'v', 'i', 'z', ':', ':', 'O', 'g', 'r', 'e', 'L', 'o', 'g', 'g', 'i', 'n', 'g', 0,
    'r', 'v', 'i', 'z', ':', ':', 'T', 'o', 'o', 'l', 'M', 'a', 'n', 'a', 'g', 'e', 'r', 0,
    'c', 'o', 'p', 'y', 'C', 'u', 'r', 'r', 'e', 'n', 't', 'T', 'o', 'L', 'i', 's', 't', 0,
    'r', 'v', 'i', 'z', ':', ':', 'V', 'i', 'e', 'w', 'M', 'a', 'n', 'a', 'g', 'e', 'r', 0,
    'e', 'm', 'i', 't', 'C', 'o', 'n', 'f', 'i', 'g', 'C', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    'r', 'o', 'w', 'N', 'u', 'm', 'b', 'e', 'r', 'I', 'n', 'P', 'a', 'r', 'e', 'n', 't', 0,
    'g', 'e', 't', 'R', 'O', 'S', 'T', 'i', 'm', 'e', 'E', 'l', 'a', 'p', 's', 'e', 'd', 0,
    'r', 'e', 'm', 'o', 'v', 'e', 'A', 'l', 'l', 'D', 'i', 's', 'p', 'l', 'a', 'y', 's', 0,
    's', 'a', 'v', 'e', 'D', 'i', 's', 'p', 'l', 'a', 'y', 'C', 'o', 'n', 'f', 'i', 'g', 0,
    'l', 'o', 'a', 'd', 'D', 'i', 's', 'p', 'l', 'a', 'y', 'C', 'o', 'n', 'f', 'i', 'g', 0,
    'd', 'e', 's', 't', 'r', 'o', 'y', 'S', 'u', 'b', 'W', 'i', 'n', 'd', 'o', 'w', 's', 0,
    'r', 'e', 's', 'e', 't', 'I', 'n', 'p', 'u', 't', 'C', 'o', 'n', 't', 'e', 'x', 't', 0,
    'v', 'i', 's', 'i', 'b', 'i', 'l', 'i', 't', 'y', 'C', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    'm', 'o', 'u', 's', 'e', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'E', 'v', 'e', 'n', 't', 0,
    's', 'e', 'n', 'd', 'e', 'r', 'S', 'i', 'g', 'n', 'a', 'l', 'I', 'n', 'd', 'e', 'x', 0,
    's', 'i', 'p', '.', 's', 'i', 'm', 'p', 'l', 'e', 'w', 'r', 'a', 'p', 'p', 'e', 'r', 0,
    's', 'e', 't', 'C', 'o', 'n', 't', 'e', 'n', 't', 'W', 'i', 'd', 'g', 'e', 't', 0,
    's', 'e', 't', 'S', 'h', 'o', 'u', 'l', 'd', 'B', 'e', 'S', 'a', 'v', 'e', 'd', 0,
    'c', 'h', 'i', 'l', 'd', 'A', 't', 'U', 'n', 'c', 'h', 'e', 'c', 'k', 'e', 'd', 0,
    'e', 'm', 'i', 't', 'S', 't', 'a', 't', 'u', 's', 'U', 'p', 'd', 'a', 't', 'e', 0,
    'd', 'e', 's', 't', 'r', 'o', 'y', 'O', 'l', 'd', 'W', 'i', 'n', 'd', 'o', 'w', 0,
    'i', 'n', 'i', 't', 'i', 'a', 'l', 'i', 'z', 'e', 'W', 'i', 'n', 'd', 'o', 'w', 0,
    'u', 'p', 'd', 'a', 't', 'e', 'M', 'i', 'c', 'r', 'o', 'F', 'o', 'c', 'u', 's', 0,
    'c', 'o', 'n', 't', 'e', 'x', 't', 'M', 'e', 'n', 'u', 'E', 'v', 'e', 'n', 't', 0,
    'i', 'n', 'p', 'u', 't', 'M', 'e', 't', 'h', 'o', 'd', 'E', 'v', 'e', 'n', 't', 0,
    'i', 'n', 'p', 'u', 't', 'M', 'e', 't', 'h', 'o', 'd', 'Q', 'u', 'e', 'r', 'y', 0,
    'd', 'i', 's', 'c', 'o', 'n', 'n', 'e', 'c', 't', 'N', 'o', 't', 'i', 'f', 'y', 0,
    'g', 'e', 't', 'E', 'r', 'r', 'o', 'r', 'M', 'e', 's', 's', 'a', 'g', 'e', 0,
    'g', 'e', 't', 'P', 'a', 'r', 'e', 'n', 't', 'W', 'i', 'n', 'd', 'o', 'w', 0,
    'c', 'r', 'e', 'a', 't', 'e', 'P', 'o', 'p', 'u', 'p', 'M', 'e', 'n', 'u', 0,
    'a', 's', 'p', 'e', 'c', 't', 'R', 'a', 't', 'i', 'o', 'M', 'o', 'd', 'e', 0,
    'd', 'e', 'v', 'i', 'c', 'e', 'T', 'r', 'a', 'n', 's', 'f', 'o', 'r', 'm', 0,
    'i', 'n', 'i', 't', 'S', 't', 'y', 'l', 'e', 'O', 'p', 't', 'i', 'o', 'n', 0,
    'm', 'i', 'n', 'i', 'm', 'u', 'm', 'S', 'i', 'z', 'e', 'H', 'i', 'n', 't', 0,
    'm', 'o', 'u', 's', 'e', 'P', 'r', 'e', 's', 's', 'E', 'v', 'e', 'n', 't', 0,
    'k', 'e', 'y', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'g', 'e', 't', 'T', 'o', 'o', 'l', 'C', 'l', 'a', 's', 's', 'e', 's', 0,
    'g', 'e', 't', 'D', 'e', 'f', 'a', 'u', 'l', 't', 'T', 'o', 'o', 'l', 0,
    's', 'e', 't', 'D', 'e', 'f', 'a', 'u', 'l', 't', 'T', 'o', 'o', 'l', 0,
    's', 'e', 't', 'C', 'u', 'r', 'r', 'e', 'n', 't', 'T', 'o', 'o', 'l', 0,
    'g', 'e', 't', 'C', 'u', 'r', 'r', 'e', 'n', 't', 'T', 'o', 'o', 'l', 0,
    'g', 'e', 't', 'S', 'h', 'o', 'r', 't', 'c', 'u', 't', 'K', 'e', 'y', 0,
    's', 'e', 't', 'C', 'u', 'r', 'r', 'e', 'n', 't', 'F', 'r', 'o', 'm', 0,
    't', 'r', 'a', 'n', 's', 'i', 't', 'i', 'o', 'n', 'F', 'r', 'o', 'm', 0,
    'g', 'e', 't', 'D', 'e', 's', 'c', 'r', 'i', 'p', 't', 'i', 'o', 'n', 0,
    'r', 'e', 'm', 'o', 'v', 'e', 'C', 'h', 'i', 'l', 'd', 'r', 'e', 'n', 0,
    'r', 'v', 'i', 'z', ':', ':', 'P', 'r', 'o', 'p', 'e', 'r', 't', 'y', 0,
    'g', 'e', 't', 'V', 'i', 'e', 'w', 'M', 'a', 'n', 'a', 'g', 'e', 'r', 0,
    'g', 'e', 't', 'T', 'o', 'o', 'l', 'M', 'a', 'n', 'a', 'g', 'e', 'r', 0,
    'l', 'a', 'n', 'g', 'u', 'a', 'g', 'e', 'C', 'h', 'a', 'n', 'g', 'e', 0,
    'f', 'o', 'c', 'u', 's', 'N', 'e', 'x', 't', 'C', 'h', 'i', 'l', 'd', 0,
    's', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'F', 'i', 'l', 't', 'e', 'r', 0,
    's', 'e', 't', 'D', 'e', 's', 'c', 'r', 'i', 'p', 't', 'i', 'o', 'n', 0,
    'h', 'e', 'i', 'g', 'h', 't', 'F', 'o', 'r', 'W', 'i', 'd', 't', 'h', 0,
    'd', 'r', 'a', 'g', 'L', 'e', 'a', 'v', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'd', 'r', 'a', 'g', 'E', 'n', 't', 'e', 'r', 'E', 'v', 'e', 'n', 't', 0,
    'c', 'u', 'r', 'r', 'e', 'n', 't', 'C', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    'm', 'o', 'u', 's', 'e', 'M', 'o', 'v', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'l', 'i', 's', 't', 'A', 'p', 'p', 'e', 'n', 'd', 'N', 'e', 'w', 0,
    'f', 'o', 'r', 'm', 'a', 't', 'C', 'l', 'a', 's', 's', 'I', 'd', 0,
    'a', 'b', 'o', 'u', 't', 'T', 'o', 'C', 'h', 'a', 'n', 'g', 'e', 0,
    's', 'h', 'o', 'u', 'l', 'd', 'B', 'e', 'S', 'a', 'v', 'e', 'd', 0,
    'r', 'v', 'i', 'z', ':', ':', 'D', 'i', 's', 'p', 'l', 'a', 'y', 0,
    'c', 'o', 'n', 'f', 'i', 'g', 'C', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    'g', 'e', 't', 'F', 'r', 'a', 'm', 'e', 'C', 'o', 'u', 'n', 't', 0,
    's', 'e', 't', 'F', 'i', 'x', 'e', 'd', 'F', 'r', 'a', 'm', 'e', 0,
    'g', 'e', 't', 'F', 'i', 'x', 'e', 'd', 'F', 'r', 'a', 'm', 'e', 0,
    'c', 'r', 'e', 'a', 't', 'e', 'D', 'i', 's', 'p', 'l', 'a', 'y', 0,
    's', 'e', 't', 'S', 'p', 'l', 'a', 's', 'h', 'P', 'a', 't', 'h', 0,
    'c', 'h', 'a', 'n', 'g', 'e', 'd', 'S', 'i', 'g', 'n', 'a', 'l', 0,
    'p', 'a', 'l', 'e', 't', 't', 'e', 'C', 'h', 'a', 'n', 'g', 'e', 0,
    'e', 'n', 'a', 'b', 'l', 'e', 'd', 'C', 'h', 'a', 'n', 'g', 'e', 0,
    'd', 'e', 's', 't', 'r', 'o', 'y', 'W', 'i', 'n', 'd', 'o', 'w', 0,
    't', 'r', 'a', 'n', 's', 'f', 'o', 'r', 'm', 'M', 'o', 'd', 'e', 0,
    't', 'h', 'r', 'e', 's', 'h', 'o', 'l', 'd', 'T', 'i', 'm', 'e', 0,
    'd', 'r', 'a', 'g', 'M', 'o', 'v', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'f', 'o', 'c', 'u', 's', 'O', 'u', 't', 'E', 'v', 'e', 'n', 't', 0,
    'k', 'e', 'y', 'P', 'r', 'e', 's', 's', 'E', 'v', 'e', 'n', 't', 0,
    'e', 'r', 'r', 'o', 'r', 'M', 'e', 's', 's', 'a', 'g', 'e', 0,
    'c', 'u', 'r', 'r', 'e', 'n', 't', 'C', 'h', 'i', 'l', 'd', 0,
    'm', 'a', 'p', 'M', 'a', 'k', 'e', 'C', 'h', 'i', 'l', 'd', 0,
    'r', 'v', 'i', 'z', ':', ':', 'C', 'o', 'n', 'f', 'i', 'g', 0,
    'g', 'e', 't', 'D', 'i', 's', 'p', 'l', 'a', 'y', 'A', 't', 0,
    'g', 'e', 't', 'V', 'i', 'e', 'w', 'F', 'l', 'a', 'g', 's', 0,
    'd', 'e', 'l', 'e', 't', 'e', 'S', 't', 'a', 't', 'u', 's', 0,
    's', 't', 'a', 't', 'u', 's', 'U', 'p', 'd', 'a', 't', 'e', 0,
    'u', 'n', 'l', 'o', 'c', 'k', 'R', 'e', 'n', 'd', 'e', 'r', 0,
    'g', 'e', 't', 'W', 'a', 'l', 'l', 'C', 'l', 'o', 'c', 'k', 0,
    's', 'o', 'u', 'r', 'c', 'e', 'R', 'e', 'g', 'i', 'o', 'n', 0,
    't', 'a', 'r', 'g', 'e', 't', 'O', 'f', 'f', 's', 'e', 't', 0,
    'i', 's', 'A', 'n', 'c', 'e', 's', 't', 'o', 'r', 'O', 'f', 0,
    'b', 'o', 'u', 'n', 'd', 'i', 'n', 'g', 'R', 'e', 'c', 't', 0,
    'm', 'i', 'd', 'L', 'i', 'n', 'e', 'W', 'i', 'd', 't', 'h', 0,
    'c', 'r', 'e', 'a', 't', 'e', 'E', 'd', 'i', 't', 'o', 'r', 0,
    'f', 'o', 'c', 'u', 's', 'I', 'n', 'E', 'v', 'e', 'n', 't', 0,
    'l', 'i', 's', 't', 'C', 'h', 'i', 'l', 'd', 'A', 't', 0,
    'm', 'a', 'p', 'I', 't', 'e', 'r', 'a', 't', 'o', 'r', 0,
    'm', 'a', 'p', 'G', 'e', 't', 'C', 'h', 'i', 'l', 'd', 0,
    'm', 'a', 'p', 'S', 'e', 't', 'V', 'a', 'l', 'u', 'e', 0,
    't', 'o', 'o', 'l', 'R', 'e', 'm', 'o', 'v', 'e', 'd', 0,
    't', 'o', 'o', 'l', 'C', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    'g', 'e', 't', 'N', 'u', 'm', 'V', 'i', 'e', 'w', 's', 0,
    'g', 'e', 't', 'R', 'e', 'a', 'd', 'O', 'n', 'l', 'y', 0,
    'n', 'u', 'm', 'D', 'i', 's', 'p', 'l', 'a', 'y', 's', 0,
    't', 'a', 'k', 'e', 'D', 'i', 's', 'p', 'l', 'a', 'y', 0,
    'g', 'e', 't', 'V', 'i', 'e', 'w', 'D', 'a', 't', 'a', 0,
    't', 'a', 'k', 'e', 'C', 'h', 'i', 'l', 'd', 'A', 't', 0,
    'n', 'u', 'm', 'C', 'h', 'i', 'l', 'd', 'r', 'e', 'n', 0,
    'q', 'u', 'e', 'u', 'e', 'R', 'e', 'n', 'd', 'e', 'r', 0,
    's', 't', 'a', 'r', 't', 'U', 'p', 'd', 'a', 't', 'e', 0,
    's', 'e', 't', 'H', 'e', 'l', 'p', 'P', 'a', 't', 'h', 0,
    't', 'a', 'b', 'l', 'e', 't', 'E', 'v', 'e', 'n', 't', 0,
    'b', 'u', 't', 't', 'o', 'n', '2', 'T', 'e', 'x', 't', 0,
    'b', 'u', 't', 't', 'o', 'n', '1', 'T', 'e', 'x', 't', 0,
    'a', 'c', 't', 'i', 'o', 'n', 'E', 'v', 'e', 'n', 't', 0,
    'p', 'a', 'i', 'n', 't', 'E', 'n', 'g', 'i', 'n', 'e', 0,
    't', 'i', 'm', 'e', 'C', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    's', 'e', 't', 'R', 'e', 'a', 'd', 'O', 'n', 'l', 'y', 0,
    'r', 'e', 's', 'i', 'z', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'c', 'h', 'a', 'n', 'g', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'c', 'u', 's', 't', 'o', 'm', 'E', 'v', 'e', 'n', 't', 0,
    'e', 'v', 'e', 'n', 't', 'F', 'i', 'l', 't', 'e', 'r', 0,
    'w', 'r', 'i', 't', 'e', 'S', 't', 'r', 'i', 'n', 'g', 0,
    'l', 'i', 'b', 'r', 'v', 'i', 'z', '_', 's', 'i', 'p', 0,
    'c', 'u', 'r', 'r', 'e', 'n', 't', 'K', 'e', 'y', 0,
    'l', 'i', 's', 't', 'L', 'e', 'n', 'g', 't', 'h', 0,
    'u', 's', 'e', 'L', 'o', 'g', 'F', 'i', 'l', 'e', 0,
    'r', 'e', 'm', 'o', 'v', 'e', 'T', 'o', 'o', 'l', 0,
    'd', 'e', 'a', 'c', 't', 'i', 'v', 'a', 't', 'e', 0,
    'r', 'v', 'i', 'z', ':', ':', 'T', 'o', 'o', 'l', 0,
    'g', 'e', 't', 'C', 'u', 'r', 'r', 'e', 'n', 't', 0,
    'g', 'e', 't', 'G', 'r', 'o', 'u', 'p', 'A', 't', 0,
    's', 'e', 't', 'C', 'l', 'a', 's', 's', 'I', 'd', 0,
    'g', 'e', 't', 'C', 'l', 'a', 's', 's', 'I', 'd', 0,
    'g', 'e', 't', 'R', 'O', 'S', 'T', 'i', 'm', 'e', 0,
    'a', 'd', 'd', 'D', 'i', 's', 'p', 'l', 'a', 'y', 0,
    's', 't', 'o', 'p', 'U', 'p', 'd', 'a', 't', 'e', 0,
    'g', 'e', 't', 'M', 'a', 'n', 'a', 'g', 'e', 'r', 0,
    'f', 'o', 'n', 't', 'C', 'h', 'a', 'n', 'g', 'e', 0,
    'e', 'n', 't', 'e', 'r', 'E', 'v', 'e', 'n', 't', 0,
    'l', 'e', 'a', 'v', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'c', 'o', 'l', 'u', 'm', 'n', 'S', 'p', 'a', 'n', 0,
    'c', 'o', 'n', 's', 't', 'r', 'a', 'i', 'n', 't', 0,
    'i', 'n', 'i', 't', 'i', 'a', 'l', 'i', 'z', 'e', 0,
    's', 'e', 't', 'V', 'i', 's', 'i', 'b', 'l', 'e', 0,
    'c', 'l', 'o', 's', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'r', 'e', 'p', 'e', 'a', 't', 'T', 'i', 'm', 'e', 0,
    'w', 'h', 'e', 'e', 'l', 'E', 'v', 'e', 'n', 't', 0,
    'p', 'a', 'i', 'n', 't', 'E', 'v', 'e', 'n', 't', 0,
    'f', 'i', 'e', 'l', 'd', 'W', 'i', 'd', 't', 'h', 0,
    's', 'e', 't', 'E', 'n', 'a', 'b', 'l', 'e', 'd', 0,
    'c', 'h', 'i', 'l', 'd', 'E', 'v', 'e', 'n', 't', 0,
    't', 'i', 'm', 'e', 'r', 'E', 'v', 'e', 'n', 't', 0,
    'r', 'e', 'a', 'd', 'S', 't', 'r', 'i', 'n', 'g', 0,
    'w', 'r', 'i', 't', 'e', 'F', 'i', 'l', 'e', 0,
    'u', 's', 'e', 'R', 'o', 's', 'L', 'o', 'g', 0,
    't', 'o', 'o', 'l', 'A', 'd', 'd', 'e', 'd', 0,
    'g', 'e', 't', 'V', 'i', 'e', 'w', 'A', 't', 0,
    'g', 'e', 't', 'C', 'u', 'r', 's', 'o', 'r', 0,
    'g', 'e', 't', 'H', 'i', 'd', 'd', 'e', 'n', 0,
    'm', 'o', 'v', 'e', 'C', 'h', 'i', 'l', 'd', 0,
    'g', 'e', 't', 'P', 'a', 'r', 'e', 'n', 't', 0,
    'r', 'e', 's', 'e', 't', 'T', 'i', 'm', 'e', 0,
    't', 'a', 'k', 'e', 'C', 'h', 'i', 'l', 'd', 0,
    'o', 'p', 'e', 'r', 'a', 't', 'i', 'o', 'n', 0,
    's', 'e', 't', 'H', 'i', 'd', 'd', 'e', 'n', 0,
    'm', 'o', 'v', 'e', 'E', 'v', 'e', 'n', 't', 0,
    's', 'e', 't', 'C', 'u', 'r', 's', 'o', 'r', 0,
    'l', 'i', 'n', 'e', 'W', 'i', 'd', 't', 'h', 0,
    's', 'h', 'o', 'w', 'E', 'v', 'e', 'n', 't', 0,
    'h', 'i', 'd', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'd', 'r', 'o', 'p', 'E', 'v', 'e', 'n', 't', 0,
    'd', 'i', 'r', 'e', 'c', 't', 'o', 'r', 'y', 0,
    'a', 'l', 'i', 'g', 'n', 'm', 'e', 'n', 't', 0,
    'r', 'e', 'm', 'o', 'v', 'e', 'A', 'l', 'l', 0,
    'i', 's', 'E', 'n', 'a', 'b', 'l', 'e', 'd', 0,
    'r', 'e', 'c', 'e', 'i', 'v', 'e', 'r', 's', 0,
    's', 'e', 't', 'P', 'a', 'r', 'e', 'n', 't', 0,
    'p', 'r', 'e', 'c', 'i', 's', 'i', 'o', 'n', 0,
    'r', 'e', 'a', 'd', 'F', 'i', 'l', 'e', 0,
    'n', 'u', 'm', 'T', 'o', 'o', 'l', 's', 0,
    'F', 'i', 'n', 'i', 's', 'h', 'e', 'd', 0,
    'g', 'e', 't', 'V', 'a', 'l', 'u', 'e', 0,
    'a', 'd', 'd', 'C', 'h', 'i', 'l', 'd', 0,
    'c', 'o', 'l', 'l', 'a', 'p', 's', 'e', 0,
    'f', 'i', 'l', 'l', 'R', 'u', 'l', 'e', 0,
    't', 'a', 'b', 'A', 'r', 'r', 'a', 'y', 0,
    't', 'a', 'b', 'S', 't', 'o', 'p', 's', 0,
    'u', 's', 'e', 'r', 'D', 'a', 't', 'a', 0,
    's', 'i', 'z', 'e', 'H', 'i', 'n', 't', 0,
    's', 'h', 'o', 'r', 't', 'c', 'u', 't', 0,
    'b', 'e', 'h', 'a', 'v', 'i', 'o', 'r', 0,
    'p', 'o', 's', 'i', 't', 'i', 'o', 'n', 0,
    'f', 'i', 'l', 'l', 'C', 'h', 'a', 'r', 0,
    's', 'e', 't', 'V', 'a', 'l', 'u', 'e', 0,
    'p', 'r', 'o', 'p', 'e', 'r', 't', 'y', 0,
    'i', 's', 'A', 'c', 't', 'i', 'v', 'e', 0,
    'g', 'e', 't', 'T', 'y', 'p', 'e', 0,
    'g', 'e', 't', 'T', 'o', 'o', 'l', 0,
    'a', 'd', 'd', 'T', 'o', 'o', 'l', 0,
    'g', 'e', 't', 'I', 'c', 'o', 'n', 0,
    's', 'e', 't', 'B', 'o', 'o', 'l', 0,
    'g', 'e', 't', 'B', 'o', 'o', 'l', 0,
    's', 'u', 'b', 'P', 'r', 'o', 'p', 0,
    'g', 'e', 't', 'N', 'a', 'm', 'e', 0,
    'a', 'd', 'd', 'P', 'a', 'n', 'e', 0,
    'd', 'e', 's', 't', 'r', 'o', 'y', 0,
    'c', 'h', 'i', 'l', 'd', 'A', 't', 0,
    's', 'e', 't', 'N', 'a', 'm', 'e', 0,
    'e', 'x', 'p', 'o', 's', 'e', 'd', 0,
    'b', 'u', 't', 't', 'o', 'n', '2', 0,
    'b', 'u', 't', 't', 'o', 'n', '1', 0,
    'q', 'u', 'a', 'l', 'i', 't', 'y', 0,
    'd', 'e', 'v', 'T', 'y', 'p', 'e', 0,
    'a', 'd', 'v', 'a', 'n', 'c', 'e', 0,
    'y', 'M', 'a', 'r', 'g', 'i', 'n', 0,
    'x', 'M', 'a', 'r', 'g', 'i', 'n', 0,
    'r', 'o', 'w', 'S', 'p', 'a', 'n', 0,
    'c', 'a', 'p', 't', 'i', 'o', 'n', 0,
    'c', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    's', 'e', 't', 'I', 'c', 'o', 'n', 0,
    'I', 'n', 'v', 'a', 'l', 'i', 'd', 0,
    'o', 'p', 't', 'i', 'o', 'n', 's', 0,
    's', 'e', 't', 'T', 'y', 'p', 'e', 0,
    'e', 'n', 'a', 'b', 'l', 'e', 'd', 0,
    'i', 's', 'V', 'a', 'l', 'i', 'd', 0,
    'f', 'i', 'l', 't', 'e', 'r', 's', 0,
    'e', 'x', 'p', 'a', 'n', 'd', 0,
    'y', 'R', 'o', 'u', 'n', 'd', 0,
    'x', 'R', 'o', 'u', 'n', 'd', 0,
    'l', 'o', 'o', 'k', 'A', 't', 0,
    'm', 'e', 't', 'r', 'i', 'c', 0,
    'l', 'a', 'y', 'e', 'r', 's', 0,
    'w', 'i', 'n', 'd', 'o', 'w', 0,
    's', 'u', 'n', 'k', 'e', 'n', 0,
    'u', 'p', 'd', 'a', 't', 'e', 0,
    'o', 'p', 't', 'i', 'o', 'n', 0,
    't', 'a', 'k', 'e', 'A', 't', 0,
    'w', 'i', 'd', 'g', 'e', 't', 0,
    'p', 'r', 'o', 'p', 'e', 'r', 0,
    's', 'e', 'n', 'd', 'e', 'r', 0,
    'v', 'a', 'l', 'u', 'e', '9', 0,
    'v', 'a', 'l', 'u', 'e', '8', 0,
    'v', 'a', 'l', 'u', 'e', '7', 0,
    'v', 'a', 'l', 'u', 'e', '6', 0,
    'v', 'a', 'l', 'u', 'e', '5', 0,
    'v', 'a', 'l', 'u', 'e', '4', 0,
    'v', 'a', 'l', 'u', 'e', '3', 0,
    'v', 'a', 'l', 'u', 'e', '0', 0,
    's', 'y', 's', 't', 'e', 'm', 0,
    's', 'y', 'm', 'b', 'o', 'l', 0,
    's', 'u', 'f', 'f', 'i', 'x', 0,
    'p', 'r', 'e', 'f', 'i', 'x', 0,
    'f', 'o', 'r', 'm', 'a', 't', 0,
    'v', 'a', 'l', 'u', 'e', '2', 0,
    'v', 'a', 'l', 'u', 'e', '1', 0,
    'a', 'c', 't', 'i', 'o', 'n', 0,
    'c', 'o', 'l', 'u', 'm', 'n', 0,
    'o', 'f', 'f', 's', 'e', 't', 0,
    'c', 'r', 'e', 'a', 't', 'e', 0,
    'f', 'i', 'l', 't', 'e', 'r', 0,
    'o', 'b', 'j', 'e', 'c', 't', 0,
    'p', 'a', 'r', 'e', 'n', 't', 0,
    'E', 'm', 'p', 't', 'y', 0,
    'n', 'o', 'L', 'o', 'g', 0,
    'm', 'i', 'm', 'i', 'c', 0,
    'b', 'r', 'u', 's', 'h', 0,
    'p', 'a', 'i', 'n', 't', 0,
    'h', 'i', 'n', 't', 's', 0,
    'r', 'e', 's', 'e', 't', 0,
    'e', 'r', 'r', 'o', 'r', 0,
    'f', 'l', 'a', 'g', 's', 0,
    'e', 'v', 'e', 'n', 't', 0,
    'm', 's', 'e', 'c', 's', 0,
    's', 't', 'a', 'r', 't', 0,
    's', 't', 'a', 't', 'e', 0,
    't', 'a', 'k', 'e', 0,
    'r', 'v', 'i', 'z', 0,
    'h', 'i', 'd', 'e', 0,
    's', 'h', 'o', 'w', 0,
    's', 'a', 'v', 'e', 0,
    'l', 'o', 'a', 'd', 0,
    'm', 'o', 'd', 'e', 0,
    'n', 'a', 'm', 'e', 0,
    'b', 'a', 's', 'e', 0,
    'f', 'i', 'l', 'l', 0,
    'f', 'r', 'o', 'm', 0,
    's', 'o', 'r', 't', 0,
    'c', 'o', 'p', 'y', 0,
    'p', 'e', 'n', 0,
    'M', 'a', 'p', 0,
    'a', 'd', 'd', 0,
    'e', 'n', 'd', 0,
    'p', 'o', 's', 0,
    's', 'w', 0,
    's', 'y', 0,
    's', 'x', 0,
};

void sipVH_librviz_sip_0(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, rviz::Config a0)
{
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "N",new rviz::Config(a0),sipType_rviz_Config,NULL);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "Z");
}

void sipVH_librviz_sip_1(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, const rviz::Config& a0)
{
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "N",new rviz::Config(a0),sipType_rviz_Config,NULL);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "Z");
}

void sipVH_librviz_sip_2(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, float a0,float a1)
{
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "ff",a0,a1);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "Z");
}

rviz::Property * sipVH_librviz_sip_3(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
    rviz::Property * sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H0", sipType_rviz_Property, &sipRes);

    return sipRes;
}

QCursor sipVH_librviz_sip_4(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
    QCursor sipRes;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H5", sipType_QCursor, &sipRes);

    return sipRes;
}

void sipVH_librviz_sip_5(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, rviz::ViewController *a0)
{
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "D",a0,sipType_rviz_ViewController,NULL);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "Z");
}

Qt::ItemFlags sipVH_librviz_sip_6(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, int a0)
{
    Qt::ItemFlags sipRes;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "i",a0);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H5", sipType_Qt_ItemFlags, &sipRes);

    return sipRes;
}

void sipVH_librviz_sip_7(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, rviz::Property *a0,int a1)
{
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "Di",a0,sipType_rviz_Property,NULL,a1);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "Z");
}

rviz::Property * sipVH_librviz_sip_8(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, int a0)
{
    rviz::Property * sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "i",a0);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H0", sipType_rviz_Property, &sipRes);

    return sipRes;
}

QWidget * sipVH_librviz_sip_9(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, QWidget *a0,const QStyleOptionViewItem& a1)
{
    QWidget * sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "DN",a0,sipType_QWidget,NULL,new QStyleOptionViewItem(a1),sipType_QStyleOptionViewItem,NULL);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H0", sipType_QWidget, &sipRes);

    return sipRes;
}

bool sipVH_librviz_sip_10(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, QPainter *a0,const QStyleOptionViewItem& a1)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "DN",a0,sipType_QPainter,NULL,new QStyleOptionViewItem(a1),sipType_QStyleOptionViewItem,NULL);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "b", &sipRes);

    return sipRes;
}

QVariant sipVH_librviz_sip_11(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
    QVariant sipRes;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H5", sipType_QVariant, &sipRes);

    return sipRes;
}

bool sipVH_librviz_sip_12(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, const QVariant& a0)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "N",new QVariant(a0),sipType_QVariant,NULL);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "b", &sipRes);

    return sipRes;
}

rviz::DisplayGroup * sipVH_librviz_sip_13(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, int a0)
{
    rviz::DisplayGroup * sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "i",a0);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H0", sipType_rviz_DisplayGroup, &sipRes);

    return sipRes;
}

rviz::Display * sipVH_librviz_sip_14(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, int a0)
{
    rviz::Display * sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "i",a0);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H0", sipType_rviz_Display, &sipRes);

    return sipRes;
}

rviz::Display * sipVH_librviz_sip_15(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, rviz::Display *a0)
{
    rviz::Display * sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "D",a0,sipType_rviz_Display,NULL);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H0", sipType_rviz_Display, &sipRes);

    return sipRes;
}

void sipVH_librviz_sip_16(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, rviz::Display *a0)
{
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "D",a0,sipType_rviz_Display,NULL);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "Z");
}

rviz::ViewManager * sipVH_librviz_sip_17(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
    rviz::ViewManager * sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H0", sipType_rviz_ViewManager, &sipRes);

    return sipRes;
}

rviz::ToolManager * sipVH_librviz_sip_18(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
    rviz::ToolManager * sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H0", sipType_rviz_ToolManager, &sipRes);

    return sipRes;
}

rviz::PanelDockWidget * sipVH_librviz_sip_19(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, const QString& a0,QWidget *a1,Qt::DockWidgetArea a2,bool a3)
{
    rviz::PanelDockWidget * sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "NDFb",new QString(a0),sipType_QString,NULL,a1,sipType_QWidget,NULL,a2,sipType_Qt_DockWidgetArea,a3);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H0", sipType_rviz_PanelDockWidget, &sipRes);

    return sipRes;
}
static sipEnumTypeDef enumTypes[] = {
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_rviz__Config__Type, {0}}, sipNameNr_Type, 2, NULL},
};


/*
 * This defines each type in this module.
 */
static sipTypeDef *typesTable[] = {
    &sipTypeDef_librviz_sip_rviz.super.ctd_base,
    &sipTypeDef_librviz_sip_rviz_BoolProperty.super.ctd_base,
    &sipTypeDef_librviz_sip_rviz_Config.super.ctd_base,
    &sipTypeDef_librviz_sip_rviz_Config_MapIterator.super.ctd_base,
    &enumTypes[0].etd_base,
    &sipTypeDef_librviz_sip_rviz_Display.super.ctd_base,
    &sipTypeDef_librviz_sip_rviz_DisplayGroup.super.ctd_base,
    &sipTypeDef_librviz_sip_rviz_OgreLogging.super.ctd_base,
    &sipTypeDef_librviz_sip_rviz_PanelDockWidget.super.ctd_base,
    &sipTypeDef_librviz_sip_rviz_Property.super.ctd_base,
    &sipTypeDef_librviz_sip_rviz_Tool.super.ctd_base,
    &sipTypeDef_librviz_sip_rviz_ToolManager.super.ctd_base,
    &sipTypeDef_librviz_sip_rviz_ViewController.super.ctd_base,
    &sipTypeDef_librviz_sip_rviz_ViewManager.super.ctd_base,
    &sipTypeDef_librviz_sip_rviz_VisualizationFrame.super.ctd_base,
    &sipTypeDef_librviz_sip_rviz_VisualizationManager.super.ctd_base,
    &sipTypeDef_librviz_sip_rviz_YamlConfigReader.super.ctd_base,
    &sipTypeDef_librviz_sip_rviz_YamlConfigWriter.super.ctd_base,
};


/*
 * This defines the virtual handlers that this module implements and can be
 * used by other modules.
 */
static sipVirtHandlerFunc virtHandlersTable[] = {
    (sipVirtHandlerFunc)sipVH_librviz_sip_0,
    (sipVirtHandlerFunc)sipVH_librviz_sip_1,
    (sipVirtHandlerFunc)sipVH_librviz_sip_2,
    (sipVirtHandlerFunc)sipVH_librviz_sip_3,
    (sipVirtHandlerFunc)sipVH_librviz_sip_4,
    (sipVirtHandlerFunc)sipVH_librviz_sip_5,
    (sipVirtHandlerFunc)sipVH_librviz_sip_6,
    (sipVirtHandlerFunc)sipVH_librviz_sip_7,
    (sipVirtHandlerFunc)sipVH_librviz_sip_8,
    (sipVirtHandlerFunc)sipVH_librviz_sip_9,
    (sipVirtHandlerFunc)sipVH_librviz_sip_10,
    (sipVirtHandlerFunc)sipVH_librviz_sip_11,
    (sipVirtHandlerFunc)sipVH_librviz_sip_12,
    (sipVirtHandlerFunc)sipVH_librviz_sip_13,
    (sipVirtHandlerFunc)sipVH_librviz_sip_14,
    (sipVirtHandlerFunc)sipVH_librviz_sip_15,
    (sipVirtHandlerFunc)sipVH_librviz_sip_16,
    (sipVirtHandlerFunc)sipVH_librviz_sip_17,
    (sipVirtHandlerFunc)sipVH_librviz_sip_18,
    (sipVirtHandlerFunc)sipVH_librviz_sip_19,
};


/* This defines the modules that this module needs to import. */
static sipImportedModuleDef importsTable[] = {
    {"PyQt4.QtCore", 1, NULL},
    {"PyQt4.QtGui", -1, NULL},
    {NULL, -1, NULL}
};


/* This defines this module. */
sipExportedModuleDef sipModuleAPI_librviz_sip = {
    0,
    SIP_API_MINOR_NR,
    sipNameNr_librviz_sip,
    0,
    -1,
    sipStrings_librviz_sip,
    importsTable,
    NULL,
    18,
    typesTable,
    NULL,
    0,
    NULL,
    0,
    NULL,
    virtHandlersTable,
    NULL,
    NULL,
    {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL},
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL
};


/* The SIP API and the APIs of any imported modules. */
const sipAPIDef *sipAPI_librviz_sip;
const sipExportedModuleDef *sipModuleAPI_librviz_sip_QtCore;
const sipExportedModuleDef *sipModuleAPI_librviz_sip_QtGui;

sip_qt_metaobject_func sip_librviz_sip_qt_metaobject;
sip_qt_metacall_func sip_librviz_sip_qt_metacall;
sip_qt_metacast_func sip_librviz_sip_qt_metacast;


/* The Python module initialisation function. */
#if PY_MAJOR_VERSION >= 3
#define SIP_MODULE_ENTRY        PyInit_librviz_sip
#define SIP_MODULE_TYPE         PyObject *
#define SIP_MODULE_DISCARD(r)   Py_DECREF(r)
#define SIP_MODULE_RETURN(r)    return (r)
#else
#define SIP_MODULE_ENTRY        initlibrviz_sip
#define SIP_MODULE_TYPE         void
#define SIP_MODULE_DISCARD(r)
#define SIP_MODULE_RETURN(r)    return
#endif

#if defined(SIP_STATIC_MODULE)
extern "C" SIP_MODULE_TYPE SIP_MODULE_ENTRY()
#else
PyMODINIT_FUNC SIP_MODULE_ENTRY()
#endif
{
    static PyMethodDef sip_methods[] = {
        {0, 0, 0, 0}
    };

#if PY_MAJOR_VERSION >= 3
    static PyModuleDef sip_module_def = {
        PyModuleDef_HEAD_INIT,
        "librviz_sip",
        NULL,
        -1,
        sip_methods,
        NULL,
        NULL,
        NULL,
        NULL
    };
#endif

    PyObject *sipModule, *sipModuleDict;
    PyObject *sip_sipmod, *sip_capiobj;

    /* Initialise the module and get it's dictionary. */
#if PY_MAJOR_VERSION >= 3
    sipModule = PyModule_Create(&sip_module_def);
#elif PY_VERSION_HEX >= 0x02050000
    sipModule = Py_InitModule(sipName_librviz_sip, sip_methods);
#else
    sipModule = Py_InitModule(const_cast<char *>(sipName_librviz_sip), sip_methods);
#endif

    if (sipModule == NULL)
        SIP_MODULE_RETURN(NULL);

    sipModuleDict = PyModule_GetDict(sipModule);

    /* Get the SIP module's API. */
#if PY_VERSION_HEX >= 0x02050000
    sip_sipmod = PyImport_ImportModule(SIP_MODULE_NAME);
#else
    sip_sipmod = PyImport_ImportModule(const_cast<char *>(SIP_MODULE_NAME));
#endif

    if (sip_sipmod == NULL)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }

    sip_capiobj = PyDict_GetItemString(PyModule_GetDict(sip_sipmod), "_C_API");
    Py_DECREF(sip_sipmod);

#if defined(SIP_USE_PYCAPSULE)
    if (sip_capiobj == NULL || !PyCapsule_CheckExact(sip_capiobj))
#else
    if (sip_capiobj == NULL || !PyCObject_Check(sip_capiobj))
#endif
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }

#if defined(SIP_USE_PYCAPSULE)
    sipAPI_librviz_sip = reinterpret_cast<const sipAPIDef *>(PyCapsule_GetPointer(sip_capiobj, SIP_MODULE_NAME "._C_API"));
#else
    sipAPI_librviz_sip = reinterpret_cast<const sipAPIDef *>(PyCObject_AsVoidPtr(sip_capiobj));
#endif

#if defined(SIP_USE_PYCAPSULE)
    if (sipAPI_librviz_sip == NULL)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }
#endif

    /* Export the module and publish it's API. */
    if (sipExportModule(&sipModuleAPI_librviz_sip,SIP_API_MAJOR_NR,SIP_API_MINOR_NR,0) < 0)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(0);
    }

    sip_librviz_sip_qt_metaobject = (sip_qt_metaobject_func)sipImportSymbol("qtcore_qt_metaobject");
    sip_librviz_sip_qt_metacall = (sip_qt_metacall_func)sipImportSymbol("qtcore_qt_metacall");
    sip_librviz_sip_qt_metacast = (sip_qt_metacast_func)sipImportSymbol("qtcore_qt_metacast");

    if (!sip_librviz_sip_qt_metacast)
        Py_FatalError("Unable to import qtcore_qt_metacast");

    /* Initialise the module now all its dependencies have been set up. */
    if (sipInitModule(&sipModuleAPI_librviz_sip,sipModuleDict) < 0)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(0);
    }

    /* Get the APIs of the modules that this one is dependent on. */
    sipModuleAPI_librviz_sip_QtCore = sipModuleAPI_librviz_sip.em_imports[0].im_module;
    sipModuleAPI_librviz_sip_QtGui = sipModuleAPI_librviz_sip.em_imports[1].im_module;

    SIP_MODULE_RETURN(sipModule);
}
