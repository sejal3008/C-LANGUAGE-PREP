#include<stdio.h>
#include<string.h>
int main()
{
    char string1[100],string2[100];
    printf("Enter string");
    gets(string1);
    strcpy(string2, string1);
   strrev(string2);
   int r= strcmp(string1, string2);
   
    if(r==0)
        printf("palindrome");

    else
        printf("Not palindrome");
}