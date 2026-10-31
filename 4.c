#include<stdio.h>
int main()
{
    int lines,i,j,num=1;
    printf("enter lines");
    scanf("%d",&lines);
    for(i=1;i<=lines;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",num);
            num++;
        }
        printf("\n");

    }
}