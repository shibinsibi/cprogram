#include<stdio.h>
int main()
{   int i,r,s;
    printf("enter the five number:");
    scanf("%d",&i);
    while(i>0)
   {
       r= i%10;
       s=(s*10)+r;
       i=i/10;

   }
   if(i=s)
   {
       printf("Palindrome");
   }
   else
   {
       printf("no Palindrome");
   }
   return 0;
}
