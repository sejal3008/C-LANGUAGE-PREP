#include <stdio.h>
void task(int a,int b,int *sum,int *avg);//* use to pass value of variables
int main()
{
    int a,b,sum,avg;
    printf("Enter numbers to calculate sum and average");
    scanf("%d%d",&a,&b);
    task(a,b,&sum,&avg);//& to pass address of variables
    printf("sum = %d avg=%d\n",sum,avg);

}
void task(int a,int b,int *sum,int *avg)
{
    *sum=a+b;
    *avg=(a+b)/2;
}