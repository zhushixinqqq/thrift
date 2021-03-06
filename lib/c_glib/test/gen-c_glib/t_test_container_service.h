/**
 * Autogenerated by Thrift Compiler (0.10.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef T_TEST_CONTAINER_SERVICE_H
#define T_TEST_CONTAINER_SERVICE_H

#include <thrift/c_glib/processor/thrift_dispatch_processor.h>

#include "t_test_container_test_types.h"

/* ContainerService service interface */
typedef struct _TTestContainerServiceIf TTestContainerServiceIf;  /* dummy object */

struct _TTestContainerServiceIfInterface
{
  GTypeInterface parent;

  gboolean (*receive_string_list) (TTestContainerServiceIf *iface, const GPtrArray * stringList, GError **error);
  gboolean (*return_string_list) (TTestContainerServiceIf *iface, GPtrArray ** _return, GError **error);
  gboolean (*return_list_string_list) (TTestContainerServiceIf *iface, GPtrArray ** _return, GError **error);
  gboolean (*return_typedefd_list_string_list) (TTestContainerServiceIf *iface, TTestListStringList ** _return, GError **error);
};
typedef struct _TTestContainerServiceIfInterface TTestContainerServiceIfInterface;

GType t_test_container_service_if_get_type (void);
#define T_TEST_TYPE_CONTAINER_SERVICE_IF (t_test_container_service_if_get_type())
#define T_TEST_CONTAINER_SERVICE_IF(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), T_TEST_TYPE_CONTAINER_SERVICE_IF, TTestContainerServiceIf))
#define T_TEST_IS_CONTAINER_SERVICE_IF(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), T_TEST_TYPE_CONTAINER_SERVICE_IF))
#define T_TEST_CONTAINER_SERVICE_IF_GET_INTERFACE(inst) (G_TYPE_INSTANCE_GET_INTERFACE ((inst), T_TEST_TYPE_CONTAINER_SERVICE_IF, TTestContainerServiceIfInterface))

gboolean t_test_container_service_if_receive_string_list (TTestContainerServiceIf *iface, const GPtrArray * stringList, GError **error);
gboolean t_test_container_service_if_return_string_list (TTestContainerServiceIf *iface, GPtrArray ** _return, GError **error);
gboolean t_test_container_service_if_return_list_string_list (TTestContainerServiceIf *iface, GPtrArray ** _return, GError **error);
gboolean t_test_container_service_if_return_typedefd_list_string_list (TTestContainerServiceIf *iface, TTestListStringList ** _return, GError **error);

/* ContainerService service client */
struct _TTestContainerServiceClient
{
  GObject parent;

  ThriftProtocol *input_protocol;
  ThriftProtocol *output_protocol;
};
typedef struct _TTestContainerServiceClient TTestContainerServiceClient;

struct _TTestContainerServiceClientClass
{
  GObjectClass parent;
};
typedef struct _TTestContainerServiceClientClass TTestContainerServiceClientClass;

GType t_test_container_service_client_get_type (void);
#define T_TEST_TYPE_CONTAINER_SERVICE_CLIENT (t_test_container_service_client_get_type())
#define T_TEST_CONTAINER_SERVICE_CLIENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), T_TEST_TYPE_CONTAINER_SERVICE_CLIENT, TTestContainerServiceClient))
#define T_TEST_CONTAINER_SERVICE_CLIENT_CLASS(c) (G_TYPE_CHECK_CLASS_CAST ((c), T_TEST_TYPE_CONTAINER_SERVICE_CLIENT, TTestContainerServiceClientClass))
#define T_TEST_CONTAINER_SERVICE_IS_CLIENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), T_TEST_TYPE_CONTAINER_SERVICE_CLIENT))
#define T_TEST_CONTAINER_SERVICE_IS_CLIENT_CLASS(c) (G_TYPE_CHECK_CLASS_TYPE ((c), T_TEST_TYPE_CONTAINER_SERVICE_CLIENT))
#define T_TEST_CONTAINER_SERVICE_CLIENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), T_TEST_TYPE_CONTAINER_SERVICE_CLIENT, TTestContainerServiceClientClass))

gboolean t_test_container_service_client_receive_string_list (TTestContainerServiceIf * iface, const GPtrArray * stringList, GError ** error);
gboolean t_test_container_service_client_send_receive_string_list (TTestContainerServiceIf * iface, const GPtrArray * stringList, GError ** error);
gboolean t_test_container_service_client_recv_receive_string_list (TTestContainerServiceIf * iface, GError ** error);
gboolean t_test_container_service_client_return_string_list (TTestContainerServiceIf * iface, GPtrArray ** _return, GError ** error);
gboolean t_test_container_service_client_send_return_string_list (TTestContainerServiceIf * iface, GError ** error);
gboolean t_test_container_service_client_recv_return_string_list (TTestContainerServiceIf * iface, GPtrArray ** _return, GError ** error);
gboolean t_test_container_service_client_return_list_string_list (TTestContainerServiceIf * iface, GPtrArray ** _return, GError ** error);
gboolean t_test_container_service_client_send_return_list_string_list (TTestContainerServiceIf * iface, GError ** error);
gboolean t_test_container_service_client_recv_return_list_string_list (TTestContainerServiceIf * iface, GPtrArray ** _return, GError ** error);
gboolean t_test_container_service_client_return_typedefd_list_string_list (TTestContainerServiceIf * iface, TTestListStringList ** _return, GError ** error);
gboolean t_test_container_service_client_send_return_typedefd_list_string_list (TTestContainerServiceIf * iface, GError ** error);
gboolean t_test_container_service_client_recv_return_typedefd_list_string_list (TTestContainerServiceIf * iface, TTestListStringList ** _return, GError ** error);
void container_service_client_set_property (GObject *object, guint property_id, const GValue *value, GParamSpec *pspec);
void container_service_client_get_property (GObject *object, guint property_id, GValue *value, GParamSpec *pspec);

