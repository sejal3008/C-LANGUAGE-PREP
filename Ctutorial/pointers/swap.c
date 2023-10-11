#include<stdio.h>
void swap(int x, int y);
void _swap(int *x, int *y);
int main()
{
    int x,y;
    printf("Enter numbers to swap:");
    scanf("%d%d",&x,&y);
    swap(x,y);
     printf("x= %d  y=%d\n",x,y);//actual value does not change in call by value

    _swap(&x,&y);
    printf("x= %d  y=%d\n",x,y);//actual value change in call by reference
}
//call by value 
void swap(int x, int y){
    int temp = x;
    x=y;
    y=temp;
    printf("swapping x= %d  y=%d\n",x,y);
}

//call by reference

void _swap(int *x, int *y){
    int temp = *x;
    *x=*y;
    *y=temp;
    printf("swapping x= %d  y=%d\n",*x,*y);
}