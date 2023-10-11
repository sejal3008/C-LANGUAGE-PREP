//print fibonacci series 0 1 1 2 3 5 8........
#include<stdio.h>
int main()
{
    int n;
     int t1=0,t2=1,next_value=0;
    printf("Enter nth term ");
    scanf("%d", &n);
    for(int i=0;i<=n;i++){ 
        printf("%d\n",next_value);
        t1=t2;
        t2=next_value; 
        next_value=t1+t2;  //sum of privious terms is next value     
}
    
}