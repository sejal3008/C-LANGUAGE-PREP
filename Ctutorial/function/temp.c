#include<stdio.h>
void  temprature(float celsius){
    if(celsius>=0&&celsius<25)
        printf("Temperature is very cold");
    else if(celsius>=25&&celsius<40)
    {
        printf("Temperature is warm");
    }
    else
        printf("temperature is hot");
}
int main(){
    float celsius;
    printf("Enter temperature in celsius");
    scanf("%f",&celsius);
    temprature(celsius);
}