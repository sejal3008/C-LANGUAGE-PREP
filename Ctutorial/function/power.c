#include<stdio.h>
#include<math.h>

int power(int n,int p);//returns int 
int main(){
    int n,p,pow;
    printf("Enter number and power");
    scanf("%d%d",&n,&p);
    pow= power(n,p);//actual parameters//arguments
    printf("%d to the power of %d is %d",n,p,pow);

}
int power(int n,int p) {//user defined function//formal parameters
    return pow(n,p); //inbuilt function
}
//function return only one value at a time