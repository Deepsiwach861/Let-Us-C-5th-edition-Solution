#include<stdio.h>
int main()
{
    float diskm,dismeter,disfeet,disinches,discm;
    printf("Enter the distance between two cities in kms \n");
    scanf("%f",&diskm);
    dismeter=1000*diskm;
    disfeet= 3.28*dismeter;
    disinches= 12*disfeet;
    discm= 2.54*disinches;
    printf("Distance in km is = %f km\n",diskm);
    printf("Distance in meters is = %f meters\n",dismeter);
    printf("Distance in feet is = %f feet\n",disfeet);
    printf("Distance in inches is = %f inches\n",disinches);
    printf("Distance in cm is = %f cms\n",discm);
    return 0;

}
