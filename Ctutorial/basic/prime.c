#include<stdio.h>
int main()
{
    int number,f;
    printf(" Enter Number");
    scanf("%d", &number);
    for(f=2;f<=(number-1);f++){
        if(number%f ==0){
            printf("Not prime");
        break;
        }
    }
    if(number ==f)
        printf(" prime");

}