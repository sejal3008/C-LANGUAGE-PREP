#include<stdio.h>
int main()
{
    int english ,math,science,avarage;
    printf("Enter mark of english , math,science") ;
    scanf("%d%d%d",&english,&math,&science);
    avarage= english + math + science/3;
    //nested if 
    if(avarage>=60)
        printf("first") ;
    else if (avarage<60&&avarage>=30)
        printf("second") ;
    else
        printf("third") ;

    //squential if
    if(avarage>=60)
        printf("first") ;
    if (avarage<60&&avarage>=30)
        printf("second") ;
    if(avarage<30)
        printf("third") ;
}