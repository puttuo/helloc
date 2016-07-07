#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

typedef struct Person {
	char* name;
	int age;
	int height;
	int weight;
} Person;

Person * Person_create(char *name, int age, int height, int weight) {
	Person* person = malloc(sizeof(Person));
	person->name = strdup(name);
	person->age = age;
	person->height = height;
	person->weight = weight;

	return person;
}


void Person_destroy(Person* who) {
	assert(who != NULL);
	free(who->name);
	free(who);
}

void Person_print(Person *who) {
	printf("Name: %s\n", who->name);
	printf("\tAge: %d\n", who->age);
	printf("\tHeight: %d\n", who->height);
	printf("\tWeight: %d\n", who->weight);
}

int main(int argc, char *argv[]) {
	Person *joe = Person_create("Joe Alex", 32, 64, 140);
	Person *frank = Person_create("Frank Blank", 20, 72, 180);
	printf("Joe is at memory location %p:\n", joe);
	Person_print(joe);
	printf("Frank is at memory location %p:\n", frank);
	Person_print(frank);

	joe->age += 20;
	joe->height -= 2;
	joe->weight += 40;
	Person_print(joe);
	
	frank->age +=20;
	frank->weight += 20;
	Person_print(frank);

	Person_destroy(joe);
	Person_destroy(frank);

	return 0;
}
