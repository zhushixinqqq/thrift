/**
 * Autogenerated by Thrift Compiler (0.10.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef T_TEST_SRV_H
#define T_TEST_SRV_H

#include <thrift/c_glib/processor/thrift_dispatch_processor.h>

#include "t_test_debug_proto_test_types.h"

/* Srv service interface */
typedef struct _TTestSrvIf TTestSrvIf;  /* dummy object */

struct _TTestSrvIfInterface
{
  GTypeInterface parent;

  gboolean (*janky) (TTestSrvIf *iface, gint32* _return, const gint32 arg, GError **error);
  gboolean (*void_method) (TTestSrvIf *iface, GError **error);
  gboolean (*primitive_method) (TTestSrvIf *iface, gint32* _return, GError **error);
  gboolean (*struct_method) (TTestSrvIf *iface, TTestCompactProtoTestStruct ** _return, GError **error);
  gboolean (*method_with_default_args) (TTestSrvIf *iface, const gint32 something, GError **error);
  gboolean (*oneway_method) (TTestSrvIf *iface, GError **error);
  gboolean (*declared_exception_method) (TTestSrvIf *iface, gboolean* _return, const gboolean shouldThrow, TTestExceptionWithAMap ** xwamap, GError **error);
};
typedef struct _TTestSrvIfInterface TTestSrvIfInterface;

GType t_test_srv_if_get_type (void);
#define T_TEST_TYPE_SRV_IF (t_test_srv_if_get_type())
#define T_TEST_SRV_IF(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), T_TEST_TYPE_SRV_IF, TTestSrvIf))
#define T_TEST_IS_SRV_IF(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), T_TEST_TYPE_SRV_IF))
#define T_TEST_SRV_IF_GET_INTERFACE(inst) (G_TYPE_INSTANCE_GET_INTERFACE ((inst), T_TEST_TYPE_SRV_IF, TTestSrvIfInterface))

gboolean t_test_srv_if_janky (TTestSrvIf *iface, gint32* _return, const gint32 arg, GError **error);
gboolean t_test_srv_if_void_method (TTestSrvIf *iface, GError **error);
gboolean t_test_srv_if_primitive_method (TTestSrvIf *iface, gint32* _return, GError **error);
gboolean t_test_srv_if_struct_method (TTestSrvIf *iface, TTestCompactProtoTestStruct ** _return, GError **error);
gboolean t_test_srv_if_method_with_default_args (TTestSrvIf *iface, const gint32 something, GError **error);
gboolean t_test_srv_if_oneway_method (TTestSrvIf *iface, GError **error);
gboolean t_test_srv_if_declared_exception_method (TTestSrvIf *iface, gboolean* _return, const gboolean shouldThrow, TTestExceptionWithAMap ** xwamap, GError **error);

/* Srv service client */
struct _TTestSrvClient
{
  GObject parent;

  ThriftProtocol *input_protocol;
  ThriftProtocol *output_protocol;
};
typedef struct _TTestSrvClient TTestSrvClient;

struct _TTestSrvClientClass
{
  GObjectClass parent;
};
typedef struct _TTestSrvClientClass TTestSrvClientClass;

GType t_test_srv_client_get_type (void);
#define T_TEST_TYPE_SRV_CLIENT (t_test_srv_client_get_type())
#define T_TEST_SRV_CLIENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), T_TEST_TYPE_SRV_CLIENT, TTestSrvClient))
#define T_TEST_SRV_CLIENT_CLASS(c) (G_TYPE_CHECK_CLASS_CAST ((c), T_TEST_TYPE_SRV_CLIENT, TTestSrvClientClass))
#define T_TEST_SRV_IS_CLIENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), T_TEST_TYPE_SRV_CLIENT))
#define T_TEST_SRV_IS_CLIENT_CLASS(c) (G_TYPE_CHECK_CLASS_TYPE ((c), T_TEST_TYPE_SRV_CLIENT))
#define T_TEST_SRV_CLIENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), T_TEST_TYPE_SRV_CLIENT, TTestSrvClientClass))

gboolean t_test_srv_client_janky (TTestSrvIf * iface, gint32* _return, const gint32 arg, GError ** error);
gboolean t_test_srv_client_send_janky (TTestSrvIf * iface, const gint32 arg, GError ** error);
gboolean t_test_srv_client_recv_janky (TTestSrvIf * iface, gint32* _return, GError ** error);
gboolean t_test_srv_client_void_method (TTestSrvIf * iface, GError ** error);
gboolean t_test_srv_client_send_void_method (TTestSrvIf * iface, GError ** error);
gboolean t_test_srv_client_recv_void_method (TTestSrvIf * iface, GError ** error);
gboolean t_test_srv_client_primitive_method (TTestSrvIf * iface, gint32* _return, GError ** error);
gboolean t_test_srv_client_send_primitive_method (TTestSrvIf * iface, GError ** error);
gboolean t_test_srv_client_recv_primitive_method (TTestSrvIf * iface, gint32* _return, GError ** error);
gboolean t_test_srv_client_struct_method (TTestSrvIf * iface, TTestCompactProtoTestStruct ** _return, GError ** error);
gboolean t_test_srv_client_send_struct_method (TTestSrvIf * iface, GError ** error);
gboolean t_test_srv_client_recv_struct_method (TTestSrvIf * iface, TTestCompactProtoTestStruct ** _return, GError ** error);
gboolean t_test_srv_client_method_with_default_args (TTestSrvIf * iface, const gint32 something, GError ** error);
gboolean t_test_srv_client_send_method_with_default_args (TTestSrvIf * iface, const gint32 something, GError ** error);
gboolean t_test_srv_client_recv_method_with_default_args (TTestSrvIf * iface, GError ** error);
gboolean t_test_srv_client_oneway_method (TTestSrvIf * iface, GError ** error);
gboolean t_test_srv_client_send_oneway_method (TTestSrvIf * iface, GError ** error);
gboolean t_test_srv_client_declared_exception_method (TTestSrvIf * iface, gboolean* _return, const gboolean shouldThrow, TTestExceptionWithAMap ** xwamap, GError ** error);
gboolean t_test_srv_client_send_declared_exception_method (TTestSrvIf * iface, const gboolean shouldThrow, GError ** error);
gboolean t_test_srv_client_recv_declared_exception_method (TTestSrvIf * iface, gboolean* _return, TTestExceptionWithAMap ** xwamap, GError ** error);
void srv_client_set_property (GObject *object, guint property_id, const GValue *value, GParamSpec *pspec);
void srv_client_get_property (GObject *object, guint property_id, GValue *value, GParamSpec *pspec);