/* ContainerService handler (abstract base class) */
struct _TTestContainerServiceHandler
{
  GObject parent;
};
typedef struct _TTestContainerServiceHandler TTestContainerServiceHandler;

struct _TTestContainerServiceHandlerClass
{
  GObjectClass parent;

  gboolean (*receive_string_list) (TTestContainerServiceIf *iface, const GPtrArray * stringList, GError **error);
  gboolean (*return_string_list) (TTestContainerServiceIf *iface, GPtrArray ** _return, GError **error);
  gboolean (*return_list_string_list) (TTestContainerServiceIf *iface, GPtrArray ** _return, GError **error);
  gboolean (*return_typedefd_list_string_list) (TTestContainerServiceIf *iface, TTestListStringList ** _return, GError **error);
};
typedef struct _TTestContainerServiceHandlerClass TTestContainerServiceHandlerClass;

GType t_test_container_service_handler_get_type (void);
#define T_TEST_TYPE_CONTAINER_SERVICE_HANDLER (t_test_container_service_handler_get_type())
#define T_TEST_CONTAINER_SERVICE_HANDLER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), T_TEST_TYPE_CONTAINER_SERVICE_HANDLER, TTestContainerServiceHandler))
#define T_TEST_IS_CONTAINER_SERVICE_HANDLER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), T_TEST_TYPE_CONTAINER_SERVICE_HANDLER))
#define T_TEST_CONTAINER_SERVICE_HANDLER_CLASS(c) (G_TYPE_CHECK_CLASS_CAST ((c), T_TEST_TYPE_CONTAINER_SERVICE_HANDLER, TTestContainerServiceHandlerClass))
#define T_TEST_IS_CONTAINER_SERVICE_HANDLER_CLASS(c) (G_TYPE_CHECK_CLASS_TYPE ((c), T_TEST_TYPE_CONTAINER_SERVICE_HANDLER))
#define T_TEST_CONTAINER_SERVICE_HANDLER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), T_TEST_TYPE_CONTAINER_SERVICE_HANDLER, TTestContainerServiceHandlerClass))

gboolean t_test_container_service_handler_receive_string_list (TTestContainerServiceIf *iface, const GPtrArray * stringList, GError **error);
gboolean t_test_container_service_handler_return_string_list (TTestContainerServiceIf *iface, GPtrArray ** _return, GError **error);
gboolean t_test_container_service_handler_return_list_string_list (TTestContainerServiceIf *iface, GPtrArray ** _return, GError **error);
gboolean t_test_container_service_handler_return_typedefd_list_string_list (TTestContainerServiceIf *iface, TTestListStringList ** _return, GError **error);

/* ContainerService processor */
struct _TTestContainerServiceProcessor
{
  ThriftDispatchProcessor parent;

  /* protected */
  TTestContainerServiceHandler *handler;
  GHashTable *process_map;
};
typedef struct _TTestContainerServiceProcessor TTestContainerServiceProcessor;

struct _TTestContainerServiceProcessorClass
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
typedef struct _TTestContainerServiceProcessorClass TTestContainerServiceProcessorClass;

GType t_test_container_service_processor_get_type (void);
#define T_TEST_TYPE_CONTAINER_SERVICE_PROCESSOR (t_test_container_service_processor_get_type())
#define T_TEST_CONTAINER_SERVICE_PROCESSOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), T_TEST_TYPE_CONTAINER_SERVICE_PROCESSOR, TTestContainerServiceProcessor))
#define T_TEST_IS_CONTAINER_SERVICE_PROCESSOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), T_TEST_TYPE_CONTAINER_SERVICE_PROCESSOR))
#define T_TEST_CONTAINER_SERVICE_PROCESSOR_CLASS(c) (G_TYPE_CHECK_CLASS_CAST ((c), T_TEST_TYPE_CONTAINER_SERVICE_PROCESSOR, TTestContainerServiceProcessorClass))
#define T_TEST_IS_CONTAINER_SERVICE_PROCESSOR_CLASS(c) (G_TYPE_CHECK_CLASS_TYPE ((c), T_TEST_TYPE_CONTAINER_SERVICE_PROCESSOR))
#define T_TEST_CONTAINER_SERVICE_PROCESSOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), T_TEST_TYPE_CONTAINER_SERVICE_PROCESSOR, TTestContainerServiceProcessorClass))

#endif /* T_TEST_CONTAINER_SERVICE_H */
