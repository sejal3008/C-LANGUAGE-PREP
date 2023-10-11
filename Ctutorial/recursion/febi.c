#include <stdio.h>
int febi(int n);
int main() {
    int n;
    printf("Enter number:");
    scanf("%d", &n);
  
   printf("fibonacci of %d term is %d\n",n,febi(n));
    
}

int febi(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    int febiNm1=febi(n-1);
    int febiNm2=febi(n-2);
    int febiN=febiNm1+febiNm2;
    return febiN;
    
}