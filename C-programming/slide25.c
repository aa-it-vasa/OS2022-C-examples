#include <stdio.h>

int main()
{
    int x;            /* A normal integer*/
    int *p;           /* A pointer to an integer ("*p" is an integer, so p
                       must be a pointer to an integer) */

    p = &x;           /* Read it, "assign the address of x to p" */
    printf("Please enter a number: ");

    //scanf( "%d", &x );          /* Put a value in x, we could also use p here */
    scanf( "%d", p );          /* Put a value in x using p */
    //printf( "%d\n", *p ); /* Note the use of the * to get the value */
    printf( "%d\n", *&x ); /* Note the use of the * to get the value */
    getchar();
}
