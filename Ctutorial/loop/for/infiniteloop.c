#include <stdio.h>
int main()
{   
    for(int i = 0; ; i++)//infinite loop
    {
         int n;
        printf("enter number");
        scanf("%d", &n);
        printf("%d", n);
        if(n%2!=0)
        {
            break;//exit loop
        }
    }
    
}