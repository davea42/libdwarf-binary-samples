// C example code by darren rainey
#define A_MACRO 1
#ifdef A_MACRO
#define B_MACRO 2
#endif
#include <stdio.h> // Include standard header file

int main() // Start main function
{
        printf("\e[1;1H\e[2J"); // print special control character to reset/clear terminal
}
