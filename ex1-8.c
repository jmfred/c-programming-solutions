#include <stdio.h>

/* write a program to count blanks, tabs, and newlines */

int main()
{
    int c, nl, tab, blank;

    nl = 0;
    tab = 0;
    blank = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
        if (c == '\t')
            ++tab;
        if (c == ' ')
            ++blank;
    }
    printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", blank, tab, nl);
}
