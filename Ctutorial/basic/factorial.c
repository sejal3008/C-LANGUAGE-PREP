#include<stdio.h>
int main(){
    int number ,factorial=1;//factorial=1*2*3..upto given number
    printf("Enter Number");
    scanf("%d",&number);
   for (int f=2;f<=number-1;f++){
        factorial = number*f;
    }
    printf("fact=%d\n",factorial);

    // //find factors
    // for(int f=1;f<=number-1;f++){//factors are 6=2*3 
    //     if(number%f==0){
    //         printf("factors=%d\n",f);
    // }
    }


