#include<stdio.h>
int main(){
  int i;
  while(i<=100)
  {
    if(i%5==0)
     {
        i++;
        continue;
     }
     printf("%d\n",i);
     i++;

     }
     return 0;
}
