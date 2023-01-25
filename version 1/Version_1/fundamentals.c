// FUNDAMENTALS MODULE SOURCE
#define CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE    300//defining the size of buffer size to 80
#define NUM_INPUT_SIZE 10 //defining the size of num_input_size to 10
#include "fundamentals.h"//including the header file or preprocessor 


void fundamentals(void)
{


	printf("*** start of Indexing Strings Demo ***\n");//print the statement written between " " .

	char buffer1[BUFFER_SIZE];//Declare an array of characters named buffer1 with the size 80

	char numInput[NUM_INPUT_SIZE];//Declare an array of character named numInput with size 10

	size_t position;//Declaring a variable named as position.
	do //A do-while loop runs till the condition is false
	{

		printf("Type not empty string (q - to quit): \n");//to display statement within  " " 
		fgets(buffer1, BUFFER_SIZE, stdin);//to accept a line of input and store it in buffer1
		buffer1[strlen(buffer1) - 1] = '\0';
		//to check if string stored in buffer1 and q are equal. If equal , exit the loop.
		if (strcmp(buffer1, "q") != 0) {
			//if condition = true then display the statement within " " and a new line.
			printf("Type the character position within the string: \n");
			// store the input in numInput
			fgets(numInput, NUM_INPUT_SIZE, stdin);
			numInput[strlen(numInput) - 1] = '\0';
			//convert string numInput and store it in the variable named as position.
			position = atoi(numInput);
			//check if position is greater than or equal to the length of string buffer1.
			if (position >= strlen(buffer1))
			{//if condition = true then display an error message writtin within " ".
				position = strlen(buffer1) - 1;
				printf("Too big... Position reduced to max. availbale\n");
			}
			//display the character found at the given position.
			printf("The character found at %d position is '%c\'\n", (int)position, buffer1[position]);
		}
	} while (strcmp(buffer1, "q") != 0);//iteration will happen until user inputs "q" to quit.

	printf("*** End of Indexing Strings Demo ***\n\n");//end of demo.
}