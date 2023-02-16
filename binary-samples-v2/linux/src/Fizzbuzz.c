// Created By Darren Rainey https://github.com/DarrenRainey

#define A_MACRO 1
#ifdef A_MACRO
#define B_MACRO 2
#endif
#include <stdio.h>  // Include Standard C Header File

int main() // Start Main Function
{
    int i; // Create variable called i
    for(i=1; i<=100; ++i) // Start For loop
    {
        if (i % 3 == 0) // If i is dividable by 3
            printf("Fizz"); // Print Fizz
        if (i % 5 == 0) // If i is diviabled by 5 
            printf("Buzz");  // printf Buzz
        if ((i % 3 != 0) && (i % 5 != 0)) // If i is not divisable by 3 or 5
            printf("number=%d", i); // Print Number
        printf("\n"); // Print New line
    }

    return 0; // Exit if no errors
}
