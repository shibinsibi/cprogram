#include<stdio.h>
int z=0;
void add(int x,int y){

z=x+y;
printf("enter the value:%d",z);

}
void sub(int x,int y)
{
    z=x-y;
    printf("enter the value:%d",z);
}
void multiple(int x,int y)
{
    z=x*y;
    printf("enter the value:%d",z);
}
void divide(int x,int y)
{
    z=x/y;
    printf("enter the value:%d",z);

}
void remainder(int x, int y)
{
    z=x%y;
    printf("enter the value:%d",z);

}
int main()
{
    int x, y, input;
   printf("enter the element: ");
   scanf("%d%d",&x,&y);
   printf("Enter the choice");
   scanf("%d",&input);
    switch(input){
    case 1: add(x,y);
    break;
    case 2: sub(x,y);
    break;
    case 3: divide(x,y);
    break;
    case 4: multiple(x,y);
    break;
    case 5: divide(x,y);
    break;
    default: printf("invalid");
    return 0;
}
}


