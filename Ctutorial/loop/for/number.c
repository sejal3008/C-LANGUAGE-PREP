#include<stdio.h>
int main()
{
    // //print number from 1 to 10
     for(int i = 1; i <=10;i++){
        printf("%d\n",i);
     }

    //print even and odd numbers from 1 to n
    int n;
    printf("Enter n value: ");//for even numbers
    scanf("%d",&n);
     printf("even numbers:");
    for (int i=1; i <= n; i++){
        if(i%2==0) {
            printf("%d\n",i);
        }
    }

     printf("odd numbers:"); //for odd numbers
    for(int j=1; j <= n; j++){
        if(j%2!=0) {
            printf("%d\n",j);
        }
    }
    
    //print a to z
    for(char c='a'; c<='z'; c++) {
        printf("%c\n",c);
    }

    // multiple of any number
    int number;
    printf("Enter a number to find multiple ");
    scanf("%d",&number);
    printf("multiple of %d\n",number);
    for(int i=1; i<=number; i++) {
        if(number%i == 0)
            printf("%d\n",i);

    }
    
}