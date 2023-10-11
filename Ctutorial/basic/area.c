#include<stdio.h>
int main(){
    //area of circle
    int radius ;
    float area_circle, perimeter_cicle;
    printf("enter radius for circle area and perimeter");
    scanf("%d",&radius);
    area_circle = 3.14*radius*radius; //area circle
    perimeter_cicle =2*3.14*radius; //perimeter circle
    printf("area: %2f\n",area_circle);
    printf("perimeter: %2f\n",perimeter_cicle);
    
    //area of square
    float area_square;
    int length,breath;
    printf("enter length and breath for square area");
    scanf("%d%d",&length,&breath);
    area_square=length*breath;  //area square
    printf("area square: %2f\n",area_square);

    //perimeter of square
    int side,perimeter;
    printf("enter SIDE for perimeterof square");
    scanf("%d",&side);
    perimeter = side*side;
    printf("perimeter: %d\n",perimeter);

}