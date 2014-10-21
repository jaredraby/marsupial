/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.15.5 on Sun Oct 19 18:23:54 2014
 */

#include "sipAPIlibrviz_sip.h"

#line 7 "tool_manager.sip"
#define ROS_PACKAGE_NAME "rviz"
#include <rviz/tool_manager.h>
#line 13 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_siprvizToolManager.cpp"

#line 7 "tool.sip"
#define ROS_PACKAGE_NAME "rviz"
#include <rviz/tool.h>
#line 18 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_siprvizToolManager.cpp"
#line 36 "/usr/share/sip/PyQt4/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 21 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_siprvizToolManager.cpp"
#line 36 "/usr/share/sip/PyQt4/QtCore/qstring.sip"
#include <qstring.h>
#line 24 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_siprvizToolManager.cpp"
#line 7 "config.sip"
#define ROS_PACKAGE_NAME "rviz"
#include <rviz/config.h>
#line 28 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_siprvizToolManager.cpp"
#line 31 "/usr/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 31 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_siprvizToolManager.cpp"
#line 355 "/usr/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 34 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_siprvizToolManager.cpp"
#line 338 "/usr/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 37 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_siprvizToolManager.cpp"
#line 34 "/usr/share/sip/PyQt4/QtCore/qobject.sip"
#include <qobject.h>
#line 40 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_siprvizToolManager.cpp"
#line 274 "/usr/share/sip/PyQt4/QtCore/qvariant.sip"
#include <qvariant.h>
#line 43 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_siprvizToolManager.cpp"
#line 33 "/usr/share/sip/PyQt4/QtCore/qlist.sip"
#include <qlist.h>
#line 46 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_siprvizToolManager.cpp"
#line 37 "/usr/share/sip/PyQt4/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 49 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_siprvizToolManager.cpp"
#line 35 "/usr/share/sip/PyQt4/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 52 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_siprvizToolManager.cpp"
#line 120 "/usr/share/sip/PyQt4/QtCore/qlist.sip"
#include <qlist.h>
#line 55 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_siprvizToolManager.cpp"
#line 31 "/usr/share/sip/PyQt4/QtCore/qthread.sip"
#include <qthread.h>
#line 58 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_siprvizToolManager.cpp"
#line 35 "/usr/share/sip/PyQt4/QtCore/qregexp.sip"
#include <qregexp.h>
#line 61 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_siprvizToolManager.cpp"
#line 31 "/usr/share/sip/PyQt4/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 64 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_siprvizToolManager.cpp"


extern "C" {static PyObject *meth_rviz_ToolManager_initialize(PyObject *, PyObject *);}
static PyObject *meth_rviz_ToolManager_initialize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        rviz::ToolManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_rviz_ToolManager, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->initialize();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ToolManager, sipName_initialize, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_rviz_ToolManager_load(PyObject *, PyObject *);}
static PyObject *meth_rviz_ToolManager_load(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const rviz::Config * a0;
        rviz::ToolManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_rviz_ToolManager, &sipCpp, sipType_rviz_Config, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->rviz::ToolManager::load(*a0) : sipCpp->load(*a0));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ToolManager, sipName_load, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_rviz_ToolManager_save(PyObject *, PyObject *);}
static PyObject *meth_rviz_ToolManager_save(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        rviz::Config * a0;
        const rviz::ToolManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_rviz_ToolManager, &sipCpp, sipType_rviz_Config, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->rviz::ToolManager::save(*a0) : sipCpp->save(*a0));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ToolManager, sipName_save, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_rviz_ToolManager_addTool(PyObject *, PyObject *);}
