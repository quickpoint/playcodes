/**
 * @(#) tiger.h
 * @author quickpoint AT HUST
 * @version 1.0
 */
#ifndef _TIGER_H_
#define _TIGER_H_

#include "animal.h"
#include "typedef.h"

C_STMT_BGN

/**
 * Create a tiger.
 * 
 * @param name name of the tiger
 * @return tiger instance or NULL if failed.
 */
animal* animal_create_tiger(void* name);

C_STMT_END

#endif /* _TIGER_H_ */
