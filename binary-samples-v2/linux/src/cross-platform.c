// C example by Darren Rainey http://github.com/DarrenRainey

#ifdef linux                //
#define A_MACRO 1
#ifdef A_MACRO
#define B_MACRO 2
#endif
#include <stdio.h>         // If linux use these headers
#endif                    //

#ifdef _WIN32            //
#include <stdio.h>      // If windows 32bit use these headers
#endif                 //

int main() // Start main function
{

  #ifdef linux                                        //
  printf("This is a linux based system");            // If linux run this code
  #endif                                            //
  
  #ifdef  _WIN32                       //
  printf("This is 32Bit Windows");    //  If windows run this code
  #endif                             //

  return 0; // Exit if successful
}
