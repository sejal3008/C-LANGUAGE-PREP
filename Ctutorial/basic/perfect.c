#include<stdio.h>
#include<math.h>
int main()
{   //check no is perfect square or not
    int number,squre_root;
    printf("Enter number");
    scanf("%d",&number);
    squre_root=sqrt(number);
    if(squre_root*squre_root==number) printf("Number is perfect square!\n");
    else printf("Number is not perfect square!\n");

}