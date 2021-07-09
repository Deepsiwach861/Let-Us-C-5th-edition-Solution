#include<stdio.h>
int main()
{
    float sellprice,profit,costprice;
    printf("Enter the Selling price of 15 items\n");
    scanf("%f",&sellprice);
    printf("Enter the total profit\n");
    scanf("%f",&profit);
    costprice= sellprice-profit;
    printf("Cost price of 15 items is = %f\n",costprice);
    printf("Cost price of 1 item is = %f",costprice/15);
    return 0;
}
