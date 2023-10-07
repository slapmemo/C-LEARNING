#include <stdio.h>

int main(){

  // format specifier % = defines and formats a type of data to be displayed

    // %c = character
    // %s = string (array of characters) 
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align
    
    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%5.2f\n", item1); //.2  . sonrasındaki sayılardan ne kadar alacağını gösteriyor .3 olsaydı 5.750 olurdu
    printf("Item 2: $%8.2f\n", item2); //.2 öncesi "8" kaç basamak alacağını gösteriyor. 
    printf("Item 3: $%8.2f\n", item3);
    
    return 0;

}