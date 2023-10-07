#include <stdio.h>

int main (){

     // constant = fixed value that cannot be altered by the program during its execution
     // const yazınca hiç bir şekilde o değer değiştirilemez. Değiştirirsen hata verir. Conts yazmazsan pi 420.69 olur

     const pi = 3.14159;

     pi = 420.69;

     printf("%f", pi);

     return 0;

}