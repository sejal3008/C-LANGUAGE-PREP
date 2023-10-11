#include<stdio.h>
void main()
{
    char ch;
    printf("Enter any day(1-7)");
    scanf("%c", &ch);
    switch (ch)
    {
    case '1': printf("You have enter sun"); 
                break;
    case '2': printf("You have enter mon"); 
                break;
    case '3': printf("You have enter thu"); 
                break;
    case '4': printf("You have enter wed"); 
                break;
    case '5': printf("You have enter thus"); 
                break;
    case '6': printf("You have enter fri"); 
                break;
    case '7': printf("You have enter sat");
                 break;
    default: printf("You have enter invalid day"); 
                break;
    }
}