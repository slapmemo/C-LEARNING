#include <stdio.h>
#include <math.h>


int main(){

    double A = sqrt(9); // karekök 9
    double B = pow(2, 4); // 2 üzeri 4
    int C = round(3.14); // en yakın tam sayıya yuvarla
    int D = ceil(3.14); // bir üst tam sayıya yuvarlar
    int E = floor(3.99); // bir alt tam sayıya yuvarlar
    double F = fabs(-100); // - sayıyı pozitif yapar
    double G = log(3);
    double H = sin(45);
    double I = cos(45);
    double J = tan(45);

    printf("\n%lf", A);
    printf("\n%lf", B);
    printf("\n%d", C);
    printf("\n%d", D);
    printf("\n%d", E);
    printf("\n%lf", F);
    printf("\n%lf", G);
    printf("\n%lf", H);
    printf("\n%lf", I);
    printf("\n%lf", J);

    return 0;



}