#include <stdio.h>
#include<math.h>
 void square_root(int n);
 int main(){
    int number;
    printf("Enter number to find the square root :");
    scanf("%d",&number);
    square_root(number);
    
 }
 void square_root(int n)
 {
    int s=sqrt(n);
    printf("%d\n",s);
    
 }