#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            sum += i;
    }

    printf("Sum of factors = %d", sum);

    return 0;
}
