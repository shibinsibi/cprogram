#include<stdio.h>
int main()
{   long int cp,sp, profit,loss,total;
    printf("enter the value of cost price of an item:");
    scanf("%d",&cp);
    printf("enter the value of selling price of an item:");
    scanf("%d",&sp);
    total= cp-sp;
    if(total>0)
    {
       printf("profit=%d",total);
    }
    else
    {
        printf("loss");

    }

return 0;
}

