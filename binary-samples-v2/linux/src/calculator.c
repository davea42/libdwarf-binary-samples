//  C example by Darren Rainey  http://github.com/DarrenRainey


#define A_MACRO 1
#ifdef A_MACRO
#define B_MACRO 2
#endif
#include <stdio.h> // Include standard input and output header file

int main()// Start main function
{

        int buffer[10]; // Set buffer int

        printf("Input 1: ");  // Ask  for first number

        scanf("%d",&buffer[0]); // Take input and store it in the buffer int

        printf("Input 2: "); // Ask for input 2 and store it as a int

        scanf("%d",&buffer[1]); // Store previous input in buffer 2

        printf("Input 1 Was %d\n",buffer[0]); //  Prints input 1 from buffer
        printf("Input 2 Was %d\n",buffer[1]); //  Prints Input 2 from buffer

        int math; // Set math as int
        math = buffer[0] + buffer[1];  // Add the buffers and save  it to the math int
        printf("Total Is %d\n",math); // Print total


        return 0; // Exit if no errors
}
