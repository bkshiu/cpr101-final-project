
// TOKKENIZING SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include "tokenizing.h"
/*
Author: Mahummad Ahmed, mahmed290@myseneca, 124573239, 2024-11-29, CPR101NDD, CPR FINAL Project
[tokenizing.c] : [CPR final Project]
Purpose: the user  input phrases that are separated by commas
*/

void tokenizing(void) {

	// V2
	printf("*** start of Tokenizing phrases Demo ***\n");
	char    phrases[BUFFER_SIZE];
	char* nextPhrase = NULL;
	int		phrasesCounter;
	do {
		printf("Type a few phrases separated by comma (q = to quit):\n");
		fgets(phrases, BUFFER_SIZE, stdin); // Read input f and store it in the 'phrases' array
		phrases[strlen(phrases) - 1] = '\0'; // Removing the newline character from fgets input

		// Tokenizing phrases
		if ((strcmp(phrases, "q") != 0)) {
			nextPhrase = strtok(phrases, ",");
			phrasesCounter = 1;
			while (nextPhrase) {
				// Displaying tokenized phrases
				printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase);
				nextPhrase = strtok(NULL, ",");
			}

		}

	} while (strcmp(phrases, "q") != 0);
	printf("*** end of Tokenizing phrases Demo ***\n\n");
}


