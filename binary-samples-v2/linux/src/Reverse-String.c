// Code by Darren Rainey https://github.com/DarrenRainey &&  https://darrenraineys.co.uk
// Prints a string in reverse

#define A_MACRO 1
#ifdef A_MACRO
#define B_MACRO 2
#endif
#include <stdio.h> // Include standard C header file
#include <string.h> // Include string header file

int main() // Start main function
{
        char str[] = "hello"; // Create a char and store hello in it
        for(int i = strlen(str) + 1;i > -1; i--) // For loop to get the current length of the str char and do -1 each loop
        {
        printf("%c",str[i]); // Print letter by letter based upon loop postion
        }
        printf("\n"); // Print newline at the end of the program to avoid terminal/shell issuses

        return 0; // Exit with no error code
}
