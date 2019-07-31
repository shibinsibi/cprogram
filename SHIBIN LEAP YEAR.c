#include<stdio.h>
int main()
{ int y;
  printf("enter the value of year:");
  scanf("%d",&y);
  if(y%4==0)
  {
      printf("leap year");

  }
  else
    {  printf("Not leap year");

    }
return 0;
}
