#include <stdio.h>
void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
    while (i < size1) {
        merged[k++] = arr1[i++];
    }
    while (j < size2) {
        merged[k++] = arr2[j++];
    }
}
int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 9, 6};
    int merged[6];
    mergeSortedArrays(arr1, 3, arr2, 3, merged);
    printf("Merged array: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", merged[i]);
    }
    return 0;
}

