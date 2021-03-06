/**
 * Autogenerated by Thrift Compiler (0.10.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include <string.h>
#include <thrift/c_glib/thrift.h>
#include <thrift/c_glib/thrift_application_exception.h>
#include "t_test_reverse_order_service.h"

gboolean
t_test_reverse_order_service_if_my_method (TTestReverseOrderServiceIf *iface, const gchar * first, const gint16 second, const gint32 third, const gint64 fourth, GError **error)
{
  return T_TEST_REVERSE_ORDER_SERVICE_IF_GET_INTERFACE (iface)->my_method (iface, first, second, third, fourth, error);
}

GType
t_test_reverse_order_service_if_get_type (void)
{
  static GType type = 0;
  if (type == 0)
  {
    static const GTypeInfo type_info =
    {
      sizeof (TTestReverseOrderServiceIfInterface),
      NULL,  /* base_init */
      NULL,  /* base_finalize */
      NULL,  /* class_init */
      NULL,  /* class_finalize */
      NULL,  /* class_data */
      0,     /* instance_size */
      0,     /* n_preallocs */
      NULL,  /* instance_init */
      NULL   /* value_table */
    };
    type = g_type_register_static (G_TYPE_INTERFACE,
                                   "TTestReverseOrderServiceIf",
                                   &type_info, 0);
  }
  return type;
}

static void 
t_test_reverse_order_service_if_interface_init (TTestReverseOrderServiceIfInterface *iface);

G_DEFINE_TYPE_WITH_CODE (TTestReverseOrderServiceClient, t_test_reverse_order_service_client,
                         G_TYPE_OBJECT, 
                         G_IMPLEMENT_INTERFACE (T_TEST_TYPE_REVERSE_ORDER_SERVICE_IF,
                                                t_test_reverse_order_service_if_interface_init))

enum _TTestReverseOrderServiceClientProperties
{
  PROP_0,
  PROP_T_TEST_REVERSE_ORDER_SERVICE_CLIENT_INPUT_PROTOCOL,
  PROP_T_TEST_REVERSE_ORDER_SERVICE_CLIENT_OUTPUT_PROTOCOL
};

void
t_test_reverse_order_service_client_set_property (GObject *object, guint property_id, const GValue *value, GParamSpec *pspec)
{
  TTestReverseOrderServiceClient *client = T_TEST_REVERSE_ORDER_SERVICE_CLIENT (object);

  THRIFT_UNUSED_VAR (pspec);

  switch (property_id)
  {
    case PROP_T_TEST_REVERSE_ORDER_SERVICE_CLIENT_INPUT_PROTOCOL:
      client->input_protocol = g_value_get_object (value);
      break;
    case PROP_T_TEST_REVERSE_ORDER_SERVICE_CLIENT_OUTPUT_PROTOCOL:
      client->output_protocol = g_value_get_object (value);
      break;
  }
}

void
t_test_reverse_order_service_client_get_property (GObject *object, guint property_id, GValue *value, GParamSpec *pspec)
{
  TTestReverseOrderServiceClient *client = T_TEST_REVERSE_ORDER_SERVICE_CLIENT (object);

  THRIFT_UNUSED_VAR (pspec);

  switch (property_id)
  {
    case PROP_T_TEST_REVERSE_ORDER_SERVICE_CLIENT_INPUT_PROTOCOL:
      g_value_set_object (value, client->input_protocol);
      break;
    case PROP_T_TEST_REVERSE_ORDER_SERVICE_CLIENT_OUTPUT_PROTOCOL:
      g_value_set_object (value, client->output_protocol);
      break;
  }
}

