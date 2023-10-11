//print sum of n natural numbers
#include <stdio.h>
int sum(int n);
int main() {
    int n,s;
    printf("Enter natural number to calculate sum:");
    scanf("%d", &n);
    s= sum(n);
    printf("sum of %d natural numbers: %d\n",n,s);
}

int sum(int n)
{
    if(n==1)//base case
    {
        return 1;
    }
    int sumNm1=sum(n-1);//sum of 1 to n//recursion
    int sumN=sumNm1+n;
}