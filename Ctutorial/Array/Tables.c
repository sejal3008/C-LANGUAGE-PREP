#include<stdio.h>
void table(int arr[][10], int n,int m ,int number);//functon declarations
int main(){
    int tables[1][10] ;
    printf("Table of 2\n");
    table(tables,0,10,2);//function call
    
    for( int i=0;i<10;i++ ){
        printf("%d\n",tables[0][i]);
    }

}
void table(int arr[][10], int n,int m,int number)//function prototype
{   
    for(int i=0;i<m;i++){
        arr[n][i]=number*(i+1);
    }

}