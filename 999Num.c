#include <stdio.h>
int main()
{

    int num1;
    int num2;

   printf("Write to num1: ");
   scanf("%d", &num1);

   printf("\nWrite to num2: ");
   scanf("%d", &num2);

   if (num1>num2){

    printf("\nYazdigin birinci sayi %d, %d'den buyuk", num1, num2);
    }
    else
    
    {
    printf("\nYazdigin birinci sayi %d, %d'den kucuk", num1, num2);
    return 0;
    
   }
}
