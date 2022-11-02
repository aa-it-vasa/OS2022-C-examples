#include <stdio.h>

int main()
{
    float this_is_a_number;

    printf("Please enter a number: ");
    scanf("%f", &this_is_a_number);
    printf("You entered %f\n", this_is_a_number);
    getchar();
    return 0;
}
