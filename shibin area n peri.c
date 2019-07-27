#include<stdio.h>
int main()
{
        int l, b;
        float area, perimeter;
        printf("enter the value of length and breadth:");
        scanf("%d%d",&l,&b);
        area= l*b;
        perimeter= 2*(l+b);
        printf("area:%f\n",area);
        printf("perimeter:%f\n",perimeter);
        return 0;

}
