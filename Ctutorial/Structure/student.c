#include<stdio.h>
#include<string.h>
struct student
{
    int rollno;
    char name[10];
    char course[4];
};
int main()
{
    struct  student s1;
    s1.rollno=1;
   // s1.name[1]="rajani";
    //s1.course[1]="cs"; it will give error you cannot assign like this
    strcpy(s1.name, "Rajani");
    strcpy(s1.course, "computer science");
    printf("%d\n",s1.rollno);
    printf("%s\n",s1.name);
    printf("%s\n",s1.course);

}