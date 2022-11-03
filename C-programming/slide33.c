#include <stdio.h>

int main()
{
    for ( int x = 0; x < 128; x++ )
    {
        printf( "%d = \"%c\"\n", x, (char) x );
    }

    getchar();
}