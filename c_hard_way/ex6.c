#include <stdio.h>

int main(int argc, char *argv[])
{
	int distance = 100;
	char initial = 'A';
	char fist_name[] = "Zed";
	char last_name[] = "Shaw";

	printf("you are %s %s", fist_name, last_name);
	printf(", you are %d miles away\n", distance);
	
	return 0;
}
