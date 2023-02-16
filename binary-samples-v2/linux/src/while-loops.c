// C while loop example by Darren Rainey http://github.com/DarrenRainey

#define A_MACRO 1
#ifdef A_MACRO
#define B_MACRO 2
#endif
#include <stdio.h> // Include standard input and output header files

int main() // Start main function
{
  int i = 0; // Set i as a integer and set it to zero
  while(i < 10) // Run while i is less than 10
  { // Start of while function
  i++; // Add  1 to i
  printf("Looped %d Times\n",i); // Print current  number stored in i integer
  } // End of while function

  return 0; // Exit if successful
}
