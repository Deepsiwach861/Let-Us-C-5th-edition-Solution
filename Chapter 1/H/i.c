#include<stdio.h>
int main()
{
    int num,ld,fd,sum;
    printf("Please Enter the four digit number\n");
    scanf("%d",&num);
    ld=num%10;
    fd=num/1000;
    sum= ld+fd;
    printf("sum of First and last digit of the entered number is = %d", sum);
    return 0;
}
