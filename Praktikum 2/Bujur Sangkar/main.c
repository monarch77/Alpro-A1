//Nama File     : luasbjsk.c
//Deskripsi     : menghitung dan menampilkan luas bujur sangkar
//Pembuat       : Aditya Suryandaru - 24060121140105
//Tgl Pembuatan : Senin, 7 Maret 2022 14.00 WIB

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int s;
    int luas;

    printf("=============================================Menghitung Luas Bujur Sangkar=============================================\n");
    printf("=======================================================================================================================\n");
    printf("\nMasukkan Sisi (s) = ");
    scanf("%d", &s);
    luas = s * s;

    printf("\n=======================================================================================================================\n");
    printf("Luas Bujur Sangkar (s x s) ==> %d x %d = %d\n", s, s, luas);
    printf("=======================================================================================================================\n");
    return 0;

}




