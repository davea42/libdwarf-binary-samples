// C example by Darren Rainey http://github.com/DarrenRainey

#define A_MACRO 1
#ifdef A_MACRO
#define B_MACRO 2
#endif
#include <stdio.h> // Include standard header files

int main() // Start main function  
{
  int numbers[10]; // start numbers array
  numbers[1] = 1; // set numbers to 1
  numbers[3] = 3; // set numbers to 3

  int total;
  total = numbers[1] - numbers[3]; // Add Numbers

  printf("Total %d\n",total); // Print Total

  return 0; // Exit if no errors
}
