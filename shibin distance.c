#include<stdio.h>
int main()
    {   int distance;
        float m,feet,inches,cm, total;
        printf("enter the value of distance b/w two cities:");
        scanf("%d",&distance);
        m=distance*1000;
        cm=distance*100;
        feet =distance*3280;
        inches= distance*10.07;
        printf("%f\n",m);
        printf("%f\n",cm);
        printf("%f\n",feet);
        printf("%f\n",inches);
        return 0;

}
