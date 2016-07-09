#include "dbg.h"
#include <stdlib.h>
#include <stdio.h>

void test_debug() {
  debug("I have brown hair.");
  debug("I am %d years old.", 37);
}

void test_log_err() {
  log_err("I believe everything is broken.");
  log_err("There are %d problems in %s.", 0, "space");
}

int test_check(char *file_name) {
  FILE *input = NULL;
  char *block = NULL;
  block = malloc(100);
  check_mem(block); //should work

  input = fopen(file_name, "r");
  check(input, "Failed to open %s.", file_name);
  
  free(block);
  fclose(input):
  return 0;

error:
  if(block) free(block);
  if(input) fclose(input);
  return -1;
}


