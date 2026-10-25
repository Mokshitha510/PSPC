#include <stdio.h>

int main() {
    int n, original, temp, digit;
    int digits = 0, sum = 0, i, power;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Not an Armstrong number");
        return 0;
    }

    original = n;
    temp = n;

    do {
        digits++;
        temp /= 10;
    } while (temp > 0);

    temp = n;

    while (temp > 0) {
        digit = temp % 10;
        power = 1;

        for (i = 1; i <= digits; i++)
            power *= digit;

        sum += power;
        temp /= 10;
    }

    if (sum == original)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}
