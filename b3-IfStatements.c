#include <stdio.h>

int main(){

    int age;
    
    printf("\nYasini gir: ");
    scanf("%d", &age);

    if(age >= 18){
       printf("Kayit olabilirsin!");
    }
    else if (age == 0){
       printf("Kayit olamazsin! Yeni dogmussun :D");

    }

    else if (age < 0){
       printf("Dogmamissin :D");
    }
    else {
       printf("Kayit olamazsin! 18 yasinda veya 18 yasindan buyuk olman lazim!");
    }

    return (0);
}