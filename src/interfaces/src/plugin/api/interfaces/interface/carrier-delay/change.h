#ifndef INTERFACES_PLUGIN_API_INTERFACES_INTERFACE_CARRIER_DELAY_CHANGE_H
#define INTERFACES_PLUGIN_API_INTERFACES_INTERFACE_CARRIER_DELAY_CHANGE_H

#include <srpc.h>
#include <utarray.h>

int interfaces_interface_carrier_delay_change_up(void* priv, sr_session_ctx_t* session, const srpc_change_ctx_t* change_ctx);
int interfaces_interface_carrier_delay_change_down(void* priv, sr_session_ctx_t* session, const srpc_change_ctx_t* change_ctx);

#endif // INTERFACES_PLUGIN_API_INTERFACES_INTERFACE_CARRIER_DELAY_CHANGE_H