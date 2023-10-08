#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){

     // logical operators = && (AND) checks if two conditions are true
     // || (OR)
     // ! (NOT)

     float temp;
     printf("\n Enter the temperature in Celsius: ");
     scanf("%f", &temp);
     
     int userinput;    
     bool sunny;
     printf("\n Is weather Sunny? (1 for True or 0 False) ");
     scanf("%d", &userinput);
     sunny = (userinput == 1);

     if(temp >= 0 &&  temp <= 30 && sunny){
          printf("\nThe weather is good!");

     }
     else{

         printf("\nThe weather is bad!");
     }


    return (0);
}