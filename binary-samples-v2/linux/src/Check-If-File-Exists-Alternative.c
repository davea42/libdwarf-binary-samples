#define A_MACRO 1
#ifdef A_MACRO
#define B_MACRO 2
#endif
#include <stdio.h> // Include Standard C header file

int main() // Start main function
{
	FILE *file = fopen("Test.txt", "r"); // Define file handler and open Test.txt as read only
	if(file == NULL) // Check if it opened
	{
	printf("ERROR : File Does Not Exist\n"); // If it didn't print an error message and
	return -1; // exit with error code
	}
	else
	{
	printf("File Exists\n"); // If it does it exist say it exists
	}

	return 0; // Exit with no error code
}
