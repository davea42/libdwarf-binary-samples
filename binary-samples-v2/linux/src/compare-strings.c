// C example by Darren Rainey http://github.com/DarrenRainey
#define A_MACRO 1
#ifdef A_MACRO
#define B_MACRO 2
#endif
#include <stdio.h> // Include standard c header file
#include <string.h> // Include string header file

int main() // Start main function
{
        char * one = "This is a test"; // First String To Compare
        char * two = "This is a test"; // Second String To Compare

        int compare;  // Create an intergar called compare
        compare = strcmp(one, two); // Set intergare to string compare command

        printf("Output = %d\n",compare); // Print the current number for string comparasion (not needed but useful to learn)
        
        if(compare < 0) // Check if the compare integar is less than 0
          {
          printf("one is less than two\n"); // Print output
          }
          else if(compare > 0) // Check if compare integar is greater than 0
          {
          printf("two is less than one\n"); // Print output
          }
          else // If it is not greater than or less that zero print message below
          {
          printf("The are both the same\n"); // print message
          }


        return 0; // Exit Function / kill program
}
