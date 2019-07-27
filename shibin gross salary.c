#include<stdio.h>
int main()
{       int bs;
        float da,ha,gs;
        printf("Enter the basic salary:");
        scanf("%d",&bs);
        da= 0.4*bs;
        ha= 0.2*bs;
        gs= bs+da+ha;
        printf("Gross salary=%f",gs);
        return 0;
    }
