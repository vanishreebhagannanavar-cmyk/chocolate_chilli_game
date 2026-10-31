#include<stdio.h>
int main()
{
    int chocolates=13,player1,player2,remaining;
    printf("<--------------Chocolate Chilly Game-------------->\n");
    printf("\nThere are 13 choccolates\n");
    printf("\nPlayer gets last chocolate wins\n");
    printf("\nAnd the other player will get chilly and lose\n");
    printf("\nEach player has to get 1,2 or 3 chocolates\n");
    while(chocolates>0)
    {
        printf("\nplayer1 enter chocolates: \n");
        scanf("%d",&remaining);
        if(remaining>3||remaining<1||remaining>chocolates)
        {
        printf("\ninvalid input give input again\n");
        continue;
        }
        else
        {
            chocolates=chocolates-remaining;
            printf("%d\n",chocolates);
        }
        if(chocolates==0)
        {
            printf("player1 wins");
            printf("player2 loses the game and gets chilly\n");
            break;
        }
        else
        {
             printf("player2 turn\n");
        }
        label:
        printf("\nplayer2 take chocolates\n");
        scanf("%d",&remaining);
        if(remaining>3||remaining<1||remaining>chocolates)
        {
        printf("invalid input give again\n");
        goto label;
        }
        else
        {
            chocolates=chocolates-remaining;
            printf("\n%d\n",chocolates);
        }
         if(chocolates==0)
        {
            printf("player2 wins\n");
            printf("\nplayer1 loses the game and gets chilly\n");
            break;
         }
        else
        {
            printf("\nplayer1 turn\n");
        }
    }
    printf("\n<-----------------Game Completed--------------->\n");
}