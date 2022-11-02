#include<stdio.h>
 
enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};
 
int main()
{
    enum week day;
    day = Wed;
    day = day + 1;
    printf("%d\n",day);
    return 0;
}