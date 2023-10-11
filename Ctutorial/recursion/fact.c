#include <stdio.h>
int fact(int number);
int main(){
    int number;
    printf("Enter number:");
    scanf("%d",&number);
    printf("factorial=%d\n",fact(number));
}
int fact(int number)
{
    if(number==1)
    {
        return 1;
    }
    int factNM1= fact(number-1);
    int factN=factNM1*number;
}