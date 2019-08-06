#include<stdio.h>
int main()
{
    short int age;
    int premium;
    char gender,city,health;
    printf("give the information asked below");
    printf("\n your age: \n your gender(M/F): \n your health condition(E/P): \n where you lives(C/V):\n");
    scanf("%d%c%c%c",&age,&gender,&health,&city);
    if(age>25&&age<35)
    {
        if(gender=='M')
         {
             if(health=='E'&&city=='C')
              {
                    premium=4000;
                    printf("premium:%d \n the policy cannot exceed Rs. 2 lakhs",premium);
              }
              else
                if(health=='P'&& city=='V')
              {
                  premium=6000;
                  printf("premium:%d \n the policy cannot exceed Rs.10000",premium);
              }
         }

            else
                if(gender=='F')
                {
                    if(health=='E'&& city=='C')
                    {
                        premium=3000;
                        printf("premium:%d \n the policy cannot exceed Rs. 1 lakhs",premium);
                    }
                }
    }
         else
        {  printf("The person is not insured");
        }
    return 0;
}

