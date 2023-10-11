#include<stdio.h>
#include<string.h>
int main()
{
    //library functions of string
    char string1[100]="Hello world";
    char string2[]="Hello India";

    printf("Your String1 is: %s\n", string1);
    printf("Your String2 is: %s\n", string2);

    
    int length=strlen(string1);//give length of string
    printf("Lenth of string =%d\n",length);

    strcpy(string1,string2);//copy string2 in string1
    printf("copy of string2 in string1 =%s\n",string1);

    
    char string[]="Hello learners";
    printf("your 3 string is %s\n",string);
    strcat(string1,string);//concatenate string in string1
    printf("concatenate string2 in string1 =%s\n",string1);

   
    //compare string
     printf("compare string1,string= %d\n",strcmp(string1,string1));
     //if output positive first>second 
     //if negative first<second
     //if zero equal string

     //upper case string
     printf("Upper case string= %s\n",strupr(string1));

     //lower case string
     printf("Lower case string= %s\n",strlwr(string1));

     //reverse string
     printf("Reverse string= %s\n",strrev(string1));



}