#include <stdio.h>
int main()
{
    //print 1 to 10 number 
    //using for loop
    //note- output will be same just understand the syntax

    printf("Using for loop\n");
    for(int i=1;i<=10;i++)
    {
        printf("%d\n",i);
    }

    printf("Using while loop\n");
    int i=1;
    while(i<=10)
    {
        printf("%d\n",i);
        i++;
    }

    printf("Using do-while loop\n");
    int j=1;
    do{
        printf("%d\n",j);
        j++;
    }while (j<=10);
    
    


}