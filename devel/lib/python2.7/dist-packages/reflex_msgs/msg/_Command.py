# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from reflex_msgs/Command.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import reflex_msgs.msg

class Command(genpy.Message):
  _md5sum = "bcad31578e17a6697c2483ccda6d52eb"
  _type = "reflex_msgs/Command"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """PoseCommand pose
VelocityCommand velocity

================================================================================
MSG: reflex_msgs/PoseCommand
# Position in radians of various motors
float64 f1
float64 f2
float64 f3
float64 preshape

================================================================================
MSG: reflex_msgs/VelocityCommand
# Velocity in radians/second of various motors
float64 f1
float64 f2
float64 f3
float64 preshape
"""
  __slots__ = ['pose','velocity']
  _slot_types = ['reflex_msgs/PoseCommand','reflex_msgs/VelocityCommand']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       pose,velocity

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Command, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.pose is None:
        self.pose = reflex_msgs.msg.PoseCommand()
      if self.velocity is None:
        self.velocity = reflex_msgs.msg.VelocityCommand()
    else:
      self.pose = reflex_msgs.msg.PoseCommand()
      self.velocity = reflex_msgs.msg.VelocityCommand()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_8d.pack(_x.pose.f1, _x.pose.f2, _x.pose.f3, _x.pose.preshape, _x.velocity.f1, _x.velocity.f2, _x.velocity.f3, _x.velocity.preshape))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.pose is None:
        self.pose = reflex_msgs.msg.PoseCommand()
      if self.velocity is None:
        self.velocity = reflex_msgs.msg.VelocityCommand()
      end = 0
      _x = self
      start = end
      end += 64
      (_x.pose.f1, _x.pose.f2, _x.pose.f3, _x.pose.preshape, _x.velocity.f1, _x.velocity.f2, _x.velocity.f3, _x.velocity.preshape,) = _struct_8d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_8d.pack(_x.pose.f1, _x.pose.f2, _x.pose.f3, _x.pose.preshape, _x.velocity.f1, _x.velocity.f2, _x.velocity.f3, _x.velocity.preshape))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.pose is None:
        self.pose = reflex_msgs.msg.PoseCommand()
      if self.velocity is None:
        self.velocity = reflex_msgs.msg.VelocityCommand()
      end = 0
      _x = self
      start = end
      end += 64
      (_x.pose.f1, _x.pose.f2, _x.pose.f3, _x.pose.preshape, _x.velocity.f1, _x.velocity.f2, _x.velocity.f3, _x.velocity.preshape,) = _struct_8d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_8d = struct.Struct("<8d")
