// TOKENIZING SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include <stdio.h>
#include <string.h>
#include "tokenizing.h"


void converting(void) {
    printf("*** Start of Tokenizing Words Demo ***\n");
    char words[BUFFER_SIZE];
    char* nextWord = NULL;
    int wordsCounter;

    do {
        printf("Type a few words separated by space (q to quit):\n");
        fgets(words, BUFFER_SIZE, stdin);
        words[strlen(words) - 1] = '\0'; // Remove newline character
        if (strcmp(words, "q") != 0) {
            nextWord = strtok(words, " ");
            wordsCounter = 1;
            while (nextWord) {
                printf("word #%d is '%s'\n", wordsCounter++, nextWord);
                nextWord = strtok(NULL, " ");

            }
        }
    } while (strcmp(words, "q") != 0);
    printf("*** End of Tokenizing Words Demo ***\n\n");
}
