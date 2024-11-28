// MANIPULATING SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "manipulating.h"

void manipulating(void) {
    printf("*** Start of Concatenating Strings Demo ***\n");
    char string1[BUFFER_SIZE * 2];
    char string2[BUFFER_SIZE];
    do {
        printf("Type the 1st string (q - to quit):\n");
        fgets(string1, BUFFER_SIZE, stdin);
        string1[strlen(string1) - 1] = '\0'; // Remove newline character
        if (strcmp(string1, "q") != 0) {
            printf("Type the 2nd string:\n");
            fgets(string2, BUFFER_SIZE, stdin);
            string2[strlen(string2) - 1] = '\0'; // Remove newline character
            strcat(string1, string2); // Concatenate string2 to string1
            printf("Concatenated string is \'%s\'\n", string1);
        }
    } while (strcmp(string1, "q") != 0);
    printf("*** End of Concatenating Strings Demo ***\n");
}
