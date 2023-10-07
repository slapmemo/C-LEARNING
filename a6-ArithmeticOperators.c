#include <stdio.h>

int main(){

     // arithmetic operators
    
     // +  (toplama)        addition
     // -  (çıkarma)        subtraction
     // *  (çarpma)         multiplication
     // /  (bölme)          division
     // %  (kalanı veriyor) modulus
     // ++ (arttırma)       increment
     // -- (azaltma)        decrement

    int x = 5;
    int y = 2;
 
    int topla = x + y;
    int cikar = x - y;
    int carp  = x * y;
    int bol   = x / y;
    int kalan = x % y;
    float kalanlibolum = x / (float) y;
    int arttir = ++x;
    int arttiry = ++y;

    printf("toplayınca %d\n", topla);
    printf("çıkarınca %d\n", cikar);
    printf("çarpım %d\n", carp);
    printf("bölüm %d\t", bol);
    printf("kalan %d\n", kalan);
    printf("Kalanlı Bölüm %.2f\n", kalanlibolum);
    printf("x'i 1 arttır %d\n", arttir);
    printf("y'i 1 arttır %d\n", arttiry);
      
    return 0;
}