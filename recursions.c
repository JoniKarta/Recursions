
#include <stdio.h>
#include <stdlib.h>
#include "utility.h"

int main(void) {
	int fcontinue = TRUE, size, *arr;
	while (fcontinue) {
		desplayRecursionMenu();
		switch (getInputFromUser(CHOICE)) {

		case COUNT_EVEN_DIGITS:
			printf("The number of even digits is %d \n", countEvenDigits(getInputFromUser(NUMBER)));
			break;

		case IS_EVEN_DIGIT:
			printf("Does all the digits are even? %s. \n", isEvenDigits(getInputFromUser(NUMBER))? "True":"False");
			break;

		case COUNT_EVEN_NUMBERS_IN_ARRAY:
			arr = getArrayFromUser(&size);
			printf("The number of even numbers in the array is %d \n", countEvenNumberInArray(arr, size));
			break;

		case CHECK_ALL_CHARACTERS_UPPERCASE:
			printf("Does all the letters uppercase? %s. \n", checkAllCharacterUppercase(getStringFromUser(STRING)) ? "True" : "False");
			break;

		case IS_DIGIT_EXIST:
			printf("Does the digit exists in the number? %s. \n", checkIsDigitExist(getInputFromUser(NUMBER), getInputFromUser(DIGIT))? "True" : "False");
			break;

		case EXCHANGEABLE_PARITY:
			printf("Does the digit are exchangable? %s. \n", exchangeableParity(getInputFromUser(NUMBER)) ? "True" : "False");
			break;

		case MODULE:
			printf("The module is: %d \n ", moduleWithAddAndSub(getInputFromUser("Dividend"), getInputFromUser("Divisor")));
			break;

		case TOWER_OF_HANOI:
			towerOfHanoi(NUM_OF_DISKS, 'A', 'B', 'C');
			break;

		case FIBONACCI_SERIES:
			printf("The value is: %d \n", fibonacciSeries(getInputFromUser("Please enter index in fibonacci series")));
			break;
			
		case EXIT:
			fcontinue = FALSE;
			break;

		}
	}


	return EXIT_SUCCESS;
}
