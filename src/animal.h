/**
 *  @(#) animal.h
 *  @author quickpoint AT HUST
 *  @version 1.0
 */
#ifndef _ANIMAL_H_
#define _ANIMAL_H_
    
#include "typedef.h"
#include "animal_type.h"

C_STMT_BGN

struct _animal;

typedef struct _animal animal;

/** struct animal, the interface */
struct _animal {
    void* name;			/* the property of name */
    ANIMAL_TYPE type;   /* the property of type */
    int canFly;         /* the property of canFly */

    int (*animal_speak)(animal* thiz, void* msg);  /* the interface function pointer, animal_speak */
    int (*animal_fly)(animal* thiz);	/* the interface function pointer, animal_fly */
};

/**
 * Create an animal.<br/>
 * This is a FACTORY METHOD for creation. 
 * 
 * @param type type of the animal
 * @param name name of the animal
 * @return animal instance, or NULL if failed. 
 */
animal* animal_create(ANIMAL_TYPE type, void* name);

/**
 * Destroy an animal.
 * 
 * @param thiz animal instance
 */
void animal_destroy(animal* thiz);

/**
 * Get name of an animal.
 * 
 * @param thiz animal instance
 * @return name of the animal.
 */ 
void* animal_get_name(animal* thiz);

/**
 * Set name of an animal.
 * 
 * @param thiz animal instance
 * @param name name of the animal
 * @return 0 if success, -1 if failed.
 */ 
int animal_set_name(animal* thiz, void* name);

/**
 * Get type of the animal.
 * 
 * @param thiz animal instance
 * @return type of the animal, NONE if invalid instance.
 */ 
ANIMAL_TYPE animal_get_type(animal* thiz);

/**
 * Get type description of the animal.
 * 
 * @param thiz animal instance
 * @return tppe description of animal, "NONE" if invalid instance.
 */
const char* animal_get_type_string(animal* thiz);

/**
 * Check if the animal can fly.
 * 
 * @param thiz animal instance
 * @return 1 if can fly, 0 if cannot fly or invalid instance.
 */
int animal_can_fly(animal* thiz);

/**
 * Operation of animal speak.
 * 
 * @param thiz animal instance
 * @param msg message to speak
 * @return 0 if success, -1 if failed.
 */
int animal_speak(animal* thiz, void* msg);

/**
 * Operation of animal fly.
 * 
 * @param thiz animal instance
 * @return 0 if success, -1 if failed. 
 */
int animal_fly(animal* thiz);

/**
 *	Adapter method implementation of animal speak. 
 */
static inline int animal_speak_null(animal* thiz, void* msg) {
    return 0;
}

/**
 * 	Adapter method implementation of animal fly.
 */ 
static inline int animal_fly_null(animal* thiz) {
    return 0;
}

C_STMT_END

#endif /* _ANIMAL_H_ */
