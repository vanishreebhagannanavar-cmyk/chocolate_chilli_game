#include<stdio.h>
int main()
{
    int i,j,lines;
    printf("enter lines");
    scanf("%d",&lines);
    for(i=1;i<=lines;i++)
    {
        for(j=1;j<=lines;j++)
        {
            if(i+j>lines+1)
            {
                printf(" ");
            }
            else
            {
            printf("%d",j);
            }
        }
        printf("\n");
    }

}