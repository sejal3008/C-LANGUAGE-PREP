//count no of vowels present in string
#include<stdio.h>
#include<string.h>
int vowel(char string[]) ;
int main()
{
    char string[100];
    printf("Enter string");
    gets(string);
    vowel(string);
    


}
int vowel(char string[])
{
    int count = 0;
    for(int i = 0; string[i] !='\0';i++)
    {
        if(string[i] == 'a'||string[i] == 'e'||string[i] == 'i'||string[i] == 'o'||string[i] == 'u')
        count++;
    }
    printf("number of vowel present in string = %d",count);
}