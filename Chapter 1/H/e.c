#include<stdio.h>
int main()
{
    float len, breadth,radius,arearect,perirect,areacir,circum;
    printf("Enter the length , breadth and radius\n");
    scanf("%f%f%f",&len,&breadth,&radius);
    arearect = len*breadth;
    perirect = 2*(len+breadth);
    areacir = 3.14*pow(radius,2);
    circum = 2*3.14*radius;
    printf("Area of Rectangle is = %f\n",arearect);
    printf("Perimeter of Rectangle is = %f\n",perirect);
    printf("Area of circle is = %f\n",areacir);
    printf("Circumference of circle is = %f\n",circum);
    return 0;
}
