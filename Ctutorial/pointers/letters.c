#include<stdio.h>
int main(){
    char i='a', j='z';
    char *x=&i, *y=&j;
    for(char i=*x; i<=*y; i++){
        printf("%c\n", i);
    }
}
