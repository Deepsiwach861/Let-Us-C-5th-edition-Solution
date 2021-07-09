#include<stdio.h>
int main()
{
    int num1,num2,temp;
    printf("Enter the numbers\n");
    scanf("%d%d",&num1,&num2);
    printf(" *****Before swaping*****\n");
    printf("Number 1 is = %d\n",num1);
    printf("Number 2 is = %d\n\n",num2);
    printf(" *****After swaping*****\n");
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("Number 1 is = %d\n",num1);
    printf("Number 2 is = %d\n\n",num2);
    return 0;
}