gboolean t_test_reverse_order_service_client_send_my_method (TTestReverseOrderServiceIf * iface, const gchar * first, const gint16 second, const gint32 third, const gint64 fourth, GError ** error)
{
  gint32 cseqid = 0;
  ThriftProtocol * protocol = T_TEST_REVERSE_ORDER_SERVICE_CLIENT (iface)->output_protocol;

  if (thrift_protocol_write_message_begin (protocol, "myMethod", T_CALL, cseqid, error) < 0)
    return FALSE;

  {
    gint32 ret;
    gint32 xfer = 0;

    
    if ((ret = thrift_protocol_write_struct_begin (protocol, "myMethod_args", error)) < 0)
      return 0;
    xfer += ret;
    if ((ret = thrift_protocol_write_field_begin (protocol, "first", T_STRING, 4, error)) < 0)
      return 0;
    xfer += ret;
    if ((ret = thrift_protocol_write_string (protocol, first, error)) < 0)
      return 0;
    xfer += ret;

    if ((ret = thrift_protocol_write_field_end (protocol, error)) < 0)
      return 0;
    xfer += ret;
    if ((ret = thrift_protocol_write_field_begin (protocol, "second", T_I16, 3, error)) < 0)
      return 0;
    xfer += ret;
    if ((ret = thrift_protocol_write_i16 (protocol, second, error)) < 0)
      return 0;
    xfer += ret;

    if ((ret = thrift_protocol_write_field_end (protocol, error)) < 0)
      return 0;
    xfer += ret;
    if ((ret = thrift_protocol_write_field_begin (protocol, "third", T_I32, 2, error)) < 0)
      return 0;
    xfer += ret;
    if ((ret = thrift_protocol_write_i32 (protocol, third, error)) < 0)
      return 0;
    xfer += ret;

    if ((ret = thrift_protocol_write_field_end (protocol, error)) < 0)
      return 0;
    xfer += ret;
    if ((ret = thrift_protocol_write_field_begin (protocol, "fourth", T_I64, 1, error)) < 0)
      return 0;
    xfer += ret;
    if ((ret = thrift_protocol_write_i64 (protocol, fourth, error)) < 0)
      return 0;
    xfer += ret;

    if ((ret = thrift_protocol_write_field_end (protocol, error)) < 0)
      return 0;
    xfer += ret;
    if ((ret = thrift_protocol_write_field_stop (protocol, error)) < 0)
      return 0;
    xfer += ret;
    if ((ret = thrift_protocol_write_struct_end (protocol, error)) < 0)
      return 0;
    xfer += ret;

  }

  if (thrift_protocol_write_message_end (protocol, error) < 0)
    return FALSE;
  if (!thrift_transport_flush (protocol->transport, error))
    return FALSE;
  if (!thrift_transport_write_end (protocol->transport, error))
    return FALSE;

  return TRUE;
}

