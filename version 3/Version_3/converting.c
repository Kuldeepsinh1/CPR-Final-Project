///////////////////////////////////////////////////////////////////////////////////////
// NAME       - KULDEEPSINH SANDIPSINH MAHIDA
// College ID - kmahida1@myseneca.ca
// Student ID - 167547215
///////////////////////////////////////////////////////////////////////////////////////
//CONVERTING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS

// '#define' is used to create the macro and named it BUFFER_SIZE
// assigning 80 as value to it 
#define BUFFER_SIZE 80 

// '#include' is used to include the header file named converting.h
#include "converting.h" 
// V1

// Calling the function named converting which requires no input and returns no value
void converting(void)

//opening code block of function converting
{

	// printing the welcome message to the user.
	printf("*** Start of Converting Strings to long Demo ***\n");

	// creating a character array of size same as BUFFER_SIZE and naming it longString
	char longString[BUFFER_SIZE];

	// creating a variable of datatype long and naming it longNumber
	long longNumber;
	// making a looping construct which is exit controlled ( do - while )
	//opening code block of do while loop 
	do {

		// giving instruction to the user on how to quit the loop
		printf("Type an long numeric string (q - to quit):\n");

		// reads the input and stores it into the longString array of 80 size and stdin is used to send the data to the program
		fgets(longString, BUFFER_SIZE, stdin);

		// assigning the last character of longString to a null terminating character
		longString[strlen(longString) - 1] = '\0';

		// calling the strcmp function to check if longString matches to q
		// and the if condition checks if the value returned by strcmp is -1 or 0
		// -1 means the longString does not match q and the condition -1 != 0 is satisfied so goes in if conditon
		// 0 means the longString does match q and the condition 0 != 0 is not satisfied so does not goes in if condition.
		if (strcmp(longString, "q") != 0)
		{
			//opening code block of if condition
			// atoi is function which is called to convert string to long.
			//longString is passed as argument and the value which is returned by atoi is stored in longNumber.
			longNumber = atol(longString);

			// printing the result
			printf("Converted number is %ld\n", longNumber);

			// ending of if condition
		}

		// calling the strcmp function to check if longString matches to q
		// if it matches to q the the loop will exit
	} while (strcmp(longString, "q") != 0);

	// Printing the ending greet to the user 
	printf("*** End of converting strings to doule Demo ***\n\n");
}//end of main function code block