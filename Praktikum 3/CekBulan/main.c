// Nama         : Aditya Suryandaru
// NIM          : 24060121140105
// Tanggal      : 14 Maret 2022
// Nama Program : CekHari.c
/* Deskripsi    : menampilkan nama bulan untuk inputan nomor 1 - 12 dan menampilkan inputan salah jika tidak dalam rentang 1 -12*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    int i;

    //Algoritma
    printf("Masukkan bilangan : ");
    scanf("%d",&i);
    switch (i){
        case 1 :
            printf("Januari");
            break;
        case 2 :
            printf("Februari");
            break;
        case 3:
            printf("Maret");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("Mei");
            break;
        case 6:
            printf("Juni");
            break;
        case 7:
            printf("Juli");
            break;
        case 8:
            printf("Agustus");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("Oktober");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("Desember");
            break;
        default:
            printf("Masukan nomor bulan tidak tepat");
            break;
            }
    return 0;
}
