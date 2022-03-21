// Nama         : Aditya Suryandaru
// NIM          : 24060121140105
// Tanggal      : 21 Maret 2022
// Nama Program : CekPrima.c
/* Deskripsi    : menampilkan sebuah bilangan interger N > 0 termasuk bilangan prima atau bukan*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   //kamus
   int N, i, checker;

   //algoritma
   checker = 0;
   printf("Masukkan bilangan bulat positif: ");
   scanf("%d", &N);
   for(i=2; i<=(sqrt(N)); i++){
        if(N % i == 0){
            checker = 1;
            break;
        }
   }
    if(checker == 1){
        printf("Bukan bilangan prima");
}
    else{
        printf("Bilangan prima");
}
    return 0;
}
