#include <stdio.h>

int main() {

    const double PI = 3.14159;
    double yaricap;
    double cevre;
    double alan;

    printf("\nBir dairenin yaricapini girin: ");
    scanf("%lf", &yaricap);

    cevre = 2 * PI * yaricap;
    alan = PI * yaricap * yaricap;

    printf("Çevre: %lf\n", cevre);
    printf("Alan: %lf\n", alan);
    return 0;
}

