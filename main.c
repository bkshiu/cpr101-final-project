#include "fundamentals.h"
#include "manipulating.h"
#include "converting.h"
#include "tokenizing.h"

int main(void) {
	char buff[10];
	do {
		printf("Which module to run?\n");
		printf("1 - fundamentals\n");
		printf("2 - manipulating\n");
		printf("3 - converting\n");
		printf("4 - tokenizing\n");
		printf("0 - Finish\n"); 
		printf("Your selection: ");
		fgets(buff, 10, stdin);
		switch (buff[0]) {
			case '1': fundamentals();
			break;
			case '2': manipulating();
			break;
			case '3': converting();
			break;
			case '4': tokenizing();
			break;
			case '0':
			break;
		default: printf("Bad selection!\n");
		}
	} while (buff[0] != '0');
	return 0;
}
