/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: e2.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "e2.pb-c.h"
void   enumtest__init
                     (Enumtest         *message)
{
  static const Enumtest init_value = ENUMTEST__INIT;
  *message = init_value;
}
size_t enumtest__get_packed_size
                     (const Enumtest *message)
{
  assert(message->base.descriptor == &enumtest__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t enumtest__pack
                     (const Enumtest *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &enumtest__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t enumtest__pack_to_buffer
                     (const Enumtest *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &enumtest__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Enumtest *
       enumtest__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Enumtest *)
     protobuf_c_message_unpack (&enumtest__descriptor,
                                allocator, len, data);
}
void   enumtest__free_unpacked
                     (Enumtest *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &enumtest__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   simple_message__init
                     (SimpleMessage         *message)
{
  static const SimpleMessage init_value = SIMPLE_MESSAGE__INIT;
  *message = init_value;
}
size_t simple_message__get_packed_size
                     (const SimpleMessage *message)
{
  assert(message->base.descriptor == &simple_message__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t simple_message__pack
                     (const SimpleMessage *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &simple_message__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t simple_message__pack_to_buffer
                     (const SimpleMessage *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &simple_message__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
SimpleMessage *
       simple_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (SimpleMessage *)
     protobuf_c_message_unpack (&simple_message__descriptor,
                                allocator, len, data);
}
void   simple_message__free_unpacked
                     (SimpleMessage *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &simple_message__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   e2_request__init
                     (E2Request         *message)
{
  static const E2Request init_value = E2_REQUEST__INIT;
  *message = init_value;
}
size_t e2_request__get_packed_size
                     (const E2Request *message)
{
  assert(message->base.descriptor == &e2_request__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t e2_request__pack
                     (const E2Request *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &e2_request__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t e2_request__pack_to_buffer
                     (const E2Request *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &e2_request__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
E2Request *
       e2_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (E2Request *)
     protobuf_c_message_unpack (&e2_request__descriptor,
                                allocator, len, data);
}
void   e2_request__free_unpacked
                     (E2Request *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &e2_request__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   e2_dummy_response__init
                     (E2DummyResponse         *message)
{
  static const E2DummyResponse init_value = E2_DUMMY_RESPONSE__INIT;
  *message = init_value;
}
size_t e2_dummy_response__get_packed_size
                     (const E2DummyResponse *message)
{
  assert(message->base.descriptor == &e2_dummy_response__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t e2_dummy_response__pack
                     (const E2DummyResponse *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &e2_dummy_response__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t e2_dummy_response__pack_to_buffer
                     (const E2DummyResponse *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &e2_dummy_response__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
E2DummyResponse *
       e2_dummy_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (E2DummyResponse *)
     protobuf_c_message_unpack (&e2_dummy_response__descriptor,
                                allocator, len, data);
}
void   e2_dummy_response__free_unpacked
                     (E2DummyResponse *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &e2_dummy_response__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   map_field_entry__init
                     (MapFieldEntry         *message)
{
  static const MapFieldEntry init_value = MAP_FIELD_ENTRY__INIT;
  *message = init_value;
}
size_t map_field_entry__get_packed_size
                     (const MapFieldEntry *message)
{
  assert(message->base.descriptor == &map_field_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t map_field_entry__pack
                     (const MapFieldEntry *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &map_field_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t map_field_entry__pack_to_buffer
                     (const MapFieldEntry *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &map_field_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
MapFieldEntry *
       map_field_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (MapFieldEntry *)
     protobuf_c_message_unpack (&map_field_entry__descriptor,
                                allocator, len, data);
}
void   map_field_entry__free_unpacked
                     (MapFieldEntry *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &map_field_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   map_mess__init
                     (MapMess         *message)
{
  static const MapMess init_value = MAP_MESS__INIT;
  *message = init_value;
}
size_t map_mess__get_packed_size
                     (const MapMess *message)
{
  assert(message->base.descriptor == &map_mess__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t map_mess__pack
                     (const MapMess *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &map_mess__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t map_mess__pack_to_buffer
                     (const MapMess *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &map_mess__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
MapMess *
       map_mess__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (MapMess *)
     protobuf_c_message_unpack (&map_mess__descriptor,
                                allocator, len, data);
}
void   map_mess__free_unpacked
                     (MapMess *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &map_mess__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor enumtest__field_descriptors[2] =
{
  {
    "a",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Enumtest, a),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "et",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Enumtest, et),
    &etype__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned enumtest__field_indices_by_name[] = {
  0,   /* field[0] = a */
  1,   /* field[1] = et */
};
static const ProtobufCIntRange enumtest__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor enumtest__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "enumtest",
  "Enumtest",
  "Enumtest",
  "",
  sizeof(Enumtest),
  2,
  enumtest__field_descriptors,
  enumtest__field_indices_by_name,
  1,  enumtest__number_ranges,
  (ProtobufCMessageInit) enumtest__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor simple_message__field_descriptors[1] =
{
  {
    "lucky_number",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(SimpleMessage, lucky_number),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned simple_message__field_indices_by_name[] = {
  0,   /* field[0] = lucky_number */
};
static const ProtobufCIntRange simple_message__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor simple_message__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "SimpleMessage",
  "SimpleMessage",
  "SimpleMessage",
  "",
  sizeof(SimpleMessage),
  1,
  simple_message__field_descriptors,
  simple_message__field_indices_by_name,
  1,  simple_message__number_ranges,
  (ProtobufCMessageInit) simple_message__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor e2_request__field_descriptors[1] =
{
  {
    "req_id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(E2Request, req_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned e2_request__field_indices_by_name[] = {
  0,   /* field[0] = req_id */
};
static const ProtobufCIntRange e2_request__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor e2_request__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "E2_request",
  "E2Request",
  "E2Request",
  "",
  sizeof(E2Request),
  1,
  e2_request__field_descriptors,
  e2_request__field_indices_by_name,
  1,  e2_request__number_ranges,
  (ProtobufCMessageInit) e2_request__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor e2_dummy_response__field_descriptors[3] =
{
  {
    "req_id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(E2DummyResponse, req_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "mess_string",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(E2DummyResponse, mess_string),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "result",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(E2DummyResponse, result),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned e2_dummy_response__field_indices_by_name[] = {
  1,   /* field[1] = mess_string */
  0,   /* field[0] = req_id */
  2,   /* field[2] = result */
};
static const ProtobufCIntRange e2_dummy_response__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor e2_dummy_response__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "E2_dummy_response",
  "E2DummyResponse",
  "E2DummyResponse",
  "",
  sizeof(E2DummyResponse),
  3,
  e2_dummy_response__field_descriptors,
  e2_dummy_response__field_indices_by_name,
  1,  e2_dummy_response__number_ranges,
  (ProtobufCMessageInit) e2_dummy_response__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor map_field_entry__field_descriptors[2] =
{
  {
    "key",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(MapFieldEntry, key),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "value",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(MapFieldEntry, value),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned map_field_entry__field_indices_by_name[] = {
  0,   /* field[0] = key */
  1,   /* field[1] = value */
};
static const ProtobufCIntRange map_field_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor map_field_entry__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "MapFieldEntry",
  "MapFieldEntry",
  "MapFieldEntry",
  "",
  sizeof(MapFieldEntry),
  2,
  map_field_entry__field_descriptors,
  map_field_entry__field_indices_by_name,
  1,  map_field_entry__number_ranges,
  (ProtobufCMessageInit) map_field_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor map_mess__field_descriptors[1] =
{
  {
    "map_field",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(MapMess, n_map_field),
    offsetof(MapMess, map_field),
    &map_field_entry__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned map_mess__field_indices_by_name[] = {
  0,   /* field[0] = map_field */
};
static const ProtobufCIntRange map_mess__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor map_mess__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "map_mess",
  "MapMess",
  "MapMess",
  "",
  sizeof(MapMess),
  1,
  map_mess__field_descriptors,
  map_mess__field_indices_by_name,
  1,  map_mess__number_ranges,
  (ProtobufCMessageInit) map_mess__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue etype__enum_values_by_number[2] =
{
  { "TYPE1", "ETYPE__TYPE1", 1 },
  { "TYPE2", "ETYPE__TYPE2", 2 },
};
static const ProtobufCIntRange etype__value_ranges[] = {
{1, 0},{0, 2}
};
static const ProtobufCEnumValueIndex etype__enum_values_by_name[2] =
{
  { "TYPE1", 0 },
  { "TYPE2", 1 },
};
const ProtobufCEnumDescriptor etype__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "etype",
  "etype",
  "Etype",
  "",
  2,
  etype__enum_values_by_number,
  2,
  etype__enum_values_by_name,
  1,
  etype__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};