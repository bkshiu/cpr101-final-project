
// TOKKENIZING SOURCE
#define _CRT_SECURE_NO_WARINGS
#define BUFFER_SIZE 300
#include "tokenizing.h"
/*
Author: Mahummad Ahmed, mahmed290@myseneca, 124573239, 2024-11-29, CPR101NDD, CPR FINAL Project
[tokenizing.c] : [CPR final Project]
Purpose: used the string of words that are entered by the user and splits it into individual words based on spaces.
*/
// V1
void tokenizing(void) {
	printf("*** start of Tokenizing words Demo ***\n");
	char    words[BUFFER_SIZE];
	char* nextWord = NULL;
	int		wordsCounter;
	do {
		printf("Type a few words separated by sqace (q = to quit):\n");
		fgets(words, BUFFER_SIZE, stdin);
		words[strlen(words) - 1] = '\0'; // Removing the newline character from fgets input
		
		// Tokenizing words
		if (strcmp(words, "q") != 0) {
			nextWord = strtok(words, " ");
			wordsCounter = 1;
			while (nextWord) {
				// Displaying tokenized words
				printf("word #%d is \'%s\'\n", wordsCounter++, nextWord);
				nextWord = strtok(NULL, " ");
			}

		}

	} while (strcmp(words, "q") != 0);
	printf("*** end of Tokenizing Words Demo ***\n\n");
}