#include <stdio.h>

int main() {
    int a[5], i;
    int size = sizeof(a) / sizeof(a[0]);

    for (i = 0; i < size; i++) {
        printf("Enter value: ");
        scanf("%d", &a[i]);
    }

    printf("Size of array = %d\n", size);
    printf("Reverse order: ");

    for (i = size - 1; i >= 0; i--)
        printf("%d ", a[i]);

    return 0;
}
