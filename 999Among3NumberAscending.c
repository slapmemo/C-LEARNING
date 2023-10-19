#include <stdio.h>
int main()
/*Write a program that reads from the user a "three-digit" integer value. The program should print "ASCENDING" if the three digits of the number are in ascending order (from left to right). If not, the program should print "NOT ASCENDING".



For example:

* Input: 137 --> ASCENDING (1<3<7)

* Input: 143 --> NOT ASCENDING.
*/
{
int number;
int onluk;
int birlik;
int yuzluk;

 printf("Write to 3 digits number: ");
 scanf("%d", &number);

 onluk = (number/10) % 10;
 birlik = (number%10);
 yuzluk = (number/100);

 if(yuzluk<onluk && onluk<birlik){
    printf("ASCENDING");
 }
 else{
    printf("NOT ASCENDING");
 }

return 0;
}