#include <stdio.h>
int main()
{   
    printf("Use of continue\n");
    for(int i = 1; i <=10;i++){
        if(i==5){
            
            continue;//skip 5
            
        }
        printf("%d\n",i);
    }

    printf("Use of break\n");
    for(int i = 1; i <=10;i++){
         if(i==5){
            break;//exit loop when i==5
        }
        printf("%d\n",i);
    }
}