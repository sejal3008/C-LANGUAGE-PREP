#include <stdio.h>
#include <string.h>
int main(){
     //to print whole string use gets() or fgets()
    
    char str1[100];
    printf("Enter a string");
    gets(str1);//to input string
    printf("your string using gets");
    puts(str1);//to output string

    //you can not give any message in gets
}