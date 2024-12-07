// MANIPULATING SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
/*
Author: Carl Shiu, bkshiu@myseneca.ca, 127456192, 29 November 2024, CPR101NDD, Project
[manipulating.c] : Module 2
Purpose: [this program Comparing string demo]
*/
#include "manipulating.h"



void manipulating(void) {
    //v2

    printf("*** Start of Comparing Strings Demo ***\n");
    char compare1[BUFFER_SIZE];
    char compare2[BUFFER_SIZE];
    int result;

    do {
        // Prompt the user to enter the first string
        printf("Type the 1st string to compare (q - to quit):\n");
        fgets(compare1, BUFFER_SIZE, stdin);
        compare1[strlen(compare1) - 1] = '\0'; // Remove the newline character

        if (strcmp(compare1, "q") != 0) { // Check if the user wants to quit
            // Prompt the user to enter the second string
            printf("Type the 2nd string to compare:\n");
            fgets(compare2, BUFFER_SIZE, stdin);
            compare2[strlen(compare2) - 1] = '\0'; // Remove the newline character

            // Compare the two strings
            result = strcmp(compare1, compare2);

            // Display the comparison result
            if (result < 0) {
                printf("\"%s\" string is less than \"%s\"\n", compare1, compare2);
            }
            else if (result == 0) {
                printf("\"%s\" string is equal to \"%s\"\n", compare1, compare2);
            }
            else {
                printf("\"%s\" string is greater than \"%s\"\n", compare1, compare2);
            }
        }
    } while (strcmp(compare1, "q") != 0); // Repeat until the user enters "q"

    printf("*** End of Comparing Strings Demo ***\n");
}