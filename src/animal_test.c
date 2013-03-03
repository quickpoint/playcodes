/**
 * @(#) animal_test.c
 */
#include "typedef.h"
#include "animal.h"
#include "dog.h"
#include "tiger.h"
#include "bird.h"

void animal_test_it(animal* thiz);

int main(int argc, char* argv[]) {
    animal* dog = animal_create(DOG, "WangCai");    
    animal* tiger = animal_create(TIGER, "Tiger WANG");
    animal* bird = animal_create(BIRD, "Ying WU");

    animal_test_it(dog);
    animal_test_it(tiger);
    animal_test_it(bird);

    animal_destroy(dog);
    animal_destroy(tiger);
    animal_destroy(bird);

    return 0;
}

void animal_test_it(animal* thiz) {
    if(NULL != thiz) {
        printf("==========type: %s test=============\n", animal_get_type_string(thiz)); 
        printf("%s speaks\n", (char *)animal_get_name(thiz));
        animal_speak(thiz, "hello");
        if(animal_can_fly(thiz)) {
            animal_fly(thiz);
        }
    }
}
