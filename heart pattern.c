#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    int k;
     for(k=0;k<5;k++)
        {
            if(k==0)
                printf("      **********          ***********");
            else if(k==1)
                printf("    *************        **************");
            else if(k==2)
                printf("  ****************      ****************");
            else if(k==3)
                printf(" ******************    ******************");
            else if(k==4)
                 printf("*****************************************");

            printf("\n");
        }
    for(i=20;i>=0;i--)
    {


        for(k=20-i;k>=0;k--)
            printf(" ");
        for(j=0;j<i;j++)
        printf("*");
        for(j=0;j<i;j++)
        printf("*");
        printf("\n");

    }

}
