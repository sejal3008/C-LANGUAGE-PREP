#include<stdio.h>
int main(){ //to convert day to month and year
    int day,month,year,week;
    printf("enter no of days:");
    scanf("%d",&day);
    year = day/365;day=day%365;
    month = day/30;day=day%30;
    week = day/7;day=day%7;
    printf("year = %d , month = %d , week = %d,days = %d",year,month,week,day);
}