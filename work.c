/*
	Caesar_cipher ==> https://en.wikipedia.org/wiki/Caesar_cipher
	see ==> ASCII (UNIX(command(manual)): man ascii)

	author ==> Ivan Kovalenko :)
	WAS CREATED FOR FUN 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SHIFT 1
#define INPUT_SIZE 4096

int main(void)
{
	char *from, *to;
	from = (char *)malloc(sizeof(char) * INPUT_SIZE);
	
	if (from == NULL) {
		printf("Memory allocation error\n");
		return 1;
	}

	printf("Enter the phrase to cipher\n");

	if (fgets(from, INPUT_SIZE, stdin) == NULL) {
		printf("Insertion error\n");
		return 1;
	}
	to = (char *)malloc(sizeof(from));

	if (to == NULL) {
		printf("Memory allocation error\n");
		return 1;
	}
	 
	for (unsigned int i = 0; i < strlen(from); ++i) {
		to[i] = from[i] + SHIFT;	
	}
	
	printf("ORIGIN ==> %s\n", from);
	printf("FINAL ==> %s\n", to);

	free(from);
	free(to);


	return 0;
}
