#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j;
    int zeros = 0, nonzeros = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    if (r < 1 || r > 10 || c < 1 || c > 10) {
        printf("Invalid size");
        return 0;
    }

    printf("Enter matrix elements:\n");

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);

            if (a[i][j] == 0)
                zeros++;
            else
                nonzeros++;
        }
    }

    if (zeros > nonzeros)
        printf("Sparse matrix");
    else
        printf("Not a sparse matrix");

    return 0;
}
