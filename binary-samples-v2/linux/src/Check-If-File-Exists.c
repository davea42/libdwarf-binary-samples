// C Example By DarrenRainey https://github.com/DarrenRainey
#define A_MACRO 1
#ifdef A_MACRO
#define B_MACRO 2
#endif
#include <stdio.h> // Include Standard C Header Libary
#include <unistd.h> // Standard Unix Header Libary For Various Function Such As "access" Function
#include <sys/stat.h>

// Start Main Function
int main()
{
// Define Char Called fname With The Name Of The File To Check
char * fname = "/etc/hostname"; // Set Char To /etc/hostname Filename

// Check If File Exists Statement
if( access( fname, F_OK ) != -1 ) {
        // IF File Exists
        printf("File Exists\n");
        }
        // If File Doesn't Exist
        else
        {
        // If File Doesn't Exist
        printf("File Doesn't Exist\n");
}
        // Exit Without Errors
        return 0;
}
