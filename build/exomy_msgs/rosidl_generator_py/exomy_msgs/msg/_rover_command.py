# generated from rosidl_generator_py/resource/_idl.py.em
# with input from exomy_msgs:msg/RoverCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RoverCommand(type):
    """Metaclass of message 'RoverCommand'."""

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
                'exomy_msgs.msg.RoverCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rover_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rover_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rover_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rover_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rover_command

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RoverCommand(metaclass=Metaclass_RoverCommand):
    """Message class 'RoverCommand'."""

    __slots__ = [
        '_connected',
        '_motors_enabled',
        '_locomotion_mode',
        '_vel',
        '_steering',
    ]

    _fields_and_field_types = {
        'connected': 'boolean',
        'motors_enabled': 'boolean',
        'locomotion_mode': 'int64',
        'vel': 'int64',
        'steering': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.connected = kwargs.get('connected', bool())
        self.motors_enabled = kwargs.get('motors_enabled', bool())
        self.locomotion_mode = kwargs.get('locomotion_mode', int())
        self.vel = kwargs.get('vel', int())
        self.steering = kwargs.get('steering', int())

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
        if self.connected != other.connected:
            return False
        if self.motors_enabled != other.motors_enabled:
            return False
        if self.locomotion_mode != other.locomotion_mode:
            return False
        if self.vel != other.vel:
            return False
        if self.steering != other.steering:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def connected(self):
        """Message field 'connected'."""
        return self._connected

    @connected.setter
    def connected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'connected' field must be of type 'bool'"
        self._connected = value

    @property
    def motors_enabled(self):
        """Message field 'motors_enabled'."""
        return self._motors_enabled

    @motors_enabled.setter
    def motors_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'motors_enabled' field must be of type 'bool'"
        self._motors_enabled = value

    @property
    def locomotion_mode(self):
        """Message field 'locomotion_mode'."""
        return self._locomotion_mode

    @locomotion_mode.setter
    def locomotion_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'locomotion_mode' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'locomotion_mode' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._locomotion_mode = value

    @property
    def vel(self):
        """Message field 'vel'."""
        return self._vel

    @vel.setter
    def vel(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vel' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'vel' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._vel = value

    @property
    def steering(self):
        """Message field 'steering'."""
        return self._steering

    @steering.setter
    def steering(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'steering' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'steering' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._steering = value
