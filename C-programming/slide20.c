#include <stdio.h>

int main()
{
    int x;
    /* The loop goes while x < 10, and x increases by one every loop*/
    for ( x = 0; x < 10; x++ ) {
        /* Keep in mind that the loop condition checks
           the conditional statement before it loops again.
           consequently, when x equals 10 the loop breaks.
           x is updated before the condition is checked. */
        printf( "x: %d\n", x );
    }
    getchar();

    int y = 0;  /* Don't forget to declare variables */

    while ( y < 10 ) { /* While y is less than 10 */
        printf( "y: %d\n", y );
        y++;             /* Update y so the condition can be met eventually */
    }
    getchar();

}
