#define A_MACRO 1
#ifdef A_MACRO
#define B_MACRO 2
#endif
#include <stdio.h> // Include standard input and output header files

int main() // Start Main Function
{
  printf("This will cause a audio beep\n\a"); // Print this message and cause a system beep

  return 0; // Exit if successful
}
