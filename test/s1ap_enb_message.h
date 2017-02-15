#ifndef _S1AP_ENB_MESSAGE_H__
#define _S1AP_ENB_MESSAGE_H__

#include "s1ap_message.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

CORE_DECLARE(status_t) s1ap_build_setup_req(pkbuf_t **pkbuf, c_uint32_t enb_id);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif

