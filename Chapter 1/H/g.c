#include<stdio.h>
int main()
{
    int fdigit, ld,sum=0;
    printf("Enter the five digit number\n");
    scanf("%d",&fdigit);
    ld= fdigit%10;
    fdigit=fdigit/10;
    sum+=ld;
    ld= fdigit%10;
    fdigit=fdigit/10;
    sum+=ld;
    ld= fdigit%10;
    fdigit=fdigit/10;
    sum+=ld;
    ld= fdigit%10;
    fdigit=fdigit/10;
    sum+=ld;
    ld= fdigit%10;
    fdigit=fdigit/10;
    sum+=ld;
    printf("Sum of five Digits of number is = %d ",sum);
    return 0;

}
