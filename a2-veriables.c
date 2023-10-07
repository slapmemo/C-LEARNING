#include <stdio.h>

int main() {

    // Variable = Bellekte bir değeri saklamak için ayrılan alan.
    //            Saklanan değere erişmek için doğrulanabilir bir isimle referans yapılır.
    //            Bu değişken, içerdiği değeri temsil eder.

    int x; // Tanımlama
    x = 123; // Başlatma
    int y = 321; // Tanımlama + Başlatma

    int age = 21; // Tamsayı
    float gpa = 2.05; // Ondalık sayı
    char grade = 'C'; // Tek karakter
    char name[] = "Bro"; // Karakter dizisi (String)

    printf("Hello %s\n", name); // String için %s kullanılır
    printf("You are %d years old\n", age); // Tamsayı için %d kullanılır
    printf("Your average grade is %c\n", grade); // Tek karakter için %c kullanılır
    printf("Your gpa is %f\n", gpa); // Ondalık sayı için %f kullanılır
    printf("Test is %d\n", x + y); // Tamsayılar arasında matematiksel işlem

    return 0;
}
