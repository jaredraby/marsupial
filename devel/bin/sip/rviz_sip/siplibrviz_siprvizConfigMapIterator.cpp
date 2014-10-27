/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.15.5 on Tue Oct 21 18:16:30 2014
 */

#include "sipAPIlibrviz_sip.h"

#line 7 "config.sip"
#define ROS_PACKAGE_NAME "rviz"
#include <rviz/config.h>
#line 45 "config.sip"
#define ROS_PACKAGE_NAME "rviz"
#include <rviz/config.h>
#line 16 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_siprvizConfigMapIterator.cpp"

#line 7 "config.sip"
#define ROS_PACKAGE_NAME "rviz"
#include <rviz/config.h>
#line 21 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_siprvizConfigMapIterator.cpp"
#line 36 "/usr/share/sip/PyQt4/QtCore/qstring.sip"
#include <qstring.h>
#line 24 "/home/jared/marsupial/devel/bin/sip/rviz_sip/siplibrviz_siprvizConfigMapIterator.cpp"


extern "C" {static PyObject *meth_rviz_Config_MapIterator_advance(PyObject *, PyObject *);}
static PyObject *meth_rviz_Config_MapIterator_advance(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        rviz::Config::MapIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_rviz_Config_MapIterator, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->advance();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MapIterator, sipName_advance, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_rviz_Config_MapIterator_isValid(PyObject *, PyObject *);}
static PyObject *meth_rviz_Config_MapIterator_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        rviz::Config::MapIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_rviz_Config_MapIterator, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MapIterator, sipName_isValid, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_rviz_Config_MapIterator_start(PyObject *, PyObject *);}
static PyObject *meth_rviz_Config_MapIterator_start(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        rviz::Config::MapIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_rviz_Config_MapIterator, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->start();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MapIterator, sipName_start, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_rviz_Config_MapIterator_currentKey(PyObject *, PyObject *);}
static PyObject *meth_rviz_Config_MapIterator_currentKey(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        rviz::Config::MapIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_rviz_Config_MapIterator, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->currentKey());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MapIterator, sipName_currentKey, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_rviz_Config_MapIterator_currentChild(PyObject *, PyObject *);}
static PyObject *meth_rviz_Config_MapIterator_currentChild(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        rviz::Config::MapIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_rviz_Config_MapIterator, &sipCpp))
        {
            rviz::Config *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new rviz::Config(sipCpp->currentChild());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_rviz_Config,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MapIterator, sipName_currentChild, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_rviz_Config_MapIterator(void *, const sipTypeDef *);}
static void *cast_rviz_Config_MapIterator(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_rviz_Config_MapIterator)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_rviz_Config_MapIterator(void *, int);}
static void release_rviz_Config_MapIterator(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<rviz::Config::MapIterator *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_rviz_Config_MapIterator(sipSimpleWrapper *);}
static void dealloc_rviz_Config_MapIterator(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_rviz_Config_MapIterator(sipGetAddress(sipSelf),0);
    }
}


static PyMethodDef methods_rviz_Config_MapIterator[] = {
    {SIP_MLNAME_CAST(sipName_advance), meth_rviz_Config_MapIterator_advance, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_currentChild), meth_rviz_Config_MapIterator_currentChild, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_currentKey), meth_rviz_Config_MapIterator_currentKey, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isValid), meth_rviz_Config_MapIterator_isValid, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_start), meth_rviz_Config_MapIterator_start, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_librviz_sip_rviz_Config_MapIterator = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_rviz__Config__MapIterator,
        {0}
    },
    {
        sipNameNr_MapIterator,
        {2, 255, 0},
        5, methods_rviz_Config_MapIterator,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
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
    dealloc_rviz_Config_MapIterator,
    0,
    0,
    0,
    release_rviz_Config_MapIterator,
    cast_rviz_Config_MapIterator,
    0,
    0,
    0,
    0,
    0,
    0
},
    0,
    0,
    0
};
