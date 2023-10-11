#include <stdio.h>
int main()
{   //even no from 1 to 10
     int i;
    i=1;
    do{
        if(i%2==0)
        {
        printf("%d\n",i);//exeute at least one time then check condition
        }
        i++;
    }while (i<=10);
    
}