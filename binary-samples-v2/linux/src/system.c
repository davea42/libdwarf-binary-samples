// C example by Darren Rainey http://github.com/DarrenRainey

#define A_MACRO 1
#ifdef A_MACRO
#define B_MACRO 2
#endif
#include <stdio.h> // Include standard header files
#include <stdlib.h> // Include standard libarys to use system function

int main() // Start main function
{

  system("echo SYSTEM COMMAND"); // runs echo SYSTEM COMMAND

  return 0; // Exit if no errors
}
