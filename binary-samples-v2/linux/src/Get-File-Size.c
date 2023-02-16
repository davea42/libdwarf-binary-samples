// C-example by Darren Rainey 2018 https://github.com/DarrenRainey/C-Examples
#define A_MACRO 1
#ifdef A_MACRO
#define B_MACRO 2
#endif
#include <stdio.h>  // Include Standard C libary

int main(int argc, char *argv[]) // Start main function
{
	if(argc != 2)                           // Check if there are two arguments
	{
		printf("usage %s file.txt\n",argv[0]);  // If there are not 2 arguments
		return -1;                              // Return -1 and exit
	}

	FILE * file = fopen(argv[1], "r");        // Open the file passed as argument 1 (argv[1])

	if(file == NULL)                          // If we can't open the file
	{
		printf("[ERROR] Unable to open %s\n",argv[1]); // Print error message
		return -1;                              // Return -1 and exit
	}

	fseek(file, 0, SEEK_END);                 // Go to end of the file
	printf("%s is %d bytes long\n",argv[1],ftell(file)); // Print the file name and total size in bytes

	return 0; // Return 0 and exit
}
