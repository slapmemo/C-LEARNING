#include <stdio.h>

int main(){

   int work;
   int minutes;
   int remainingseconds;
   int hours;

   printf("How many seconds did you work?\n");
   scanf("%d", &work);
   
   hours = (work)/3600; // kaç saat çalıştığını yazıyor
   minutes = (work - hours * 3600)/60; // kaç dakika çalışması gerekiyor
   remainingseconds = (work - hours * 3600) / 60;

   printf("Total Hours: %d\n", hours);
   printf("Total Minutes: %d\n", minutes);
   printf("Total Remaining Seconds: %d\n", remainingseconds);




 return 0;
}