#include<stdio.h>
int main()
{
    int a,b,c,T=0;
    printf("Enter the value of 3 sides of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    T=a+b;
    if(T>c)
    {
        printf("the triangle is valid ");

    }
    else
    {
        printf("The triangle is invalid");
    }
    return 0;

}
