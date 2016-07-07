#include <stdio.h>
#include <stdlib.h>

typedef struct Animal {
	char *name;
	int age;
} Animal;

int main() {
	Animal *an = malloc(sizeof(Animal));
	an->name = "Dog wang wang";
	an->age = 3;
	printf("Animal name: %s, age:%d\n", an->name, an->age);

	Animal *an2 = malloc(sizeof(Animal));
	*an2 = *an;
	printf("Second animal name: %s, age:%d\n", an2->name, an2->age);

}