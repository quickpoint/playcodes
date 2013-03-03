/**
 * @(#) bird.c
 */
#include "bird.h"
#include "animal.h"

static int animal_speak_bird_impl(animal* thiz, void* msg) {
    return_val_if_fail(NULL != thiz && NULL != msg, -1);

    printf("JIJI ZA ZA, %s\n", (char* ) msg);

    return 0;
}

static int animal_fly_bird_impl(animal* thiz) {
    return_val_if_fail(NULL != thiz, -1);

    printf("I am flying, flying in the sky.\n");

    return 0;
}


animal* animal_create_bird(void* name) {
    animal* thiz = (animal*) malloc(sizeof(animal));

    if(NULL != thiz) {
        thiz->name = name;
        thiz->type = BIRD;
        thiz->canFly = 1;
        thiz->animal_speak = animal_speak_bird_impl;
        thiz->animal_fly = animal_fly_bird_impl;
    }

    return thiz;
}
