#include <stdio.h>
#include <string.h>

int main (){

    char name[25];   // "name" adlı bir karakter dizisi (string) tanımlandı, en fazla 25 karakter alabilir
    char name2[25];  // "name2" adlı bir karakter dizisi tanımlandı, en fazla 25 karakter alabilir
    int age;         // "age" adlı bir tamsayı (integer) tanımlandı

    printf("\nWhat's your name?");   // Kullanıcıdan ismini almak için ekrana bir mesaj yazıldı
    scanf("\n%s", &name);            // Kullanıcının girişini almak için scanf kullanıldı (Enter tuşuna kadar), name dizisine atanır

    getchar();  // Tamponu temizlemek için kullanılır

    printf("\nWhat's your name & surname?");  // Kullanıcıdan isim ve soyismini almak için ekrana bir mesaj yazıldı
    fgets(name2, 25, stdin);                // Kullanıcının girişini almak için fgets kullanıldı, en fazla 25 karakter alabilir, name2 dizisine atanır
    name2[strlen(name2)-1] = '\0';         // fgets ile alınan girişin sonundaki yeni satır karakterini kaldırmak için kullanılır

    printf("\nHow old are you?");   // Kullanıcıdan yaşını almak için ekrana bir mesaj yazıldı
    scanf("%d", &age);               // Kullanıcının girişini almak için scanf kullanıldı, age değişkenine atanır

    printf("\nHello %s, how are you?", name);       // İsimle selamlama mesajı
    printf("\nYour name is %s", name2);              // İsim ve soyisim mesajı
    printf("\nYou are %d years old", age);          // Yaş mesajı

    return 0;
}
