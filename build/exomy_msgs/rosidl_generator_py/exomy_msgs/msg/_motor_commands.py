# generated from rosidl_generator_py/resource/_idl.py.em
# with input from exomy_msgs:msg/MotorCommands.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'motor_speeds'
# Member 'motor_angles'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorCommands(type):
    """Metaclass of message 'MotorCommands'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('exomy_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'exomy_msgs.msg.MotorCommands')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_commands
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_commands
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_commands
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_commands
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_commands

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorCommands(metaclass=Metaclass_MotorCommands):
    """Message class 'MotorCommands'."""

    __slots__ = [
        '_motor_speeds',
        '_motor_angles',
    ]

    _fields_and_field_types = {
        'motor_speeds': 'sequence<int64>',
        'motor_angles': 'sequence<int64>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.motor_speeds = array.array('q', kwargs.get('motor_speeds', []))
        self.motor_angles = array.array('q', kwargs.get('motor_angles', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.motor_speeds != other.motor_speeds:
            return False
        if self.motor_angles != other.motor_angles:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def motor_speeds(self):
        """Message field 'motor_speeds'."""
        return self._motor_speeds

    @motor_speeds.setter
    def motor_speeds(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'motor_speeds' array.array() must have the type code of 'q'"
            self._motor_speeds = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'motor_speeds' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._motor_speeds = array.array('q', value)

    @property
    def motor_angles(self):
        """Message field 'motor_angles'."""
        return self._motor_angles

    @motor_angles.setter
    def motor_angles(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'motor_angles' array.array() must have the type code of 'q'"
            self._motor_angles = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'motor_angles' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._motor_angles = array.array('q', value)
