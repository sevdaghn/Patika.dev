// Merge Sort 

#include <stdio.h>


void merge(int arr[], int p, int q, int r) {

  int n1 = q - p + 1;
  int n2 = r - q;
  int i,j,k;
  int L[n1], M[n2];

  for (i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  
  i = 0;
  j = 0;
  k = p;

    while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int l, int r) {
  if (l < r) {

    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    merge(arr, l, m, r);
  }
}

void printArray(int arr[], int size) {
	int i;
  for (i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

int main() {
  int arr[] = {16,21,11,8,12,22};
  int size = sizeof(arr) / sizeof(arr[0]);

  mergeSort(arr, 0, size - 1);

  printf("Sorted array: \n");
  printArray(arr, size);
}
