// C Example by Darren Rainey https://github.com/DarrenRainey/C-Examples
#define A_MACRO 1
#ifdef A_MACRO
#define B_MACRO 2
#endif
#include <stdio.h> // Include standard C header file.
#include <stdlib.h> // Include standard libary header file.

int main(int argc, char *argv[]) // Start main function.
{
        // Note getenv output/input should be considered insecure and dangerous as eviroment variables can be edited by the current user.
        char *user = getenv("USER"); // Create a char called user and set its output to getenv user.
        printf("%s",user); // Print user name.

        return 0; // Exit if no errors.
}
