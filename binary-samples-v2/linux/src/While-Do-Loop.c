// C examples by Darren Rainey 2018 https://github.com/DarrenRainey/C-Examples
#define A_MACRO 1
#ifdef A_MACRO
#define B_MACRO 2
#endif
#include <stdio.h> // Include standard C header file

int main() // Start main function
{
	int i = 0; // Create a integar called i and set it to 0
	do // Until while condition below is completed do this
	{
	printf("%d Is Less Than 5\n",i); // print the contents of i integar is less than 5
	i++; // add one to the i integer
	}
	while(i < 5); // While contents of i integer is less than 5 run the above do loop

	printf("We have exited to loop\n"); // this message is printed after the while condition is fufiled and the while loop has completed
}
