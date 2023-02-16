// C counter example 1-1000 by Darren  Rainey http://github.com/DarrenRainey

#define A_MACRO 1
#ifdef A_MACRO
#define B_MACRO 2
#endif
#include <stdio.h>  // Include standard input and output headers

int main() // Start Main Function
{

  int i; // Set  i as integer
  for(i = 0;i < 1000; i++) // While i is less than 1000 but more than 0 add 1
  {
  printf("%d\n",i); // Print result of i
  }

  return 0; // Return 0 if successful
}