gboolean t_test_reverse_order_service_client_recv_my_method (TTestReverseOrderServiceIf * iface, GError ** error)
{
  gint32 rseqid;
  gchar * fname = NULL;
  ThriftMessageType mtype;
  ThriftProtocol * protocol = T_TEST_REVERSE_ORDER_SERVICE_CLIENT (iface)->input_protocol;
  ThriftApplicationException *xception;

  if (thrift_protocol_read_message_begin (protocol, &fname, &mtype, &rseqid, error) < 0) {
    if (fname) g_free (fname);
    return FALSE;
  }

  if (mtype == T_EXCEPTION) {
    if (fname) g_free (fname);
    xception = g_object_new (THRIFT_TYPE_APPLICATION_EXCEPTION, NULL);
    thrift_struct_read (THRIFT_STRUCT (xception), protocol, NULL);
    thrift_protocol_read_message_end (protocol, NULL);
    thrift_transport_read_end (protocol->transport, NULL);
    g_set_error (error, THRIFT_APPLICATION_EXCEPTION_ERROR,xception->type, "application error: %s", xception->message);
    g_object_unref (xception);
    return FALSE;
  } else if (mtype != T_REPLY) {
    if (fname) g_free (fname);
    thrift_protocol_skip (protocol, T_STRUCT, NULL);
    thrift_protocol_read_message_end (protocol, NULL);
    thrift_transport_read_end (protocol->transport, NULL);
    g_set_error (error, THRIFT_APPLICATION_EXCEPTION_ERROR, THRIFT_APPLICATION_EXCEPTION_ERROR_INVALID_MESSAGE_TYPE, "invalid message type %d, expected T_REPLY", mtype);
    return FALSE;
  } else if (strncmp (fname, "myMethod", 8) != 0) {
    thrift_protocol_skip (protocol, T_STRUCT, NULL);
    thrift_protocol_read_message_end (protocol,error);
    thrift_transport_read_end (protocol->transport, error);
    g_set_error (error, THRIFT_APPLICATION_EXCEPTION_ERROR, THRIFT_APPLICATION_EXCEPTION_ERROR_WRONG_METHOD_NAME, "wrong method name %s, expected myMethod", fname);
    if (fname) g_free (fname);
    return FALSE;
  }
  if (fname) g_free (fname);

  {
    gint32 ret;
    gint32 xfer = 0;
    gchar *name = NULL;
    ThriftType ftype;
    gint16 fid;
    guint32 len = 0;
    gpointer data = NULL;
    

    /* satisfy -Wall in case these aren't used */
    THRIFT_UNUSED_VAR (len);
    THRIFT_UNUSED_VAR (data);

    /* read the struct begin marker */
    if ((ret = thrift_protocol_read_struct_begin (protocol, &name, error)) < 0)
    {
      if (name) g_free (name);
      return 0;
    }
    xfer += ret;
    if (name) g_free (name);
    name = NULL;

    /* read the struct fields */
    while (1)
    {
      /* read the beginning of a field */
      if ((ret = thrift_protocol_read_field_begin (protocol, &name, &ftype, &fid, error)) < 0)
      {
        if (name) g_free (name);
        return 0;
      }
      xfer += ret;
      if (name) g_free (name);
      name = NULL;

      /* break if we get a STOP field */
      if (ftype == T_STOP)
      {
        break;
      }

      switch (fid)
      {
        default:
          if ((ret = thrift_protocol_skip (protocol, ftype, error)) < 0)
            return 0;
          xfer += ret;
          break;
      }
      if ((ret = thrift_protocol_read_field_end (protocol, error)) < 0)
        return 0;
      xfer += ret;
    }

    if ((ret = thrift_protocol_read_struct_end (protocol, error)) < 0)
      return 0;
    xfer += ret;

  }

  if (thrift_protocol_read_message_end (protocol, error) < 0)
    return FALSE;

  if (!thrift_transport_read_end (protocol->transport, error))
    return FALSE;

  return TRUE;
}

gboolean t_test_reverse_order_service_client_my_method (TTestReverseOrderServiceIf * iface, const gchar * first, const gint16 second, const gint32 third, const gint64 fourth, GError ** error)
{
  if (!t_test_reverse_order_service_client_send_my_method (iface, first, second, third, fourth, error))
    return FALSE;
  if (!t_test_reverse_order_service_client_recv_my_method (iface, error))
    return FALSE;
  return TRUE;
}

static void
t_test_reverse_order_service_if_interface_init (TTestReverseOrderServiceIfInterface *iface)
{
  iface->my_method = t_test_reverse_order_service_client_my_method;
}

static void
t_test_reverse_order_service_client_init (TTestReverseOrderServiceClient *client)
{
  client->input_protocol = NULL;
  client->output_protocol = NULL;
}

static void
t_test_reverse_order_service_client_class_init (TTestReverseOrderServiceClientClass *cls)
{
  GObjectClass *gobject_class = G_OBJECT_CLASS (cls);
  GParamSpec *param_spec;

  gobject_class->set_property = t_test_reverse_order_service_client_set_property;
  gobject_class->get_property = t_test_reverse_order_service_client_get_property;

  param_spec = g_param_spec_object ("input_protocol",
                                    "input protocol (construct)",
                                    "Set the client input protocol",
                                    THRIFT_TYPE_PROTOCOL,
                                    G_PARAM_READWRITE);
  g_object_class_install_property (gobject_class,
                                   PROP_T_TEST_REVERSE_ORDER_SERVICE_CLIENT_INPUT_PROTOCOL, param_spec);

  param_spec = g_param_spec_object ("output_protocol",
                                    "output protocol (construct)",
                                    "Set the client output protocol",
                                    THRIFT_TYPE_PROTOCOL,
                                    G_PARAM_READWRITE);
  g_object_class_install_property (gobject_class,
                                   PROP_T_TEST_REVERSE_ORDER_SERVICE_CLIENT_OUTPUT_PROTOCOL, param_spec);
}

