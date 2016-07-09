#include <stdio.h>

int main(int argc, char *argv[]){
  char name[4] = {'a'};
  printf("Name:%s\n", name);
  printf("length of name:%lu\n", sizeof(name)/sizeof(char));
  
  int numbers[4] = {1};
  int size = 4;
  for(int i=0; i<size; i++) {
    printf("%d ", numbers[i]);
  }
  printf("\n");
  return 0;
}

