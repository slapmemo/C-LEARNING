#include <stdio.h>

int main(){
// iki int sayı eşit olup olmadığına bak

   int a, b;
   
   printf("Write to number1: ");
   scanf("%d", &a);

   printf("Write to number2: ");
   scanf("%d", &b);

   if(a==b)
   {
    printf("This two number is equal");
   }
   else{
    printf("This two number is not equal");
   }



    return 0;
}