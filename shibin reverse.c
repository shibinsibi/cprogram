#include<stdio.h>
int main()
{  int i,s=0, r;
   printf("enter the integer:");
   scanf("%d",&i);
   while(i>0)
   {
       r= i%10;
       s=(s*10)+r;
       i=i/10;

   }
   printf("reverse of digits=%d \n",s);
   return 0;
   }
