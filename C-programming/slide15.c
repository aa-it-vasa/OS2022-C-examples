#include <stdio.h>

int main()
{
    int this_is_a_number;

    printf( "Please enter a number: " );
    scanf( "%d", &this_is_a_number );

    printf( "You entered %d\n", this_is_a_number );
    printf( "Is the number smaller than one? %d\n", this_is_a_number < 1);
    printf( "Is the number equal to one? %d\n", this_is_a_number == 1);
    printf( "Is the number larger than one? %d\n", this_is_a_number > 1);
    getchar();
    return 0;
}