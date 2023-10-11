//passing string in function using pointers
char show(char *ptr);//function defination
#include<stdio.h>
int main(){
    char s[100];
    gets(s);
    show(s);//function call

}
char show(char *ptr)//function prototype
{
    while (*ptr !='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    
}