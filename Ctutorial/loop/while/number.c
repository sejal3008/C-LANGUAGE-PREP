#include<stdio.h>
int main()
 {   //print number froom 1 to 10
    printf("Number from 1 to 10\n");
     int i=1;
    while(i<=10)
    {
        printf("%d\n", i);
        i++;
        
    }

    //sum from 1 to n
    printf("Number sum from 1 to n\n");
    int n,sum=0,j;
    printf("Enter number");
    scanf("%d",&n);
    j=1;
    while(j<=n)
    {
        printf("%d\n", j);
        sum=sum+j; 
        j++;
    }
    printf("sum is = %d\n",sum);
    
    //table
   int k,table,number;
   printf("enter number to calculate table");
   scanf("%d",&number);
   k=1;
    while (k<=10)
    {
        table=number*k;
        printf("%d\n",table);
        k++;
    
    }
    
 }
    