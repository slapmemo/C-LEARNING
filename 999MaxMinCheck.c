#include <stdio.h>

int main()
{
    float num1,num2;

   printf("Write to num1: ");
   scanf("%f", &num1);

   printf("\nWrite to num2: ");
   scanf("%f", &num2);

   if(num1>num2)
   {
    printf("Max number is: %.2f\n", num1);
    printf("Min number is: %.2f", num2);
   }
   else{
    printf("Max number is: %.2f\n", num2);
    printf("Min number is: %.2f", num1);    
   }
   return 0;
}