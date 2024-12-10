// FUNDAMENTALS MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "fundamentals.h"
/*
Author: Jonathan Browne, jbrowne6@myseneca.ca, 178413233, 2024-11-29, CPR101NDD, CPR FINAL Project
[fundamentals.c] : Module 3
Purpose: this code will copy the a string and paste 
*/
void fundamentals(void) {
    printf("*** Start of Copying Strings Demo ***\n");

    char destination[BUFFER_SIZE];
    char source[BUFFER_SIZE];

    do {
        // Reset the destination string to empty
        destination[0] = '\0';
        printf("Destination string is reset to empty\n");

        // Prompt user for the source string
        printf("Type the source string (q - to quit):\n");
        fgets(source, BUFFER_SIZE, stdin);
        source[strlen(source) - 1] = '\0'; // Remove the newline character

        if (strcmp(source, "q") != 0) {
            // Copy the source string to the destination string
            strcpy(destination, source);
            printf("New destination string is '%s'\n", destination);
        }

    } while (strcmp(source, "q") != 0);

    printf("*** End of Copying Strings Demo ***\n");
}