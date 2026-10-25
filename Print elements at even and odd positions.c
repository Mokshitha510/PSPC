#include <stdio.h>

int main() {
    int a[5], i;

    for (i = 0; i < 5; i++) {
        printf("Enter value: ");
        scanf("%d", &a[i]);
    }

    printf("Even positions: ");
    for (i = 1; i < 5; i += 2)
        printf("%d ", a[i]);

    printf("\nOdd positions: ");
    for (i = 0; i < 5; i += 2)
        printf("%d ", a[i]);

    return 0;
}
