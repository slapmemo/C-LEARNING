#include <stdio.h>

int main (){

     // artırılmış atama operatörleri = bir ifadeyi değiştirmek için kullanılır, operatör
     // bir değişkeni argümanlarından biri olarak alır
     // ve ardından sonucu aynı değişkene atar
     // x = x + 1
     // x+=1 

    int z = 10;

    int x = 10;
    //x = x + 2;
    x+=2;

    int y = 10;
    //y = y - 3;
    y-=3;
      
    int m = 10;  
    //m = m * 4;
    m*=4;
 
    int n = 10;
    //n = n / 5;
    n/=5;
     
    int l = 10;
    //l = l % 2;
    l%=2;
 
    printf(" İlk değer %d\n", z);
    printf(" 2 ekle %d\n", x);
    printf(" 3 çıkar %d\n", y);
    printf(" 4 çarp %d\n", m);
    printf(" 5 ile böl %d\n", n);
    printf(" 2 ile bölümünden kalan %d\n", l);
    
    return 0;
    
}