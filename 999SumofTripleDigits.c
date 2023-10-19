#include <stdio.h>

int main ()
 {
int num;
int birler, onlar, yuzler, toplam;

printf("3 basamakli sayi yaz: ");
scanf("%d", &num);

yuzler = num/100;
birler = num % 10;
onlar = (num/10) % 10;

toplam = yuzler + onlar + birler;

printf ("\nYazdigin sayi %d ve Uc sayinin rakamlari toplami %d", num, toplam);
return 0;
}