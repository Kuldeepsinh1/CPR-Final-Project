#define _CRT_SECURE_NO_WARNINGS


// including all four source file contianing the functions
// including the header file named fundamentals.h
#include "fundamentals.h"
// including the header file named manipulating.h
#include "manipulating.h"
// including the header file named converting.h
#include "converting.h"
// including the header file named tokenizing.h
#include "tokenizing.h"
// all four header file are included because we have function definition for each function 
// stored seperately in all these header files

// main is a self calling function and hence the program starts from here
// our main requires no arguments and returns an integer data type.
int main(void)
{ // starting code block for main function.
   // inititailizing the character array named buff with the storing value of 10
	char buff[10];
	// Starting the do-while loop
	do
	{ // starting code block of do while loop.
	// printing menu options from which user can choose from
	// printing statement saying press 1 for fundamentals
		printf("1 - Fundamentals\n");

		// printing statement saying press 2 for Manipulation
		printf("2 - Manipulation\n");
		// printing statement saying press 3 for converting
		printf("3 - Converting\n");
		// printing statement saying press 4 for Tokenizing
		printf("4 - Tokenizing\n");
		// printing statement saying press 0 to exit
		printf("0 - Exit\n");
		// asking user for their choice from above options.
		printf("Which module to run? \n");
		// takes value from user and stores it in buff
		fgets(buff, 10, stdin);

		// starting switch case condition
		switch (buff[0])
		{ //starting code block of switch case.
		  // calling the function as per the users choice
		case '1': fundamentals();
			// to stop fall through situation from arising.
			break;
			// calling the function as per the users choice
		case '2': manipulating();
			// to stop fall through situation from arising.
			break;
			// calling the function as per the users choice

		case '3': converting();
			// to stop fall through situation from arising.
			break;
			// calling the function as per the users choice
		case '4': tokenizing();
			// to stop fall through situation from arising.
			break;
			// end of switch case
		}
		// do-while loop gets ended if buff[0] == 0
	} while (buff[0] != '0');

	// returning 0 as value because our program the main function has integr as return type.
	return 0;
}// end of the main function