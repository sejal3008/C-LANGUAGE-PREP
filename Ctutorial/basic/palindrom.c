#include<stdio.h>
int main(){
    //to print number is palindrome or not
    int number,reverse=0,t,digit;
    printf("Enter number to check palindrome or not");
    scanf("%d",&number);
    t=number;
    while(number!=0){
        digit=number%10;
        reverse=reverse*10+digit; //reverse
        number=number/10;
    }
    printf("reverse=%d\n",reverse);
    if(t==reverse)
        printf("Number is palindrome\n");
    else
        printf("Number is not palindrome\n");
}