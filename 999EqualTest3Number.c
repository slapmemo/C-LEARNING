#include <stdio.h>
int main()
{
       int a, b, c;
   
   printf("Write to number1: ");
   scanf("%d", &a);

   printf("Write to number2: ");
   scanf("%d", &b);

   printf("Write to number3: ");
   scanf("%d", &c);

   if (a == b && b == c)
      {
    printf("This three number is equal");
   }
   else{
    printf("This three number is not equal");
   }
   return 0;
}