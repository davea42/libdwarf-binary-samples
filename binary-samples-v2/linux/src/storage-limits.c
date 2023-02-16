//  C example by Darren Rainey  http://github.com/DarrenRainey
#define A_MACRO 1
#ifdef A_MACRO
#define B_MACRO 2
#endif
#include <stdio.h>  // Include Standard Header File
#include <limits.h> // Include Limits Header File

int main()
{
  // Print the sizeof each variable type using the sizeof function at the end of the printf statment
	printf("Total Storage Size Of INT In Bytes %d\n", sizeof(int));
	printf("Total Storage Size Of CHAR In Bytes %d\n", sizeof(char));
	printf("Total Storage Size Of LONG In Bytes %d\n", sizeof(long));
	printf("Total Storage Size Of FLOAT In Bytes %d\n", sizeof(float));
	printf("Total Storage Size Of UNSIGNED INT In Bytes %d\n", sizeof(unsigned int));
	printf("Total Storage Size Of UNSIGNED CHAR In Bytes %d\n", sizeof(unsigned char));
	return 0; // Exit if no errors
}
