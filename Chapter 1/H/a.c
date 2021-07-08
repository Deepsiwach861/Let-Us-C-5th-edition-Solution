#include<stdio.h>
int main()
{
float sal,da,hra, grs;/* sal is base salary ,da is dearness allowance, hra is houserent allowance and grs is gross salary*/
printf("Enter the base salary of Ramesh\n");
scanf("%f",&sal);
da= 0.4*sal;
hra= 0.2*sal;
grs = sal+da+hra;
printf(" Base salary is = %f\n Dearness Allowance is = %f\n House rent allowance is = %f\n Gross salary is = %f",sal,da,hra,grs);
return 0;
}
