/**
 * @(#) animal.c
 * @author quickpoint AT HUST
 * @version 1.0
 */
#include "animal_type.h"
#include "animal.h"
#include "bird.h"
#include "tiger.h"
#include "dog.h"

animal* animal_create(ANIMAL_TYPE type, void* name) {
    return_val_if_fail(NONE != type, NULL);

    switch(type) {
        case DOG:
            return animal_create_dog(name);
        case TIGER:
            return animal_create_tiger(name);
        case BIRD:
            return animal_create_bird(name);
        default:
            return NULL;
    }
}

void animal_destroy(animal* thiz) {
    return_if_fail(NULL != thiz);

    SAFE_FREE(thiz);
}

inline void* animal_get_name(animal* thiz) {
    return_val_if_fail(NULL != thiz, "NULL name");
    
    return thiz->name;
}

inline int animal_set_name(animal* thiz, void* name) {
    return_val_if_fail(NULL != thiz && NULL != name, -1);

    thiz->name = name;

    return 0;
}

inline ANIMAL_TYPE animal_get_type(animal* thiz) {
    return_val_if_fail(NULL != thiz, NONE);

    return thiz->type;
}

inline const char* animal_get_type_string(animal* thiz) {
    if(NULL == thiz) {
        return animal_get_type_string_by_type(NONE);
    }

    return animal_get_type_string_by_type(animal_get_type(thiz));
}

inline int animal_can_fly(animal* thiz) {
    return_val_if_fail(NULL != thiz, 0);

    return thiz->canFly;
}

inline int animal_speak(animal* thiz, void* msg) {
    return_val_if_fail(NULL != thiz && NULL != thiz->animal_speak && NULL != msg, -1);

    return thiz->animal_speak(thiz, msg);
}

inline int animal_fly(animal* thiz) {
    return_val_if_fail(NULL != thiz && NULL != thiz->animal_fly, -1);

    return thiz->animal_fly(thiz);
}

