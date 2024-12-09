
// TOKKENIZING SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include "tokenizing.h"
/*
Author: Mahummad Ahmed, mahmed290@myseneca, 124573239, 2024-11-29, CPR101NDD, CPR FINAL Project
[tokenizing.c] : Module 3
Purpose: ask for input and with period set them to sentences
*/

void tokenizing(void) {
	// V3
		printf("*** start of Tokenizing Sentences Demo ***\n");
		char    Sentences[BUFFER_SIZE];
		char* nextSentences = NULL;
		int		SentencesCounter;
		do {
			printf("Type a few Sentences separated by comma (q = to quit):\n");
			fgets(Sentences, BUFFER_SIZE, stdin);
			Sentences[strlen(Sentences) - 1] = '\0'; // Removing the newline character from fgets input

			// Tokenizing words
			if ((strcmp(Sentences, "q") != 0)) {
				nextSentences = strtok(Sentences, ".");
				SentencesCounter = 1;
				while (nextSentences) {
					// Displaying tokenized words
					printf("Sentences #%d is \'%s\'\n", SentencesCounter++, nextSentences);
					nextSentences = strtok(NULL, ",");
				}

			}

		} while (strcmp(Sentences, "q") != 0);
		printf("*** end of Tokenizing Sentences Demo ***\n\n");
	}

