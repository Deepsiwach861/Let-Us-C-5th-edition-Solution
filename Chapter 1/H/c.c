#include<stdio.h>
int main()
{
    float s1,s2,s3,s4,s5,aggregate, percentage;
    printf("Enter the marks of students for different subjects\n");
    scanf("%f\n%f\n%f\n%f\n%f",&s1,&s2,&s3,&s4,&s5);
    aggregate= s1+s2+s3+s4+s5;
    percentage= aggregate/5;
    printf("Marks for s1 is = %f\n",s1);
    printf("Marks for s2 is = %f\n",s2);
    printf("Marks for s3 is = %f\n",s3);
    printf("Marks for s4 is = %f\n",s4);
    printf("Marks for s5 is = %f\n",s5);
    printf("Total marks obtained out of 500 is = %f\n",aggregate);
    printf("Percentage scorde by student is = %f \n",percentage);
    return 0;
}
