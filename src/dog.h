/**
 * @(#) dog.h
 * @author quickpoint AT HUST
 * @version 1.0
 */
#ifndef _DOG_H_
#define _DOG_H_

#include "typedef.h"

C_STMT_BGN

/**
 * Create a dog.
 * 
 * @param name name of the dog
 * @return dog instance or NULL if failed.
 */
animal* animal_create_dog(void *name);

C_STMT_END

#endif /* _DOG_H_ */
