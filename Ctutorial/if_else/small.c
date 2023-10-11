#include<stdio.h>
int main()
{  //to print smallest number
    int number1,number2; 
    printf("Enter number1 and number2 ");
    scanf("%d%d",&number1,&number2);
    if(number1>number2)
    {
        printf("%d is small",number2);
        printf("%d is greater",number1);
    }
    else {
        printf("%d is small",number1);
        printf("%d is greater",number2);
    } 

    //biggest in 3
    int num1,num2,num3;
    printf("Enter 3 numbers");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2&&num1>num3)
        printf("%d is biggest",num1);
    else if(num2>num1&&num2>num3)
        printf("%d is biggesst ",num2);
    else 
        printf("%d is biggest",num3);


    //tocheck positive or negative numbers
    int number;
    printf("Enter number");
    scanf("%d",&number);
    if(number>0)        //nested if else
        printf("%d is positive",number);
    else if(number==0) //nested if else)
        printf(" zero");
    else
        printf("%d is negative",number);
}