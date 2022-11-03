#include <stdio.h>

int main()
{
    /* A nice long string */
    char string[4];

    printf( "Please enter a long string: " );

    /* notice stdin being passed in */
    fgets ( string, 10, stdin );

    printf( "You entered a very long string, %s", string );

    getchar();
}