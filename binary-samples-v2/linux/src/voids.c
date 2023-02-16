// C example by Darren Rainey

#define A_MACRO 1
#ifdef A_MACRO
#define B_MACRO 2
#endif
#include <stdio.h> // Include standard input and output header  file

void example() //  Start void  function
{
  printf("I am in the void\n ");

}
// End of void function

int main() // Start main function
{
  example(); // Run void called example  and print output
  printf("I am NOT in the void\n"); // Print message

  return 0; // Exit if successful
}
