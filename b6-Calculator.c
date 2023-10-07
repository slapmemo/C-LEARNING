#include <stdio.h>

int main(){

    char operator;
    double num1;
    double num2;
    double result;

    printf("\nHangi islemi yapmak istiyorsun? (+ - * /):  ");
    scanf("\n%c", &operator);

    printf("Birinci sayiyi girin: ");
    scanf("\n%lf", &num1);

    printf("Ikinci sayiyi girin: ");
    scanf("\n%lf", &num2);

    switch(operator){

         default:
            printf("\n + - * / yapmak istedigin islemi dogru yaz.");
            break;
         case '+':
            result = num1 + num2;
            printf("\n Toplama isleminiz sonucu %.2lf", result);
            break;
         case '-':
            result = num1 - num2;
            printf("\n Cikarma isleminizin sonucu %.2lf", result);
            break;
         case '/':
            result = num1 / num2;
            printf("\n Bolme isleminizin sonucu %.2lf", result);
            break;
         case '*':
            result = num1 * num2;
            printf("\n Carpma isleminizin sonucu %.2lf", result);
            break;          
    }

    return 0;
}