#include<stdio.h>
int main()
{
    int numofmen,numofwomen,numoflit,numoflitmen,numoflitwomen,numofillmen,numofillwomen,totilliterate,population=80000;
    numofmen=0.52*80000;
    numofwomen= 80000-numofmen;
    numoflit=0.48*population;
    numoflitmen=0.35*population;
    numoflitwomen=numoflit-numoflitmen;
    numofillmen=numofmen-numoflitmen;
    numofillwomen=numofwomen-numoflitwomen;
    totilliterate=numofillwomen+numofillmen;
    printf("Total population given = %d\n",population);
    printf("Total number of men = %d\n",numofmen);
    printf("Total number of women = %d\n",numofwomen);
    printf("Total number of literate = %d\n",numoflit);
    printf("Total number of literate men = %d\n",numoflitmen);
    printf("Total number of literate women= %d\n",numoflitwomen);
    printf("Total number of illiterate men = %d\n",numofillmen);
    printf("Total number of illiterate women = %d\n",numofillwomen);
    printf("Total number of illiterates = %d\n",totilliterate);
    return 0;

}
