#include<stdio.h>
int main()
{       int c,d,swap;
        printf("enter the location of c:");
        scanf("%d",&c);
        printf("enter the location of d:");
        scanf("%d",&d);
        swap=c;
        c=d;
        d=swap;
        printf("%d\n%d\n%d\n",swap,c,d);
        return 0;
    }
