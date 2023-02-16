// C example by Darren Rainey http://github.com/DarrenRainey
#define A_MACRO 1
#ifdef A_MACRO
#define B_MACRO 2
#endif
#include <stdio.h> // Include standard input and output header file

int main() // Start main function
{
  char store[1024]; // Create a char with a size of 1024
  printf("Say Something :) : "); // Ask for input
  fgets(store, sizeof(store),stdin); // store input into store char with a sizeof 1024 and get the user input from stdin
  puts(store); // Print input
  return 0; // Exit with no error code
}
