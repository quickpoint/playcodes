/**
 * @(#) tiger.c
 * @author quickpoint AT HUST 
 * @version 1.0
 */
#include "animal.h"
#include "tiger.h"

static int animal_speak_tiger_impl(animal* thiz, void* msg) {
    return_val_if_fail(NULL != thiz && NULL != msg, -1);

    printf("AOAOOO, %s\n", (char* ) msg);
    
    return 0;
}

animal* animal_create_tiger(void* name) {
    animal* thiz = (animal*) malloc(sizeof(animal));

    if(NULL != thiz) {
        thiz->name = name;
        thiz->type = TIGER;
        thiz->canFly = 0;
        thiz->animal_speak  = animal_speak_tiger_impl;
        thiz->animal_fly = animal_fly_null;
    }

    return thiz;
}

