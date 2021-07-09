#include<stdio.h>
int main()
{
    int num,ld,revnum =0;
    printf("Enter the five digit number\n");
    scanf("%d",&num);
    ld=num%10;
    num= num/10;
    revnum+= ld*10000;
    ld=num%10;
    num=num/10;
    revnum+=ld*1000;
    ld=num%10;
    num= num/10;
    revnum+= ld*100;
    ld=num%10;
    num= num/10;
    revnum+= ld*10;
    ld=num%10;
    num= num/10;
    revnum+= ld*1;
    printf("After reversing the digit of number we get = %d" , revnum);
    return 0;


}
