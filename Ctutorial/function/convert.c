#include <stdio.h>

void convert_temprature(float celsius){
    float fahrenheit=((celsius)*9/5)+32;
    printf("fahrenheit=%f\n",fahrenheit);
}
int main(){
    float celsius;
    printf("Enter temperature in celsius");
    scanf("%f",&celsius);
    convert_temprature(celsius);
}
//you can define funtion before or after main function
//if you define before main function no need of function prototype