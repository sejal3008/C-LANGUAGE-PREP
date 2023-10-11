#include<stdio.h>
#include<math.h>
int main()
{ //armstrong 

    int number ,digit ,sum=0,t;
    printf("enter Number");
    scanf("%d",&number);
    t=number;//extra variable to store number value
    while (number!=0)
    {
        /* code */
        digit=number%10;
        sum=sum+digit*digit*digit;
        number=number/10;
    }
    if(t==sum)
    printf("armstrong\n");
    else
    printf("not armstrong");
    

}