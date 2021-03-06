# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from reflex_msgs2/Imu.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class Imu(genpy.Message):
  _md5sum = "dea5c53d0c934f48b1ee6e5a6eed4389"
  _type = "reflex_msgs2/Imu"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# quaternion reading from IMU (w, x, y, z)
float32[4] quat	
float32[3] euler_angles 

# these are defined in reflex_hand.h driver
uint8 calibration_status 
uint16[11] calibration_data
"""
  __slots__ = ['quat','euler_angles','calibration_status','calibration_data']
  _slot_types = ['float32[4]','float32[3]','uint8','uint16[11]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       quat,euler_angles,calibration_status,calibration_data

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Imu, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.quat is None:
        self.quat = [0.,0.,0.,0.]
      if self.euler_angles is None:
        self.euler_angles = [0.,0.,0.]
      if self.calibration_status is None:
        self.calibration_status = 0
      if self.calibration_data is None:
        self.calibration_data = [0,0,0,0,0,0,0,0,0,0,0]
    else:
      self.quat = [0.,0.,0.,0.]
      self.euler_angles = [0.,0.,0.]
      self.calibration_status = 0
      self.calibration_data = [0,0,0,0,0,0,0,0,0,0,0]

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
      buff.write(_struct_4f.pack(*self.quat))
      buff.write(_struct_3f.pack(*self.euler_angles))
      buff.write(_struct_B.pack(self.calibration_status))
      buff.write(_struct_11H.pack(*self.calibration_data))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 16
      self.quat = _struct_4f.unpack(str[start:end])
      start = end
      end += 12
      self.euler_angles = _struct_3f.unpack(str[start:end])
      start = end
      end += 1
      (self.calibration_status,) = _struct_B.unpack(str[start:end])
      start = end
      end += 22
      self.calibration_data = _struct_11H.unpack(str[start:end])
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
      buff.write(self.quat.tostring())
      buff.write(self.euler_angles.tostring())
      buff.write(_struct_B.pack(self.calibration_status))
      buff.write(self.calibration_data.tostring())
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 16
      self.quat = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=4)
      start = end
      end += 12
      self.euler_angles = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=3)
      start = end
      end += 1
      (self.calibration_status,) = _struct_B.unpack(str[start:end])
      start = end
      end += 22
      self.calibration_data = numpy.frombuffer(str[start:end], dtype=numpy.uint16, count=11)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_4f = struct.Struct("<4f")
_struct_B = struct.Struct("<B")
_struct_3f = struct.Struct("<3f")
_struct_11H = struct.Struct("<11H")
