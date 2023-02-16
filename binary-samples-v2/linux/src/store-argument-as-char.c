// C example by Darren Rainey https://github.com/DarrenRainey

#define A_MACRO 1
#ifdef A_MACRO
#define B_MACRO 2
#endif
#include <stdio.h> // Include standard C header libary file
#include <string.h> // Include C string header file

int main(int argc, char *argv[])
{
	char buffer[1024]; // Create a char called buffer with a size of 1024
	if(argc > 1) // Check if there are any command arguments other than the program name
	{
		// Check for input argument
		if(strcmp(argv[1], "--input") == 0) // Check if a command argument is a string called "--input"
		{
		// Store second argument in buffer
		strcpy(buffer, argv[2]); // Copy string into buffer
		// Print Buffer
		printf("Buffer Contains String : %s\n",buffer);
		}
		else // If argument does not contain "--input"
		{
		printf("%s --input \"hello world\"\n",argv[0]); // Print program name and help information
		}
	}
	else // If no arguments supplied
	{
	printf("%s --input \"hello world\"\n",argv[0]); // Print program name and help information	
	}
	return 0; // Exit if no errors
}
