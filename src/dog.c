/**
 * @(#) dog.c
 * @author quickpoint
 * @version 1.0
 */
#include "animal.h"
#include "dog.h"

static int animal_speak_dog_impl(animal* thiz, void* msg) {
    return_val_if_fail(NULL != thiz && NULL != msg, -1);

    printf("WANGWANGWANG, %s\n", (char*) msg);

    return 0;
}

animal* animal_create_dog(void* name) {

    animal* thiz = (animal*) malloc(sizeof(animal));

    if(NULL != thiz) {
        thiz->name = name;
        thiz->type = DOG;
        thiz->canFly = 0;
        thiz->animal_speak = animal_speak_dog_impl;
        thiz->animal_fly = animal_fly_null;
    }

    return thiz;
}
