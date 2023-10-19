#include <stdio.h>

int main(){

    int num1;

    printf("Sayiyi yaz: ");
    scanf("%d", &num1);

    if(num1%2 == 0)
    {
        printf("Yazgini sayi cift");
    }
    else{
        printf("Yazdigin sayi tek");
    }
    return 0;
}