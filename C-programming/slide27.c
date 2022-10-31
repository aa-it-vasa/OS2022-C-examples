#include <stdio.h>
#include <limits.h> // For CHAR_BIT
#include <stdlib.h> // For malloc() and free()

int main()
{
    printf("Bitar/character %d\n", CHAR_BIT);
    printf("sizeof(char): %ld\n", sizeof(char));
    printf("sizeof(int): %ld\n", sizeof(int));
    printf("sizeof(float): %ld\n", sizeof(float));
    printf("sizeof(double): %ld\n", sizeof(double));

    int *ptr = malloc(sizeof(*ptr));

    printf("sizeof(int): %ld\n", sizeof(*ptr));
    *ptr =0;

    printf("ptr a: %d\n", *ptr);
    *ptr =1;

    printf("ptr b: %d\n", *ptr);

    printf("Address in ptr: %p\n", &ptr);
    free(ptr);

    printf("Address in ptr: %p\n", &ptr);

    //ptr = NULL; // Varför??

    printf("ptr c: %d\n", *ptr);

    getchar();

    float *ptr2 = malloc(sizeof(*ptr2));
    *ptr2 = 1.0;
    printf("ptr d: %d\n", *ptr);
    printf("ptr2 %f\n", *ptr2);
    return 1;
}
