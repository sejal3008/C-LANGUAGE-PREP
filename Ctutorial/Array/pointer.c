#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int *ptr=a;//a=&a[5]
    for(int i;i<5;i++)
    {
        printf(" %d\n",*ptr);
        ptr++;
    }

}