// Nama         : Aditya Suryandaru
// NIM          : 24060121140105
// Tanggal      : 21 Maret 2022
// Nama Program : FaktorBil.c
/* Deskripsi    : menampilkan faktor bilangan dari interger sembarang N (N>0) yang diinput melalui keyboard*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    //kamus
    int N, i;

    //algoritma
    printf("Masukkan bilangan bulat positif : ");
    scanf("%d", &N);

    for(i=1; i<=N; i++){
        if(N % i == 0){
            printf(" %d", i);

        }
    }
    return 0;
}
