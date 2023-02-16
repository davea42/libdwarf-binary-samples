// C example by Darren Rainey http://github.com/DarrenRainey
#define A_MACRO 1
#ifdef A_MACRO
#define B_MACRO 2
#endif
#include <stdio.h>  //  Include Standard C Header File

void examplevoid(int arg) // Create a void called examplevoid and allow arguments to be passed to it
{
  printf("Argument From The Main Function Was %d\n",arg);
}

int main()  // Start main Function
{
  void(*pass)(int); // Create and intitalise pass variable
  pass = &examplevoid; // Set pass as reference to examplevoid
  (pass)(10); // Pass 10 to void as argument
  return 0;
}
