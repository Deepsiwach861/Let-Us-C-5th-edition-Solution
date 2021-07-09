#include<stdio.h>
int main()
{
    int amount,nhundred,nfifty,nten;
    printf("Enter the amount to withdraw\n");
    scanf("%d",&amount);
    nhundred=amount/100;
    amount=amount%100;
    nfifty=amount/50;
    amount=amount%50;
    nten=amount/10;
    printf("Denomination of notes is as folows:\n");
    printf("Number of 100 Rs. notes is = %d\n",nhundred);
    printf("Number of 50 Rs. notes is = %d\n",nfifty);
    printf("Number of 10 Rs. notes is = %d\n",nten);
    return 0;

}
