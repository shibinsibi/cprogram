#include<stdio.h>
int main()
{
        int s1,s2,s3,s4,s5,total;
        float avg;
        printf("enter the value of five subject:" );
        scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
        total= s1+s2+s3+s4+s5;
        avg= total/5;
        printf("avg=%f\n",avg);
        return 0;
}
