#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "manipulating.h"



void manipulating(void) { //function manipulating with return type void

	printf("* Start of Concatenating Strings Demo *\n");
	//this sequence will print the line withing printf("") function.

	char string1[BUFFER_SIZE];
	//The variable string1 is declared with size 80 and datatype char.

	char string2[BUFFER_SIZE];
	//The variable string2 is declared with size 80 and datatype char.

	do { //here a do while loop is used to repeat the process until the desired output is obtained.

		printf("Type the 1st string (q-to quit):\n");
		//This sequence will print the line within printf("") function.

		fgets(string1, BUFFER_SIZE, stdin);
		/*reads the line from a certain streamand stores it in string1,
		with stdin is an input stream where data is sent and read by a program*/

		string1[strlen(string1) - 1] = '\0';
		//The last byte of string must be null terminator i.e; '0' value.

		if ((strcmp(string1, "q") != 0))  //this if loop is used to end the function.

			/* Here in 'if loop' if the value of string1 is equal to character "q" then condition will become false
			and as a result the while loop will end.We can compare with help of strcmp() function. */
		{
			printf("Type the 2nd string:\n"); //This sequence will print the line within printf("") function.

			fgets(string2, BUFFER_SIZE, stdin);
			/*reads the line and stores it in string2,
			 with stdin is an input stream where data is sent  and read by a program*/

			string2[strlen(string2) - 1] = '\0';
			//As we know the last byte of string must be null terminator i.e; '0' value & so we assigned '/0'.

			strcat(string1, string2);
			//The strcat() function concatenates string2 to string1, so the final value will be stored in string1.

			printf("Concatenated string is \'%s\'\n", string1);
			//will print this line and value of string1 with print() function used
		}
	} while (strcmp(string1, "q") != 0);
	/*in while loop, if the value of string1 is equal to character "q" then condition will become false and result
	  the while loop will end .We can compare with help of strcmp() function.*/

	printf("* End of Concatenating Strings Demo *\n\n");
	//This sequence will print the line within printf("") function.
}