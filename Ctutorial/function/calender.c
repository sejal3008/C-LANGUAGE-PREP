#include <stdio.h>
#include<math.h>
int calender(int day);
int main(){
    int days;
    printf("Enter days:");
    scanf("%d",&days);
    calender(days);

}
int calender(int day){
    int year ,month,week;
    year = day/365;day=day%365;
    month = day/30;day=day%30;
    week = day/7;day=day%7;
    printf("year = %d , month = %d , week = %d,days = %d",year,month,week,day);
    
}