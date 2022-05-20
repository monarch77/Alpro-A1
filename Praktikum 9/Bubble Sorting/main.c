// Nama         : Aditya Suryandaru
// NIM          : 24060121140105
// Tanggal      : 9 Mei 2022
// Nama Program : bubbleSort.c
/* Deskripsi    : membuat algoritma pengurutan data menggunakan bubble sort*/

#include <stdio.h>

void bubbleSort(int arr[], int n){
  int i, j, tmp;
  for(i = 0; i < n; i++){
    for(j=0; j < n-i-1; j++){
      if(arr[j] < arr[j+1]){
        tmp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = tmp;
      }
    }
  }
}

int main() {
  int array[100], n, i, j;
  printf("Masukkan banyak jumlah data: ");
  scanf("%d", &n);

  printf("Masukkan nilai: \n");

  for(i = 0; i < n; i++){
    scanf("%d", &array[i]);
  }

  bubbleSort(array, n);

  printf("Hasil pengurutan sebagai berikut:\n");
  for(i = 0; i < n; i++){
    printf("%d ", array[i]);
  }
  printf("\n");
}
