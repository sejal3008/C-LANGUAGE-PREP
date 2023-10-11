#include <stdio.h>
int main()
{   //program to print this pattern
    // ******
    // ******
    // ******
    // ******

    printf("Normal pattern\n");
    for(int i = 0; i <=3;i++) 
    {   
        for(int j = 0; j <=5;j++)
        {
            printf("%c",'*');
        }
        printf("\n"); 
    }

    //print the pattern(pyramid)
    //     *
    //   *    *
    // *   *   * 

    printf(" pyramid\n");
    for(int r=1;r<=3;r++){
          for(int s=0;s<=3-r;s++){
          printf("  ");
          }

        for(int c=1;c<=r;c++){
            printf("%3c",'*');
        }
        
         printf("\n");
         
    }

    //print the pattern(diamond)
    //     *
    //   *    *
    // *   *   * 
    //   *    *
     //     *

    printf("Diamond\n");
       for(int r=1;r<=3;r++){
          for(int s=0;s<=3-r;s++){
          printf("  ");
          }

        for(int c=1;c<=r;c++){
            printf("%4c",'*');
        }
        
         printf("\n");
         
    }
    for(int r=2;r>=1;r--){
        for(int s=0;s<=3-r;s++){
          printf("  ");
          }

        for(int c=1;c<=r;c++){
            printf("%4c",'*');
        }
        printf("\n");
    }


    //unique combination 
    printf("Unique combination\n");
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++) {
            for(int k=1;k<=3;k++) {
                 if(i!=j&&j!=k&&i!=k) {
                printf("\n%d%d%d",i,j,k);
            }
            }
        } 
    }
    printf("\n");

    //print 
    // A B C 
    // A B C 
    // A B C

    printf("\nABC pattern\n");
    for(int i = 1; i <=3;i++) 
    {   
        for(int j = 65; j <=67;j++)
        {
            printf("%c",j);
        }
        printf("\n"); 
    }

    //print pattern
    // A B C 
    // D E F 
    // G H I

    printf("alphabet pattern\n");
    char c='A';
     for(int i = 1; i <=3;i++) 
    {   
        for(int j = 1; j <=3;j++)
        {
            printf("%c",c);
            c++;
        }
        printf("\n"); 
    }


}