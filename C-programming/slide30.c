#include <stdio.h>

int main()
{
    char astring[10];
    int i = 0;
    
    scanf( "%s", astring ); // No &-character since astring is a string
    for ( i = 0; i < 10; ++i )
    {
        printf("char %d is %c\n", i, astring[i]);
        if ( astring[i] == 'a' )
        {
            printf( "You entered an a!\n" );
        }
    }
    getchar();
}
