#ifndef STRUCTS
#define STRUCTS
/**
 * struct dog -descripition for a pet
 * @name: pet name
 * @age: pet age
 * @owner: owner
 *
 * Description: longer description
 */
typedef struct dog
{
        char *name;
        float age;
        char *owner;
        
}
dog_t;
#endif
#ifndef _FUNCTION_H
#define _FUNCTION_H
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
