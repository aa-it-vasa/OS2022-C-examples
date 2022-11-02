#include <stdio.h>

int main()
{
    printf("Storleken på en char:   %lu byte\n", sizeof(char));
    printf("Storleken på en int:    %lu byte\n", sizeof(int));
    printf("Storleken på en float:  %lu byte\n", sizeof(float));
    printf("Storleken på en double: %lu byte\n", sizeof(double));

    getchar();
    
    int a = 0;
    float d = 10.21;
    printf("Storleken på a + d:     %lu byte\n", sizeof(a + d));
    return 0;
}