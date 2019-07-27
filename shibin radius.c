#include<stdio.h>
int main()
{
        int r;
        float area, circumference;
        printf("enter the value of radius of circle:");
        scanf("%d",&r);
        area= 3.14*r*r;
        circumference= 2*3.14*r;
        printf("area:%f\n",area);
        printf("circumference:%f\n",circumference);
        return 0;

}