static void
t_test_reverse_order_service_handler_reverse_order_service_if_interface_init (TTestReverseOrderServiceIfInterface *iface);

G_DEFINE_TYPE_WITH_CODE (TTestReverseOrderServiceHandler, 
                         t_test_reverse_order_service_handler,
                         G_TYPE_OBJECT,
                         G_IMPLEMENT_INTERFACE (T_TEST_TYPE_REVERSE_ORDER_SERVICE_IF,
                                                t_test_reverse_order_service_handler_reverse_order_service_if_interface_init))

gboolean t_test_reverse_order_service_handler_my_method (TTestReverseOrderServiceIf * iface, const gchar * first, const gint16 second, const gint32 third, const gint64 fourth, GError ** error)
{
  g_return_val_if_fail (T_TEST_IS_REVERSE_ORDER_SERVICE_HANDLER (iface), FALSE);

  return T_TEST_REVERSE_ORDER_SERVICE_HANDLER_GET_CLASS (iface)->my_method (iface, first, second, third, fourth, error);
}

static void
t_test_reverse_order_service_handler_reverse_order_service_if_interface_init (TTestReverseOrderServiceIfInterface *iface)
{
  iface->my_method = t_test_reverse_order_service_handler_my_method;
}

static void
t_test_reverse_order_service_handler_init (TTestReverseOrderServiceHandler *self)
{
  THRIFT_UNUSED_VAR (self);
}

static void
t_test_reverse_order_service_handler_class_init (TTestReverseOrderServiceHandlerClass *cls)
{
  cls->my_method = NULL;
}

enum _TTestReverseOrderServiceProcessorProperties
{
  PROP_T_TEST_REVERSE_ORDER_SERVICE_PROCESSOR_0,
  PROP_T_TEST_REVERSE_ORDER_SERVICE_PROCESSOR_HANDLER
};

G_DEFINE_TYPE (TTestReverseOrderServiceProcessor,
               t_test_reverse_order_service_processor,
               THRIFT_TYPE_DISPATCH_PROCESSOR)

typedef gboolean (* TTestReverseOrderServiceProcessorProcessFunction) (TTestReverseOrderServiceProcessor *, 
                                                                       gint32,
                                                                       ThriftProtocol *,
                                                                       ThriftProtocol *,
                                                                       GError **);

typedef struct
{
  gchar *name;
  TTestReverseOrderServiceProcessorProcessFunction function;
} t_test_reverse_order_service_processor_process_function_def;

static gboolean
t_test_reverse_order_service_processor_process_my_method (TTestReverseOrderServiceProcessor *,
                                                          gint32,
                                                          ThriftProtocol *,
                                                          ThriftProtocol *,
                                                          GError **);

static t_test_reverse_order_service_processor_process_function_def
t_test_reverse_order_service_processor_process_function_defs[1] = {
  {
    "myMethod",
    t_test_reverse_order_service_processor_process_my_method
  }
};

