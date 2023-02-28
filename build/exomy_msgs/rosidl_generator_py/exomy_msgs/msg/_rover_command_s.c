// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from exomy_msgs:msg/RoverCommand.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "exomy_msgs/msg/detail/rover_command__struct.h"
#include "exomy_msgs/msg/detail/rover_command__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool exomy_msgs__msg__rover_command__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("exomy_msgs.msg._rover_command.RoverCommand", full_classname_dest, 42) == 0);
  }
  exomy_msgs__msg__RoverCommand * ros_message = _ros_message;
  {  // connected
    PyObject * field = PyObject_GetAttrString(_pymsg, "connected");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->connected = (Py_True == field);
    Py_DECREF(field);
  }
  {  // motors_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "motors_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->motors_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // locomotion_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "locomotion_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->locomotion_mode = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vel = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // steering
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->steering = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * exomy_msgs__msg__rover_command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RoverCommand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("exomy_msgs.msg._rover_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RoverCommand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  exomy_msgs__msg__RoverCommand * ros_message = (exomy_msgs__msg__RoverCommand *)raw_ros_message;
  {  // connected
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->connected ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "connected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motors_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->motors_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motors_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // locomotion_mode
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->locomotion_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "locomotion_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->steering);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
