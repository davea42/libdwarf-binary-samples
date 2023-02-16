// C example by Darren Rainey http://github.com/DarrenRainey

#define A_MACRO 1
#ifdef A_MACRO
#define B_MACRO 2
#endif
#include <stdio.h> // Include standard header files

int main() // Start main function
{
        char buffer[20]; // Set a buffer char to temporay save data

        printf("What is your name ?:  "); // Print a message asking for your name
        scanf("%s",buffer); // Write the output of printf to the buffer char

        printf("Hello %s\n",buffer); // Print hello with data from the buffer char
        return 0; // exit if successful
}