/* Srv handler (abstract base class) */
struct _TTestSrvHandler
{
  GObject parent;
};
typedef struct _TTestSrvHandler TTestSrvHandler;

struct _TTestSrvHandlerClass
{
  GObjectClass parent;

  gboolean (*janky) (TTestSrvIf *iface, gint32* _return, const gint32 arg, GError **error);
  gboolean (*void_method) (TTestSrvIf *iface, GError **error);
  gboolean (*primitive_method) (TTestSrvIf *iface, gint32* _return, GError **error);
  gboolean (*struct_method) (TTestSrvIf *iface, TTestCompactProtoTestStruct ** _return, GError **error);
  gboolean (*method_with_default_args) (TTestSrvIf *iface, const gint32 something, GError **error);
  gboolean (*oneway_method) (TTestSrvIf *iface, GError **error);
  gboolean (*declared_exception_method) (TTestSrvIf *iface, gboolean* _return, const gboolean shouldThrow, TTestExceptionWithAMap ** xwamap, GError **error);
};
typedef struct _TTestSrvHandlerClass TTestSrvHandlerClass;

GType t_test_srv_handler_get_type (void);
#define T_TEST_TYPE_SRV_HANDLER (t_test_srv_handler_get_type())
#define T_TEST_SRV_HANDLER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), T_TEST_TYPE_SRV_HANDLER, TTestSrvHandler))
#define T_TEST_IS_SRV_HANDLER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), T_TEST_TYPE_SRV_HANDLER))
#define T_TEST_SRV_HANDLER_CLASS(c) (G_TYPE_CHECK_CLASS_CAST ((c), T_TEST_TYPE_SRV_HANDLER, TTestSrvHandlerClass))
#define T_TEST_IS_SRV_HANDLER_CLASS(c) (G_TYPE_CHECK_CLASS_TYPE ((c), T_TEST_TYPE_SRV_HANDLER))
#define T_TEST_SRV_HANDLER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), T_TEST_TYPE_SRV_HANDLER, TTestSrvHandlerClass))

gboolean t_test_srv_handler_janky (TTestSrvIf *iface, gint32* _return, const gint32 arg, GError **error);
gboolean t_test_srv_handler_void_method (TTestSrvIf *iface, GError **error);
gboolean t_test_srv_handler_primitive_method (TTestSrvIf *iface, gint32* _return, GError **error);
gboolean t_test_srv_handler_struct_method (TTestSrvIf *iface, TTestCompactProtoTestStruct ** _return, GError **error);
gboolean t_test_srv_handler_method_with_default_args (TTestSrvIf *iface, const gint32 something, GError **error);
gboolean t_test_srv_handler_oneway_method (TTestSrvIf *iface, GError **error);
gboolean t_test_srv_handler_declared_exception_method (TTestSrvIf *iface, gboolean* _return, const gboolean shouldThrow, TTestExceptionWithAMap ** xwamap, GError **error);

/* Srv processor */
struct _TTestSrvProcessor
{
  ThriftDispatchProcessor parent;

  /* protected */
  TTestSrvHandler *handler;
  GHashTable *process_map;
};
typedef struct _TTestSrvProcessor TTestSrvProcessor;

struct _TTestSrvProcessorClass
{
  ThriftDispatchProcessorClass parent;

  /* protected */
  gboolean (*dispatch_call) (ThriftDispatchProcessor *processor,
                             ThriftProtocol *in,
                             ThriftProtocol *out,
                             gchar *fname,
                             gint32 seqid,
                             GError **error);
};
typedef struct _TTestSrvProcessorClass TTestSrvProcessorClass;

GType t_test_srv_processor_get_type (void);
#define T_TEST_TYPE_SRV_PROCESSOR (t_test_srv_processor_get_type())
#define T_TEST_SRV_PROCESSOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), T_TEST_TYPE_SRV_PROCESSOR, TTestSrvProcessor))
#define T_TEST_IS_SRV_PROCESSOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), T_TEST_TYPE_SRV_PROCESSOR))
#define T_TEST_SRV_PROCESSOR_CLASS(c) (G_TYPE_CHECK_CLASS_CAST ((c), T_TEST_TYPE_SRV_PROCESSOR, TTestSrvProcessorClass))
#define T_TEST_IS_SRV_PROCESSOR_CLASS(c) (G_TYPE_CHECK_CLASS_TYPE ((c), T_TEST_TYPE_SRV_PROCESSOR))
#define T_TEST_SRV_PROCESSOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), T_TEST_TYPE_SRV_PROCESSOR, TTestSrvProcessorClass))

#endif /* T_TEST_SRV_H */
