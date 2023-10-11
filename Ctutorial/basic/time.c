#include<stdio.h>
int main(){ //to convert seconds to hours and minutes
    int sec,min,hour;
    printf("Enter time in seconds");
    scanf("%d",&sec);
    hour = sec/3600;sec = sec % 3600;
    min =sec / 60;sec = sec % 60;
    printf("Total time is : %d hours , %d minutes , %d seconds ", hour, min, sec);
}