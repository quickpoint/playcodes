/**
 * @(#) bird.h
 * @author quickpoint AT HUST
 * @version 1.0
 */
#ifndef _BIRD_H_
#define _BIRD_H_

#include "typedef.h"
#include "animal.h"

C_STMT_BGN

/**
 * Create a bird.
 * 
 * @param name name of the bird
 * @return bird instance or NULL if failed.
 */
animal* animal_create_bird(void *name);

C_STMT_END

#endif /* _BIRD_H_ */
