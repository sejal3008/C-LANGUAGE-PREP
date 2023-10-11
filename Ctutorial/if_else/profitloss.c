#include <stdio.h>
int main()
{
    int selling_price ,cost_price ;
    printf("Enter selling price and cost price of product");
    scanf("%d%d",&selling_price,&cost_price);
    if(selling_price>cost_price)
        printf("profit of %d",selling_price-cost_price);
    else 
        printf("loss of %d",cost_price-selling_price);

}