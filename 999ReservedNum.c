#include <stdio.h>

int main()
{
int birler, onlar, yuzler, sayi;

    printf("Uc basamakli sayi yaz ve senin icin ters yazayim: ");
    scanf("%d", &sayi);

    yuzler = sayi/100;
    birler = sayi%10;
    onlar = (sayi / 10) % 10;

    printf("Old number %d and new number %d%d%d", sayi, birler, onlar, yuzler);
    return 0;
}