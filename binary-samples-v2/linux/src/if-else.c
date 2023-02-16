// C example by Darren Rainey http://github.com/DarrenRainey
#define A_MACRO 1
#ifdef A_MACRO
#define B_MACRO 2
#endif
#include <stdio.h> // Include standard input and output header file

int main() // Start main function
{
  int age; // Create age integar
  printf("How old are you ?: "); // Ask for users age
  scanf("%d",&age); // Save the anwser to the age integar
  
  if(age > 18) // If age is greater than 18 do this
  {
  printf("You are older than 18\n");
  }
  else // if age is not greater than 18
  {
  printf("You are not 18\n");
  }

}
