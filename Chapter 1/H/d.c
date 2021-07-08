#include<stdio.h>
int main()
{
    float far,centi;
    printf("Enter the temperature in farhenite ");
    scanf("%f",&far);
    centi=(5.0/9.0)*(far-32);
    printf("Temperature in degree centigrate is = %f",centi);
    return 0;

}
