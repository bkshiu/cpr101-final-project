// CONVERTING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "converting.h"

/*
Author: Karl Shiu, bkshiu1@myseneca.ca, 131531246, 13/12/2024, CPR101NDD, Final Group Project
converting.c : Module 3 V3
Purpose: Convert string to int, double, long
*/

// Version 3
void converting(void) {
    // Converting Strings to Integers
    printf("*** Start of Converting Strings to int Demo ***\n");
    char intString[BUFFER_SIZE];
    int intNumber;
    do {
        printf("Type the integer numeric string (q - to quit):\n");
        fgets(intString, BUFFER_SIZE, stdin);
        intString[strlen(intString) - 1] = '\0'; // Remove newline character
        if (strcmp(intString, "q") != 0) {
            intNumber = atoi(intString);
            printf("Converted number is %d\n", intNumber);
        }
    } while (strcmp(intString, "q") != 0);
    printf("*** End of Converting Strings to int Demo ***\n");

    // Converting Strings to Doubles
    printf("\n*** Start of Converting Strings to double Demo ***\n");
    char doubleString[BUFFER_SIZE];
    double doubleNumber;
    do {
        printf("Type the double numeric string (q - to quit):\n");
        fgets(doubleString, BUFFER_SIZE, stdin);
        doubleString[strlen(doubleString) - 1] = '\0'; // Remove newline character
        if (strcmp(doubleString, "q") != 0) {
            doubleNumber = atof(doubleString);
            printf("Converted number is %f\n", doubleNumber);
        }
    } while (strcmp(doubleString, "q") != 0);
    printf("*** End of Converting Strings to double Demo ***\n");

    // Converting Strings to Longs
    printf("\n*** Start of Converting Strings to long Demo ***\n");
    char longString[BUFFER_SIZE];
    long longNumber;
    do {
        printf("Type the long numeric string (q - to quit):\n");
        fgets(longString, BUFFER_SIZE, stdin);
        longString[strlen(longString) - 1] = '\0'; // Remove newline character
        if (strcmp(longString, "q") != 0) {
            longNumber = atol(longString);
            printf("Converted number is %ld\n", longNumber);
        }
    } while (strcmp(longString, "q") != 0);
    printf("*** End of Converting Strings to long Demo ***\n");
}