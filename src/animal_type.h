/**
 * @(#) animal_tppe.h
 * @author quickpoint AT HUST
 * @version 1.0
 */
#ifndef _ANIMAL_TYPE_H_
#define _ANIMAL_TYPE_H_

#include "typedef.h"

C_STMT_BGN

/** animal_type */
typedef enum {NONE = 0  /* first index */, 
              DOG, 
              TIGER, 
              BIRD,
              ANIMAL_NR } ANIMAL_TYPE;

/**
 * Mapping of animal_type and it's description. 
 * key = animal_type, value = description text. 
 */
typedef struct _animal_type_string {
    ANIMAL_TYPE type;  			/* animal_type */
    const char* named_string;   /* description of the type */
} animal_type_string;

/**
 * The animal_type_string map, this is a GLOBAL value.
 * NOTE that, any addition of entry in animal_type, you should add one entry in this map.
 */
static animal_type_string global_animal_type_string_map[] = {
    {NONE, "NONE"}, 
    {DOG, "DOG"}, 
    {TIGER, "TIGER"},
    {BIRD, "BIRD"},
};

/**
 * Get animal_type description text by the type value.
 * @param type animal_type
 * @return text description, and NONE if invalid type.
 */
static inline const char* animal_get_type_string_by_type(ANIMAL_TYPE type) {
    int size = ARRAY_SIZE(global_animal_type_string_map);
    ANIMAL_TYPE local_type = type;

    if(type < 0 || type >= size) {
        local_type = NONE;
    }
    
    return global_animal_type_string_map[local_type].named_string;            
}

C_STMT_END

#endif /* ANIMAL_TYPE_H_ */
