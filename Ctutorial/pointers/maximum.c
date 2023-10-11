#include <stdio.h>
void max(int *x, int *y);
int main()
{
    int x,y;
    printf("Enter numbers to find the maximum");
    scanf("%d%d",&x,&y);
    max(&x,&y);

}
void max(int *x, int *y){

        if (*x == *y||*x==0&&*y==0)
            printf("invalid numbers reenter");
        else if(*x>*y)
            printf(" %d is maximum",*x);
        else 
            printf(" %d is maximum",*y);
    
    
}