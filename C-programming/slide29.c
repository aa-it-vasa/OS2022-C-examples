#include <stdio.h>

struct xampl {
  int x;
};

int main()
{
    struct xampl structure;
    struct xampl *ptr;

    structure.x = 12;
    ptr = &structure; 		/* Yes, you need the & when dealing with
                           	   structures and using pointers to them*/

    printf("Address of structure: %p\n", &structure);
    printf("Address of structure: %p\n", ptr);

    printf( "%d\n", ptr->x );  	/* The -> acts somewhat like the * when
                                   does when it is used with pointers
                                   It says, get whatever is at that memory
                                   address Not "get what that memory address
                                   is"*/

    printf( "%d\n", (*ptr).x ); /*  -> is the same as (*ptr). */

    getchar();
}