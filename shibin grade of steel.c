#include<stdio.h>
int main()
{
    int h,ts;
    float carbon;
    printf(" \nenter the value of hardness (>50): \n enter the value of carbon (<0.7): \n enter the value of tensile strength (>5600):\n");
    scanf("%d%f%d",&h,&carbon,&ts);
    if(h>50&&carbon<0.7&&ts>5600)
    {
        printf("Grade=10");
    }
    else if(h>50&&carbon<0.7)
        {
            printf("Grade = 9");
        }
    else if(carbon<0.7&&ts>5600)
          {
              printf("Grade = 8");
          }
    else if(h>50&&ts>5600)
            {
                printf("Grade = 7");
            }
    else if(h>50|| carbon<0.7||ts>5600)
            {
                 printf("Grade = 6");
            }
    else
            {
                printf("Grade = 5");
            }
            return 0;
}
