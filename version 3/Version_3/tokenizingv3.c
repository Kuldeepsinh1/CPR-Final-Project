/*
*****************************************************************************
                          CPR 101 Project (Tokenizing)
Full Name  : Jordan Tyler Castillo
Student ID#: 110121225
Email      : jcastillo30@myseneca.ca
Section    : NGG
*****************************************************************************
*/

// TOKENIZING MODULE SOURCE

#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
// Macro BUFFER_SIZE is being set to 300    

#include "tokenizing.h" 

//including the use of header file tokenizing.h

// V3

void tokenizing(void) //Calling the function tokenizing that returns no value and no input is needed
{
    printf("*** Start of Tokenizing Words Demo ***\n"); //printing the words inside the " "

    char sentences[BUFFER_SIZE]; // declaring a character array the size of BUFFER_SIZE
    char* nextSentence = NULL; // declaring a pointer named nextSentence equating to NULL
    int sentencesCounter; // declaring an integer named sentencesCounter

    do  // using a type of loop where the code loops until the conditions in the while() are not true
        // in this case it would be 
    {
        printf("Type a few words separated by dot(q - to quit):\n");
        //printing instructions for the user in the loop and how to exit

        fgets(sentences, BUFFER_SIZE, stdin);
        // using the fgets to read the line below, where it stores it into the string sentences, reads a maximum amount of characters of BUFFER_SIZE which is
        // set to 300 and stdin is a pointer to a file

        sentences[strlen(sentences) - 1] = '\0';

        // this assigns the last character of the string sentences to a null character
        // uses the string function strcmp to see if the words matches q
        // if they match it will return a 0 meaning it does not equal to 0 and will not go into the if statement
        // if they do not match it will return a -1 meaning it will go into the if statement
        if (strcmp(sentences, "q") != 0)
        {
            nextSentence = strtok(sentences, ".");
            // uses the strtok function to break the string sentences into smaller strings also known as tokens
            // the "." represents a delimiter letting the program know the beginning and end of a sequence
             // the string sentences is being returned by strtok and is stored in nextSentence

            sentencesCounter = 1;

            // the number of time the loop iterates is equating to 1 is stored in the variable sentecesCounter

            while (nextSentence)
                // a while loop is being used for the string nextSentence to display the number
                // of words and what words are being entered

            {
                printf("Senetence #%d is \'%s\'\n", sentencesCounter++, nextSentence);

                //prints out the pointer nextSentence and displays what words the user enters and which number the word is in the sequence
                //will keep iterating and stored in the integer sentencesCounter until all the words are read or the maximum 
                // number of characters are met
                nextSentence = strtok(NULL, ".");
                // passes NULL as an argument and uses the delimeter "." again to let the program know the beginning and
                // end of the sequence
                // the value is returned by strtok and stored in the string nextSentence
            }
        }

    } while (strcmp(sentences, "q") != 0);
    // calls the strcmp function and compares the string sentences and "q"
    // if it returns a number other than 1 it matches and will exit the loop

    printf("*** End of Tokenizing Words Demo ***\n\n");
    // lets the user know it is the end of the Tokenizing Words Demo, and prints the statement
}