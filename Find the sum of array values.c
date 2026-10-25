#include <stdio.h>

int main() {
    int a[5], i, sum = 0;

    for (i = 0; i < 5; i++) {
        printf("Enter value: ");
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("Sum = %d", sum);

    return 0;
}
