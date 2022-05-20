// Nama         : Aditya Suryandaru
// NIM          : 24060121140105
// Tanggal      : 9 Mei 2022
// Nama Program : countingSort.c
/* Deskripsi    : membuat algoritma pengurutan data menggunakan counting sort*/

#include <stdio.h>
#include <stdlib.h>

/*Sub Program*/
void CountingSort(int arr[], int n)
{
    /*Kamus Lokal*/
    int i;
    int j;
    int tmp;
    int idx;

    /*Algoritma*/
    for(i = 0; i < (n-1); i++){
        idx = i;
        for(j = i+1; j < n; j++){
            if(arr[j] > arr[idx]){
                idx = j;
            }
        }
        tmp = arr[i];
        arr[i] = arr[idx];
        arr[idx] = tmp;
    }
}

/*Program Utama*/
int main()
{
    /*Kamus*/
    int arr[100];
    int n;
    int i;

    /*Algoritma*/
    printf("Masukkan banyak jumlah data : ");
    scanf("%d", &n);
    printf("Masukkan data sebanyak %d :\n", n);
    for(i = 0; i < n; i++){
    scanf("%d", &arr[i]);
    }

    CountingSort(arr, n);
    printf("Hasil pengurutan sebagai berikut : \n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
