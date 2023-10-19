#include <stdio.h>

int main()
{
    int x = 1;
    int y = 2;
    int temp;

    printf("X degerinin ilk hali: %d\n", x);
    printf("Y degerinin ilk hali: %d\n\n", y);

    temp = x;
    x = y;
    y = temp;
    printf("X degerinin son hali: %d\n", x);
    printf("Y degerinin son hali: %d\n", y);    
    return 0;



}