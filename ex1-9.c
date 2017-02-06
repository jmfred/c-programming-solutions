#include <stdio.h>

/* write a program to copy its input to its output, replacing each string of one or more blanks
   by a single blank */

int main()
{
    /* creates c and lastc integers; lastc will check value of the last character in the 
       text string to see if it is a blank or not */
    int c, lastc;

    lastc = NONBLANK;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (lastc != ' ')
                putchar(c);
        }
        else
            putchar(c);
        
        lastc = c;
    }
return 0;
}
