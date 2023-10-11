#include<stdio.h>
int main(){
    int number,digit,square=0,sum=0,t;
    printf("Enter Number ");
    scanf("%d",&number);
    square=number*number;
    //t=number;
    while (square!=0)
    {
        
        digit=square%10;
        sum=sum+digit;
        square=square/10;
    }
    printf("%d\n",sum);
    if(number==sum) printf("neon number\n");
    else printf("Not Neon number\n");
}