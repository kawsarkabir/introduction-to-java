#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE], size, i, position;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert a new element: ");
    scanf("%d", &position);

    if (position >= 0 && position <= size) {
        int element;
        printf("Enter the element to insert: ");
        scanf("%d", &element);

        for (i = size; i > position; i--) {
            arr[i] = arr[i - 1];
        }

        arr[position] = element;
        size++;

        printf("Array after insertion:\n");
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Invalid position to insert.\n");
    }

    // Deletion example (delete from a given position)
    printf("Enter the position to delete an element: ");
    scanf("%d", &position);
    if (position >= 0 && position < size) {
        for (i = position; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
        printf("Array after deletion:\n");
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Invalid position to delete.\n");
    }
    return 0;
}
// EnamulHaque
//672722
