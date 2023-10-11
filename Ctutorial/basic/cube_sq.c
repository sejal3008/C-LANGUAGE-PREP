#include<stdio.h>
int main(){

    int number;
    printf("Enter a number");
    scanf("%d",&number);
    printf("square = %d\n", number*number); // square
    printf("cube = %d\n",number*number*number); // cube 

    //avarage of 3 numbers
    int number1,number2 ,number3,avarage;
    printf("Enter 3 numbers");
    scanf("%d%d%d",&number1,&number2,&number3);
    avarage=number1+number2+ number3/3;
    printf(" %d\n",avarage  ); 

    //digit or not 
    int num ;
    printf("Enter number ");
    scanf("%d",&num);
    printf("%d\n",num>0 && num<9);

    //smallest number with ternary operator
    int num1,num2 ;
    printf("Enter 2 numbers");
    scanf("%d%d",&num1,&num2);
    num1>num2?printf("%d\n",num2):printf("%d\n",num1);


}