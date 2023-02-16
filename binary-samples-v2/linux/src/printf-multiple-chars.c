// C example by DarrenRainey http://github.com/DarrenRainey

#define A_MACRO 1
#ifdef A_MACRO
#define B_MACRO 2
#endif
#include <stdio.h> // Include standard input and output header  file

int main()
{
  char one[] =  "This Is the First Char"; // Set Char One
  char two[] =  "And This  Is The Second  Char"; // Set Char Two

  printf("%s %s\n",one,two);  //  Print  the information stored in the two char's

  return 0; // Exit if successful
}