static PyObject *meth_rviz_ToolManager_addTool(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        rviz::ToolManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_rviz_ToolManager, &sipCpp, sipType_QString,&a0, &a0State))
        {
            rviz::Tool *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->addTool(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromType(sipRes,sipType_rviz_Tool,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ToolManager, sipName_addTool, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_rviz_ToolManager_getCurrentTool(PyObject *, PyObject *);}
static PyObject *meth_rviz_ToolManager_getCurrentTool(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        rviz::ToolManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_rviz_ToolManager, &sipCpp))
        {
            rviz::Tool *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->getCurrentTool();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_rviz_Tool,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ToolManager, sipName_getCurrentTool, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_rviz_ToolManager_getTool(PyObject *, PyObject *);}
static PyObject *meth_rviz_ToolManager_getTool(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        rviz::ToolManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_rviz_ToolManager, &sipCpp, &a0))
        {
            rviz::Tool *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->getTool(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_rviz_Tool,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ToolManager, sipName_getTool, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_rviz_ToolManager_numTools(PyObject *, PyObject *);}
static PyObject *meth_rviz_ToolManager_numTools(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        rviz::ToolManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_rviz_ToolManager, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->numTools();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ToolManager, sipName_numTools, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_rviz_ToolManager_removeTool(PyObject *, PyObject *);}
static PyObject *meth_rviz_ToolManager_removeTool(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        rviz::ToolManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_rviz_ToolManager, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->removeTool(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ToolManager, sipName_removeTool, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_rviz_ToolManager_removeAll(PyObject *, PyObject *);}
static PyObject *meth_rviz_ToolManager_removeAll(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        rviz::ToolManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_rviz_ToolManager, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->removeAll();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ToolManager, sipName_removeAll, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_rviz_ToolManager_setCurrentTool(PyObject *, PyObject *);}
static PyObject *meth_rviz_ToolManager_setCurrentTool(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        rviz::Tool * a0;
        rviz::ToolManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_rviz_ToolManager, &sipCpp, sipType_rviz_Tool, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setCurrentTool(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ToolManager, sipName_setCurrentTool, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_rviz_ToolManager_setDefaultTool(PyObject *, PyObject *);}
static PyObject *meth_rviz_ToolManager_setDefaultTool(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        rviz::Tool * a0;
        rviz::ToolManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_rviz_ToolManager, &sipCpp, sipType_rviz_Tool, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setDefaultTool(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ToolManager, sipName_setDefaultTool, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_rviz_ToolManager_getDefaultTool(PyObject *, PyObject *);}
static PyObject *meth_rviz_ToolManager_getDefaultTool(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        rviz::ToolManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_rviz_ToolManager, &sipCpp))
        {
            rviz::Tool *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->getDefaultTool();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_rviz_Tool,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ToolManager, sipName_getDefaultTool, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_rviz_ToolManager_getToolClasses(PyObject *, PyObject *);}
static PyObject *meth_rviz_ToolManager_getToolClasses(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        rviz::ToolManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_rviz_ToolManager, &sipCpp))
        {
            QStringList *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStringList(sipCpp->getToolClasses());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ToolManager, sipName_getToolClasses, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_rviz_ToolManager(void *, const sipTypeDef *);}
static void *cast_rviz_ToolManager(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_rviz_ToolManager)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(rviz::ToolManager *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_rviz_ToolManager(void *, int);}
static void release_rviz_ToolManager(void *sipCppV,int)
{
    rviz::ToolManager *sipCpp = reinterpret_cast<rviz::ToolManager *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_rviz_ToolManager(sipSimpleWrapper *);}
static void dealloc_rviz_ToolManager(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_rviz_ToolManager(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_rviz_ToolManager[] = {{141, 0, 1}};


static PyMethodDef methods_rviz_ToolManager[] = {
    {SIP_MLNAME_CAST(sipName_addTool), meth_rviz_ToolManager_addTool, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getCurrentTool), meth_rviz_ToolManager_getCurrentTool, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getDefaultTool), meth_rviz_ToolManager_getDefaultTool, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getTool), meth_rviz_ToolManager_getTool, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getToolClasses), meth_rviz_ToolManager_getToolClasses, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_initialize), meth_rviz_ToolManager_initialize, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_load), meth_rviz_ToolManager_load, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_numTools), meth_rviz_ToolManager_numTools, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_removeAll), meth_rviz_ToolManager_removeAll, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_removeTool), meth_rviz_ToolManager_removeTool, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_save), meth_rviz_ToolManager_save, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setCurrentTool), meth_rviz_ToolManager_setCurrentTool, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setDefaultTool), meth_rviz_ToolManager_setDefaultTool, METH_VARARGS, NULL}
};


/* Define this type's signals. */
static const pyqt4QtSignal signals_rviz_ToolManager[] = {
    {"toolRemoved(rviz::Tool *)", 0, 0, 0},
    {"toolChanged(rviz::Tool *)", 0, 0, 0},
    {"toolAdded(rviz::Tool *)", 0, 0, 0},
    {"configChanged()", 0, 0, 0},
    {0, 0, 0, 0}
};


pyqt4ClassTypeDef sipTypeDef_librviz_sip_rviz_ToolManager = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_rviz__ToolManager,
        {0}
    },
    {
        sipNameNr_ToolManager,
        {0, 255, 0},
        13, methods_rviz_ToolManager,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_rviz_ToolManager,
    0,
    0,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_rviz_ToolManager,
    0,
    0,
    0,
    release_rviz_ToolManager,
    cast_rviz_ToolManager,
    0,
    0,
    0,
    0,
    0,
    0
},
    &rviz::ToolManager::staticMetaObject,
    0,
    signals_rviz_ToolManager,
};
