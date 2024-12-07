// FUNDAMENTALS SOURCE
#define _CRT_SECURE_NO_WARINGS
#define BUFFER_SIZE		80 
#define NUM_INPUT_SIZE  10
#include "fundamentals.h"
/*
Author: Jonathan Browne, jbrowne6@myseneca.ca, 178413233, 2024-11-29, CPR101NDD, CPR FINAL Project
[fundamentals.c] : [CPR final Project]
Purpose: this code show how string measurement by displaying and calculating the length of user-input string
*/

void fundamentals(void) {
	// V2
	printf("*** Start of measuring Strings Demo ***\n");
	// Declare variables
	char    buffer2[BUFFER_SIZE];
	do {
		printf("Type a string (q - to quit):\n");
		fgets(buffer2, BUFFER_SIZE, stdin); //  user input and including newline character

		buffer2[strlen(buffer2) - 1] = '\0';  // Remove the trailing newline character 

		if (strcmp(buffer2, "q") != 0)
			printf("The length of \'%s\' is %d characters\n", buffer2, (int)strlen(buffer2));
		
} while (strcmp(buffer2, "q") != 0); //loop until the user enters "q"
	printf("*** End of Measuring String Demo ***\n\n");
}