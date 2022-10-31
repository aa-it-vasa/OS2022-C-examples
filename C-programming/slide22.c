#include <stdio.h>

int mult ( int x, int y ); /* prototype */

int main()
{
  int x;
  int y;

  printf( "Please input two numbers to be multiplied: " );
  scanf( "%d %d", &x, &y );
//  scanf( "%d", &y );
  printf( "The product of your two numbers is %d\n", mult( x, y ) );
  getchar();
}

int mult (int x, int y) /* implementation */
{
  return x * y;
}
