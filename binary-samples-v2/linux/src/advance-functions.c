// C example by Darren Rainey http://github.com/DarrenRainey

#define A_MACRO 1
#ifdef A_MACRO
#define B_MACRO 2
#endif
#include <stdio.h> // Include standard header file

int main(int argc, char* argv[]) // Allow arguments to be passed into program
{
  printf("Filename is %s\n",argv[0]); // Print argument 0 / Filename
  printf("Argument 1 was %s\n",argv[1]); // Print the first command argument 
  return 0; // Exit if no errors
}
