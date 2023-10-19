#include <stdio.h>

int main()
{
    float num1,num2,num3;
    float min,max;

    printf("Write to num1: ");
   scanf("%f", &num1);

   printf("\nWrite to num2: ");
   scanf("%f", &num2);

   printf("\nWrite to num3: ");
   scanf("%f", &num3);

    min = num1; 
    max = num3; 
    if(num1>num3) 
    {
     max = num1; 
     min = num3; 
    }
    if(num2>max) 
        max = num2;    
    if(min>num2) 
        min = num2;

        printf("Maximum between 3 numbers = %f\n", max);
        printf("Minimum between 3 numbers = %f\n", min);

return 0;
    }             