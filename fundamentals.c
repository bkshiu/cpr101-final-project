// FUNDAMENTALS MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#define NUM_INPUT_SIZE 10
/*
Author: Carl Shiu, bkshiu@myseneca.ca, 127456192, 29 November 2024, CPR101NDD, Project
[fundamental.c] : Module 1
Purpose: [implementation of the Indexing functionality]
*/
#include "fundamentals.h"

void fundamentals(void) {
    printf("*** Start of Indexing Strings Demo ***\n");

    char buffer1[BUFFER_SIZE];
    char numInput[NUM_INPUT_SIZE];
    size_t position;

    do {
        printf("Type not empty string (q - to quit):\n");
        fgets(buffer1, BUFFER_SIZE, stdin);
        buffer1[strlen(buffer1) - 1] = '\0'; // Remove the newline character

        if (strcmp(buffer1, "q") != 0) {
            printf("Type the character position within the string:\n");
            fgets(numInput, NUM_INPUT_SIZE, stdin);
            numInput[strlen(numInput) - 1] = '\0'; // Remove the newline character
            position = atoi(numInput);

            if (position >= strlen(buffer1)) {
                position = strlen(buffer1) - 1;
                printf("Too big... Position reduced to max. available\n");
            }

            printf("The character found at %d position is '%c'\n",
                   (int)position, buffer1[position]);
        }
    } while (strcmp(buffer1, "q") != 0);

    printf("*** End of Indexing Strings Demo ***\n");
}
