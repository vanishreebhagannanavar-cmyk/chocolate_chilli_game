#include<stdio.h>
int main()
{
    int lines,i,j;
    printf("enter number");
    scanf("%d",&lines);
    for(i=1;i<=lines;i++)
    {
        int num;
        for(j=1;j<=lines;j++)
        {
            if(i+j<=lines)
            {
                printf(" ");
            }
            else
            {
                printf("%d",j-(lines-i) );

            }
    
        }
        printf("\n");
    }
}