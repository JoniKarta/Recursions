
#define TRUE 1
#define FALSE 0
#define OPTION_LIST 10
#define MAX_LIMIT 100
#define NUM_OF_DISKS 3

#define STRING "Please enter a string"
#define NUMBER "Please enter a number"
#define DIGIT "Please enter a digit"
#define ARRAY_SIZE "Please enter this size of the array"
#define CHOICE "Please enter your choice"

enum option_list{
	COUNT_EVEN_DIGITS = 1, IS_EVEN_DIGIT, COUNT_EVEN_NUMBERS_IN_ARRAY,
CHECK_ALL_CHARACTERS_UPPERCASE, IS_DIGIT_EXIST, EXCHANGEABLE_PARITY, MODULE, TOWER_OF_HANOI,
FIBONACCI_SERIES, EXIT
};

/*
################################################
##	  	     RECURSIVE METHODS                ##
################################################
*/

int countEvenDigits(int num);

int isEvenDigits(int num);

int countEvenNumberInArray(int* arr, int size);

int checkAllCharacterUppercase(char* string);

int checkIsDigitExist(int num, int digit);

int exchangeableParity(int num);

int moduleWithAddAndSub(int a, int b);

void towerOfHanoi(int n, char a, char b, char c);

int fibonacciSeries(int n);

/*
################################################
##		DISPLAY AND INPUT MEHTODS             ##                                          
################################################
*/

void desplayRecursionMenu();

int getInputFromUser(char* string);

char* getStringFromUser(char* str);

int* getArrayFromUser(int* size);

