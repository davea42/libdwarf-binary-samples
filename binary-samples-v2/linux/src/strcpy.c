//  C example by Darren Rainey http://github.com/DarrenRainey

#define A_MACRO 1
#ifdef A_MACRO
#define B_MACRO 2
#endif
#include <stdio.h> // Include  standard input and output header file
#include <string.h> // Include string libary header file

int main() // Start main function
{
	char str[40]; // create char called str with a  length of 40
  
	strcpy(str, "This string is copied"); //  Copy the text "This string is copied" to the str char
	printf("%s\n",str); // Print the information in the str char to a new line

	return 0; //  Exit if successful
}
