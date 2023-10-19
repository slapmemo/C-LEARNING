#include <stdio.h>
int main()
{
    int number;
    int negative = -1;
    int zero = 0;
    int positive = +1;

    printf("Write a number: ");
    scanf("%d", &number);

    if(number<0)
    {
        printf("Your number is negative: %d ", negative);
    }
    else if(number==0)
    {
        printf("Your number is zero: %d", zero);   
    }
        
    else if(number>0)
    {
        printf("Your number is positive: %d", positive);
    }
    else
    {
        printf("Write a number!");
    }
    return 0;
}