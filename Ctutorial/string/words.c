#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    int count = 0;
    printf("Enter any string ");
    fgets(string, 100, stdin);
    for(int i = 0; string[i]!='\0'; i++){
        if(string[i]==' ')
            count++;
    }
    printf("Number of words = %d",count);
}