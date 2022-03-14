// Nama         : Aditya Suryandaru
// NIM          : 24060121140105
// Tanggal      : 14 Maret 2022
// Nama Program : CekHari.c
/* Deskripsi    : menampilkan nama hari untuk inputan nomor 1 - 7*/

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
            printf("Minggu");
            break;
        case 2 :
            printf("Senin");
            break;
        case 3:
            printf("Selasa");
            break;
        case 4:
            printf("Rabu");
            break;
        case 5:
            printf("Kamis");
            break;
        case 6:
            printf("Jumat");
            break;
        case 7:
            printf("Sabtu");
            break;
        default:
            printf("Masukan nomor hari tidak tepat");
            break;
            }
    return 0;
}
