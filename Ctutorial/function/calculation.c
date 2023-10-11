#include<stdio.h>
void calculate(float x, float y); //function prototype
int main(){
    float x,y; 
    printf("Enter 2 numbers to calculate sum,sub,div,mul,modulus of both numbers :");
    scanf("%f%f",&x,&y);
    calculate(x,y);//function call

}
void calculate(float x, float y)//function definition //x and y are parameters in function calculate 
{
    float sum ,sub,div,mul;
     printf("sum = %f,sub=%f, div = %f, mul = %f",x+y,x-y,x/y,x*y);
} 