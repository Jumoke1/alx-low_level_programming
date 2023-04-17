#ifndef dog_h
#define dog_h
/**
* struct dog - defines a struct dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Description: Longer description
 */
struct dog
{
char *name;
float age;
char *owner;
};
/* initialize the struct dog */
struct dog my_dog = {
"nina",
3.5,
"jums"
};
printf("my dog name is %s\n", my_dog.name);
printf("my dog is %.years old\n", my_dog.age);
printf("my dog owner is %s\n", my_dog.age);

#endif
