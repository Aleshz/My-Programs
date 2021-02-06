#include <stdio.h>
int main()
{
    int phy,che,bio,mat,com;
    float per;
    printf("Enter the subject of five subjects(in order from Physics, Chemistry, Biology, Maths, Computer):");
    scanf("%d%d%d%d%d",&phy,&che,&bio,&mat,&com);
    per=(phy+che+bio+mat+com)/5;
    printf("Percentage=%.2f\n",per);
    if(per>=90)
    {
        printf("Grade A");
    }
    else if(per>=80)
    {
        printf("Grade B");
    }
    else if(per>=70)
    {
        printf("Grade C");
    }
    else if(per>=60)
    {
        printf("Grade D");
    }
    else if(per>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
    return 0;
}