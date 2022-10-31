#include <stdio.h>
#include "mult.h"

int main()
{
  int x;
  int y;

  printf( "Please input two numbers to be multiplied: " );
  scanf( "%d", &x );
  scanf( "%d", &y );
  printf( "The product of your two numbers is %d\n", mult( x, y ) );
  getchar();
}
