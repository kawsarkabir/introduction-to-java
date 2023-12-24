#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE], size, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array elements are:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
// devkawsarkabir
// 672749