#include<stdio.h>
int main()
{
    int a,b,c,T=0;
    printf("Enter the value of 3 sides of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    if((a==b&&c!=a)||(a==c&&a!=b)||(b==c&&a!=c))
    {
        printf(" isosceles triangle  ");

    }
    else if(a==b&&b==c&&c==a)
    {
        printf("Equilateral triangle ");
    }
    else
    {
        printf("right angle or scalene triangle ");
    }

    return 0;

}

