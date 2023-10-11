// sum of two no
#include <stdio.h>
int main(){
    int i;//input
    int j;
    printf("Enter value for i and j: ");
    scanf("%d",&i);//data
    scanf("%d",&j);
    printf("sum: %d\n",i+j);//process//addition
     printf("sum: %d\n",i-j);//substruction
    printf("sum: %d\n",i*j);//multiplication
    printf("sum: %d\n",i/j);//division
    printf("sum: %d\n",i%j);//print result//modulas 

    //sum of digits
    int number,digit1,digit2,digit3,sum;
    printf("Enter 3 digit number");
    scanf("%d",&number);
    digit1 = number%10;number = number/10;
    digit2 = number%10;number = number/10;
    digit3 = number%10;number = number/10;
    sum=digit1+digit2+digit3;
    printf("sum of digits = %d",sum);
    
}