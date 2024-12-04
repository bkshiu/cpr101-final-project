
// TOKKENIZING SOURCE
#define _CRT_SECURE_NO_WARNINGS
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
// V2
	printf("*** start of Tokenizing phrases Demo ***\n");
	char    phrases[BUFFER_SIZE];
	char* nextPhrase = NULL;
	int		phrasesCounter;
	do {
		printf("Type a few phrases separated by comma (q = to quit):\n");
		fgets(phrases, BUFFER_SIZE, stdin);
		phrase[strlen(phrases) - 1] = '\0'; // Removing the newline character from fgets input

		// Tokenizing words
		if ((strcmp(phrases, "q") != 0)) {
			nextphrase = strtok(phrases, ",");
			phasesCounter = 1;
			while (nextPhrase) {
				// Displaying tokenized words
				printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase);
				nextPhrase = strtok(NULL, ",");
			}

		}

	} while (strcmp(words, "q") != 0);
	printf("*** end of Tokenizing phrases Demo ***\n\n");

	// V3
	printf("*** start of Tokenizing Sentences Demo ***\n");
	char    Sentences[BUFFER_SIZE];
	char*	nextSentences = NULL;
	int		SentencesCounter;
	do {
		printf("Type a few Sentences separated by comma (q = to quit):\n");
		fgets(Sentences, BUFFER_SIZE, stdin);
		Sentences[strlen(Sentences) - 1] = '\0'; // Removing the newline character from fgets input

		// Tokenizing words
		if ((strcmp(Sentences, "q") != 0)) {
			nextSentences = strtok(Sentences, ",");
			SentencesCounter = 1;
			while (nextSentences) {
				// Displaying tokenized words
				printf("Sentences #%d is \'%s\'\n", SentencesCounter++, nextSentences);
				nextPhrase = strtok(NULL, ",");
			}

		}

	} while (strcmp(words, "q") != 0);
	printf("*** end of Tokenizing Sentences Demo ***\n\n");
