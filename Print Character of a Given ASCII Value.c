#include <stdio.h>

int main()
{
    int n;

    printf("Enter ASCII value (0-127): ");
    scanf("%d", &n);

    if (n >= 0 && n <= 127)
        printf("Character = %c", n);
    else
        printf("Invalid ASCII value");

    return 0;
}
