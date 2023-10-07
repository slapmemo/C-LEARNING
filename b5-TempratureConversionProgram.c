#include <stdio.h>
#include <ctype.h>

int main(){

   char unit;
   float temp;

   printf("\nIs the temperature in (F) or (C)?: ");
   scanf("%c", &unit);

    unit = toupper(unit); // küçük yazsa bile otomatik büyük harfe çevrilir
     
    if(unit == 'C'){
      printf("\n Enter the temp in Celsius: ");
      scanf("%f", &temp);
      temp = (temp *9 / 5) + 32;
      printf("\n The temp in Farenheit is %.1f ", temp);
    }
    else if (unit == 'F'){
      printf("The temp is currently in Farenheit: ");
      scanf("%f", &temp);
      temp = ((temp -32) *5) /9;
      printf("\n The temp in Celsius is %.1f", temp);
    }
    else{
      printf("\n %c is not a valid unit of measurement", unit);
    }
    return 0;
}