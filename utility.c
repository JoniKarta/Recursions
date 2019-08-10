
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utility.h"

int countEvenDigits(int num) {
	if (num < 10)
		return num % 2 == 0 ? 1 : 0;
	return countEvenDigits(num / 10) + (num % 10 % 2 == 0 ? 1 : 0);

}

int isEvenDigits(int num) {
	if (num < 10)
		return num % 2 == 0 ? TRUE : FALSE;
	if (num % 10 % 2 != 0)
		return FALSE;
	return isEvenDigits(num / 10);
}

int countEvenNumberInArray(int* arr, int size) {
	if (size < 0)
		return FALSE;
	if (size == 1) {
		return arr[size - 1] % 2 == 0 ? 1 : 0;
	}
	return countEvenNumberInArray(arr, size - 1) + (arr[size - 1] % 2 == 0 ? 1 : 0);
}

int checkAllCharacterUppercase(char* string) {
	if (*string == '\0')
		return TRUE;
	if (*string < 'A' || *string > 'Z')
		return FALSE;

	return checkAllCharacterUppercase(string + 1);

}

int checkIsDigitExist(int num, int digit) {
	if (digit > 9 || digit < 0 || (num == 0 && digit != 0)) {
		return FALSE;
	}
	if (num % 10 == digit) {
		return TRUE;
	}
	else
		return checkIsDigitExist(num / 10, digit);

}

int exchangeableParity(int num) {
	if (num < 10) {
		return TRUE;
	}
	if (num % 10 % 2 == 0 && num / 10 % 10 % 2 == 1 ||
		num % 10 % 2 == 1 && num / 10 % 10 % 2 == 0)
		return exchangeableParity(num / 10);
	return FALSE;
}

int moduleWithAddAndSub(int a, int b) { 
	if (a < b)
		return a;
	return moduleWithAddAndSub(a - b, b);
}

/*
               #                  #           #
             __#___               #           #
          __|__1___|__            #           #
       __|_____2______|__         #           #
      |        3         |        #           #
############## A ################ B ######### C ########
*/
void towerOfHanoi(int n, char a, char b, char c) {
	if (n > 0) {
		towerOfHanoi(n - 1, a, c, b);
		printf("Move disk %d from %c to %c\n",n, a, c);
		towerOfHanoi(n - 1, b, a, c);
	}
}

int fibonacciSeries(int n) {
	if (n <= 1) {
		return n;
	}
	return fibonacciSeries(n - 2) + fibonacciSeries(n - 1);
}


void desplayRecursionMenu() {
	char* list_func[OPTION_LIST] = { "Count even digits", "Check if all digits are even",
	"Count even nums in array", "Check if all character are uppercase",
		"Check if digit exists", "Exchangble parity", "Calculate mod with addition and subtraction",
	"Tower of Hanoi", "fibonacci series", "Exit" };
	printf("###########################################\n");
	printf("##                                       ##\n");
	printf("##          Recursion Questions          ##\n");
	printf("##                                       ##\n");
	printf("###########################################\n");
	for (int i = 0; i < OPTION_LIST; i++) {
		printf("%d. %s.\n", i + 1, list_func[i]);
	}
	printf("\n");
}

int getInputFromUser(char* string) {
	int input;
	printf("%s: ", string);
	scanf("%d", &input);
	return input;
}

char* getStringFromUser(char* str) {
	printf("%s: ", str);
	char string[MAX_LIMIT];
	getchar();
	fgets(string, MAX_LIMIT, stdin);
	string[strlen(string)] = '\0';
	char* newString = (char*)malloc(sizeof(char) * strlen(string));
	if (newString) {
		strcpy(newString, string);
	}
	return newString;
}

int* getArrayFromUser(int* size) {
	*size = getInputFromUser(ARRAY_SIZE);
	int* arr = (int*)malloc(sizeof(arr) * (*size));
	printf("Please enter values to the array: \n");
	for (int i = 0; i < *size; i++) {
		printf("Element No %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	return arr;
}

