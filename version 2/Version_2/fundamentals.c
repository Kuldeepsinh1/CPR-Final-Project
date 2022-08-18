// FUNDAMENTALS MODULE SOURCE
#define CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE    300//defining the size of buffer size to 80
#define NUM_INPUT_SIZE 10 //defining the size of num_input_size to 10
#include "fundamentals.h"//including the header file or preprocessor 


void fundamentals(void)
{
	// V2
	printf("*** Start of Measuring Strings Demo ***\n");
	char buffer2 [BUFFER_SIZE];
	do {printf("Type a string (q to quit): \n");
	fgets (buffer2, BUFFER_SIZE, stdin);
	buffer2[strlen(buffer2) - 1] = '\0';
		if (strcmp (buffer2, "q") != 0)
			printf("The length of \'%s\' is %d characters\n",buffer2, (int) strlen (buffer2));
		} while (strcmp (buffer2, "q") != 0);
		printf("*** End of Mesauring Strings Demo ***");
}