#include <stdio.h>
int main()
{
    int i;
    i=1;
    //increment operator i++/++i
    printf("pre-increment\n");
    printf("%d\n", i++); //use , then increment
    printf("%d\n", i);

    
    int j = 1;
    printf("post-increment\n");
    printf("%d\n", ++j); // increment , then use
    printf("%d\n", j);

    //decrement operator i--/--i
     printf("pre-decrement\n");
    printf("%d\n", i--); //use , then decrement
    printf("%d\n", i);
    
    
   // int j = 1;
    printf("post-decrement\n");
    printf("%d\n", --j); // decrement , then use
    printf("%d\n", j);
}