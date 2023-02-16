#define A_MACRO 1
#ifdef A_MACRO
#define B_MACRO 2
#endif
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
        char str[] = "abcdefg";

        int i = 0;
        while(str[i])
        {
        putchar (toupper(str[i]));
        i++;
        }
        printf("\n");
        return 0;
}
