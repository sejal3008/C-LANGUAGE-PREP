#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    printf("element at index 1 - ");
    printf("%d\n",arr[1]);// to print perticular element

    // print all elements 
    printf("Elements of array\n");
    for (int i=0; i<10; i++){
        printf("%d\n",arr[i]);
    }
}