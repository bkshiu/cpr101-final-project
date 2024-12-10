// MANIPULATING SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "manipulating.h"
/*
Author: Carl Shiu, bkshiu@myseneca.ca, 127456192, 29 November 2024, CPR101NDD, Project
[manipulatingV3.c] : Module 3
Purpose: this will search for a string
*/
void manipulating(void) {
    printf("*** Start of Searching Strings Demo ***\n");
    char haystack[BUFFER_SIZE];
    char needle[BUFFER_SIZE];
    char* occurrence = NULL;

    do {
        printf("Type the string (q - to quit):\n");
        fgets(haystack, BUFFER_SIZE, stdin);
        haystack[strlen(haystack) - 1] = '\0'; 

        if (strcmp(haystack, "q") != 0) {
            printf("Type the substring:\n");
            fgets(needle, BUFFER_SIZE, stdin);
            needle[strlen(needle) - 1] = '\0'; 

            
            occurrence = strstr(haystack, needle);

            // Display the result
            if (occurrence) {
                printf("\"%s\" found at %d position\n", needle, (int)(occurrence - haystack));
            }
            else {
                printf("Not found\n");
            }
        }
    } while (strcmp(haystack, "q") != 0); // Repeat until the user enters "q"

    printf("*** End of Searching Strings Demo ***\n");
}