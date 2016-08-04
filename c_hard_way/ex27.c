#undef NDEBUG
#include "dbg.h"
#include <stdio.h>
#include <assert.h>

/*
 * Naive copy that assumes all inputs are always valid
 * taken from K&R c and cleaned up a bit.
 */
void copy(char to[], char from[]) {
	int i = 0;
	
	//while loop will not end if from isn't '\0\ terminated
	while((to[i] = from[i]) != '\0') {
		++i;
	}
}

/*
 * A safer version that checkes for many common errors using the 
 * length of each string to control loops and termination.
 */
int safercopy(int from_len, char *from, int to_len, char *to) {

}


