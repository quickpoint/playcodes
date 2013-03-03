/**
 * @(#) typedef.h
 * @author quickpoint AT HUST
 * @version 1.0
 */
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#ifndef _TYPEDEF_H_
#define _TYPEDEF_H_

#ifdef __cplusplus
#define C_STMT_BGN extern "C" {
#define C_STMT_END }
#else
#define C_STMT_BGN
#define C_STMT_END
#endif /* __cplusplus */

#define return_if_fail(p) if(!(p)) \
    {printf("%s:%d WARN: "#p" failed.\n", \
            __func__, __LINE__); return; }

#define return_val_if_fail(p, ret) if(!(p)) \
    {printf("%s:%d WARN: "#p" failed.\n", \
            __func__, __LINE__); return (ret); }

#define SAFE_FREE(p) if( NULL != (p)) {free(p); p = NULL; }

#define ARRAY_SIZE(array) (sizeof(array)/sizeof((array)[0]))

#endif /* _TYPEDEF_H_ */