static gboolean
t_test_reverse_order_service_processor_process_my_method (TTestReverseOrderServiceProcessor *self,
                                                          gint32 sequence_id,
                                                          ThriftProtocol *input_protocol,
                                                          ThriftProtocol *output_protocol,
                                                          GError **error)
{
  gboolean result = TRUE;
  ThriftTransport * transport;
  ThriftApplicationException *xception;
  TTestReverseOrderServiceMyMethodArgs * args =
    g_object_new (T_TEST_TYPE_REVERSE_ORDER_SERVICE_MY_METHOD_ARGS, NULL);

  g_object_get (input_protocol, "transport", &transport, NULL);

  if ((thrift_struct_read (THRIFT_STRUCT (args), input_protocol, error) != -1) &&
      (thrift_protocol_read_message_end (input_protocol, error) != -1) &&
      (thrift_transport_read_end (transport, error) != FALSE))
  {
    gchar * first;
    gint second;
    gint third;
    gint64 fourth;
    TTestReverseOrderServiceMyMethodResult * result_struct;

    g_object_get (args,
                  "first", &first,
                  "second", &second,
                  "third", &third,
                  "fourth", &fourth,
                  NULL);

    g_object_unref (transport);
    g_object_get (output_protocol, "transport", &transport, NULL);

    result_struct = g_object_new (T_TEST_TYPE_REVERSE_ORDER_SERVICE_MY_METHOD_RESULT, NULL);

    if (t_test_reverse_order_service_handler_my_method (T_TEST_REVERSE_ORDER_SERVICE_IF (self->handler),
                                                        first,
                                                        second,
                                                        third,
                                                        fourth,
                                                        error) == TRUE)
    {
      result =
        ((thrift_protocol_write_message_begin (output_protocol,
                                               "myMethod",
                                               T_REPLY,
                                               sequence_id,
                                               error) != -1) &&
         (thrift_struct_write (THRIFT_STRUCT (result_struct),
                               output_protocol,
                               error) != -1));
    }
    else
    {
      if (*error == NULL)
        g_warning ("ReverseOrderService.myMethod implementation returned FALSE "
                   "but did not set an error");

      xception =
        g_object_new (THRIFT_TYPE_APPLICATION_EXCEPTION,
                      "type",    *error != NULL ? (*error)->code :
                                 THRIFT_APPLICATION_EXCEPTION_ERROR_UNKNOWN,
                      "message", *error != NULL ? (*error)->message : NULL,
                      NULL);
      g_clear_error (error);

      result =
        ((thrift_protocol_write_message_begin (output_protocol,
                                               "myMethod",
                                               T_EXCEPTION,
                                               sequence_id,
                                               error) != -1) &&
         (thrift_struct_write (THRIFT_STRUCT (xception),
                               output_protocol,
                               error) != -1));

      g_object_unref (xception);
    }

    if (first != NULL)
      g_free (first);
    g_object_unref (result_struct);

    if (result == TRUE)
      result =
        ((thrift_protocol_write_message_end (output_protocol, error) != -1) &&
         (thrift_transport_write_end (transport, error) != FALSE) &&
         (thrift_transport_flush (transport, error) != FALSE));
  }
  else
    result = FALSE;

  g_object_unref (transport);
  g_object_unref (args);

  return result;
}

static gboolean
t_test_reverse_order_service_processor_dispatch_call (ThriftDispatchProcessor *dispatch_processor,
                                                      ThriftProtocol *input_protocol,
                                                      ThriftProtocol *output_protocol,
                                                      gchar *method_name,
                                                      gint32 sequence_id,
                                                      GError **error)
{
  t_test_reverse_order_service_processor_process_function_def *process_function_def;
  gboolean dispatch_result = FALSE;

  TTestReverseOrderServiceProcessor *self = T_TEST_REVERSE_ORDER_SERVICE_PROCESSOR (dispatch_processor);
  ThriftDispatchProcessorClass *parent_class =
    g_type_class_peek_parent (T_TEST_REVERSE_ORDER_SERVICE_PROCESSOR_GET_CLASS (self));

  process_function_def = g_hash_table_lookup (self->process_map, method_name);
  if (process_function_def != NULL)
  {
    g_free (method_name);
    dispatch_result = (*process_function_def->function) (self,
                                                         sequence_id,
                                                         input_protocol,
                                                         output_protocol,
                                                         error);
  }
  else
  {
    dispatch_result = parent_class->dispatch_call (dispatch_processor,
                                                   input_protocol,
                                                   output_protocol,
                                                   method_name,
                                                   sequence_id,
                                                   error);
  }

  return dispatch_result;
}

static void
t_test_reverse_order_service_processor_set_property (GObject *object,
                                                     guint property_id,
                                                     const GValue *value,
                                                     GParamSpec *pspec)
{
  TTestReverseOrderServiceProcessor *self = T_TEST_REVERSE_ORDER_SERVICE_PROCESSOR (object);

  switch (property_id)
  {
    case PROP_T_TEST_REVERSE_ORDER_SERVICE_PROCESSOR_HANDLER:
      if (self->handler != NULL)
        g_object_unref (self->handler);
      self->handler = g_value_get_object (value);
      g_object_ref (self->handler);
      break;
    default:
      G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
      break;
  }
}

static void
t_test_reverse_order_service_processor_get_property (GObject *object,
                                                     guint property_id,
                                                     GValue *value,
                                                     GParamSpec *pspec)
{
  TTestReverseOrderServiceProcessor *self = T_TEST_REVERSE_ORDER_SERVICE_PROCESSOR (object);

  switch (property_id)
  {
    case PROP_T_TEST_REVERSE_ORDER_SERVICE_PROCESSOR_HANDLER:
      g_value_set_object (value, self->handler);
      break;
    default:
      G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
      break;
  }
}

static void
t_test_reverse_order_service_processor_dispose (GObject *gobject)
{
  TTestReverseOrderServiceProcessor *self = T_TEST_REVERSE_ORDER_SERVICE_PROCESSOR (gobject);

  if (self->handler != NULL)
  {
    g_object_unref (self->handler);
    self->handler = NULL;
  }

  G_OBJECT_CLASS (t_test_reverse_order_service_processor_parent_class)->dispose (gobject);
}

static void
t_test_reverse_order_service_processor_finalize (GObject *gobject)
{
  TTestReverseOrderServiceProcessor *self = T_TEST_REVERSE_ORDER_SERVICE_PROCESSOR (gobject);

  thrift_safe_hash_table_destroy (self->process_map);

  G_OBJECT_CLASS (t_test_reverse_order_service_processor_parent_class)->finalize (gobject);
}

static void
t_test_reverse_order_service_processor_init (TTestReverseOrderServiceProcessor *self)
{
  guint index;

  self->handler = NULL;
  self->process_map = g_hash_table_new (g_str_hash, g_str_equal);

  for (index = 0; index < 1; index += 1)
    g_hash_table_insert (self->process_map,
                         t_test_reverse_order_service_processor_process_function_defs[index].name,
                         &t_test_reverse_order_service_processor_process_function_defs[index]);
}

static void
t_test_reverse_order_service_processor_class_init (TTestReverseOrderServiceProcessorClass *cls)
{
  GObjectClass *gobject_class = G_OBJECT_CLASS (cls);
  ThriftDispatchProcessorClass *dispatch_processor_class =
    THRIFT_DISPATCH_PROCESSOR_CLASS (cls);
  GParamSpec *param_spec;

  gobject_class->dispose = t_test_reverse_order_service_processor_dispose;
  gobject_class->finalize = t_test_reverse_order_service_processor_finalize;
  gobject_class->set_property = t_test_reverse_order_service_processor_set_property;
  gobject_class->get_property = t_test_reverse_order_service_processor_get_property;

  dispatch_processor_class->dispatch_call = t_test_reverse_order_service_processor_dispatch_call;
  cls->dispatch_call = t_test_reverse_order_service_processor_dispatch_call;

  param_spec = g_param_spec_object ("handler",
                                    "Service handler implementation",
                                    "The service handler implementation "
                                    "to which method calls are dispatched.",
                                    T_TEST_TYPE_REVERSE_ORDER_SERVICE_HANDLER,
                                    G_PARAM_READWRITE);
  g_object_class_install_property (gobject_class,
                                   PROP_T_TEST_REVERSE_ORDER_SERVICE_PROCESSOR_HANDLER,
                                   param_spec);
}
