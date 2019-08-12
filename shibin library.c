#include<stdio.h>
int main()
{
    int days;
    printf("Enter number of days the member is late to return the book:");
    scanf("%d",&days);
    if(days<6)
    {
        printf("fine is 50 paise ");
    }
    else if(days>6&&days<10)
    {
        printf("fine is 1 rupee");
    }
    else if(days>10&&days<30)
    {
        printf("fine is 5 rupees ");
    }
    else if(days>30)
    {
        printf("your membership will be cancelled  ");
    }
    return 0;
}
