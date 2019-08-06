#include<stdio.h>
int main()
{
    char c;
    printf("Enter the character:");
    scanf("%c",&c);
   if(c>=65&& c<=90)
   {
        printf("character is captial");

   }
   else
    if(c>=97&&c<=122)
   {
       printf("character is small letter");

   }
   else
    if(c>=48&&c<=57)
    {  printf("charcter is digit");
    }
   else
    if((c>=0&&c<=47)||(c>=58&&c<=64)||(c>=91&&c<=96)||(c>=123&&c<=127))
   {
       printf("charcter is special symbol");
   }
  return 0;
}
