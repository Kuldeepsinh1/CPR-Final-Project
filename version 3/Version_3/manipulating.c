/*
Author: Vinitkumar Kishorbhai Patel, vpatel279@myseneca.ca, 166164210,2022-08-02, CPR101, Project
[mani.c] : []
Purpose: [Displays the possition of the substring of the parent string]
*/


// MANIPULATING SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "manipulating.h"

void manipulating(void)
{

	printf("*** Start of Searching Strings Demo ***\n");
	//this sequence will print the line withing printf("") function

	char haystack[BUFFER_SIZE];
	//declare variable haystack with datatype char and buffer size which is predefined to 80

	char needle[BUFFER_SIZE];
	//declare variable needle with datatype char and buffer size which is predefined to 80

	char* occurrence = NULL;
	//a pointer occurrence is declared with null value

	do { 
		//do while loop initiated

		printf("Type the string (q to quit):\n");
		//this sequence will print the line withing printf("") function

		fgets(haystack, BUFFER_SIZE, stdin);
		// this function reads a line and stores it into the haystack and stdin is an input where data is sent and read by a program

		haystack[strlen(haystack) - 1] = '\0';
		//As we know the last byte of string must be null terminator i.e; '0' value & so we assigned '\0'

		if (strcmp(haystack, "q") != 0)
			//When the user inputs q the condition becomes false and the loop ends.It is compare with help of strcmp() function.
		{
			printf("Type the substring:\n");
			//will print this line with print() function used

			fgets(needle, BUFFER_SIZE, stdin);
			/*reads a line from the specified streamand stores it into the needleand BUFFER SIZE which is predefinedand
			with stdin is an input stream where data is sent to and read by a program*/

			needle[strlen(needle) - 1] = '\0';
			//As last part of string must be a null terminator, or '0,' we gave the value '0'.

			occurrence = strstr(haystack, needle);
			/*The strstr() method is used to locate the first instance of a substring within the next string, or the
			substring "needle" in the string "haystack." After that, the return value will be saved in occurrence.*/

			if (occurrence)
				//If the value of occurrence is not NULL, the if-condition loop's will be true.

				printf("\'%s\' found at %d position\n", needle, (int)(occurrence - haystack));
			//this sequence will print the line withing printf("") function

			else
				printf("Not found\n");
			//this sequence will print the line withing printf("") function
		}

	} while (strcmp(haystack, "q") != 0);
	//When the user inputs q the condition becomes false and the loop ends.It is compare with help of strcmp() function.

	printf("*** End of Searching Strings Demo ***\n\n");
	//this sequence will print the line withing printf("") function
}


