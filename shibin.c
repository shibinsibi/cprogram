#include<stdio.h>
int z=0;
void add(int x,int y)
{

    z=x+y;
    printf("%d\n",z);

}
void sub(int x,int y)
{
    z=x-y;
    printf("%d\n",z);
}
void multiple(int x,int y)
{
    z=x*y;
    printf("%d\n",z);
}
void divide(int x,int y)
{
    z=x/y;
    printf("%d\n",z);

}
void remainder(int x, int y)
{
    z=x%y;
    printf("%d\n",z);

}
int main()
{
    int i,x, y, input;
    printf(" 1: add \n 2: sub \n 3: divide \n 4: multiple \n 5: remainder \n");
    for(i=0;i<4;i++)
     {  printf("Enter the choice: ");
        scanf("%d",&input);
        printf("enter the element: ");
        scanf("%d%d",&x,&y);
        switch(input)
        {
            case 1:     add(x,y);
            break;
            case 2:     sub(x,y);
            break;
            case 3:     divide(x,y);
            break;
            case 4:     multiple(x,y);
            break;
            case 5:     remainder(x,y);
            break;
            case 6:     printf("Exit");
            return 0;
        }
    }
}


