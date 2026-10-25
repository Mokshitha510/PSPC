#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, A, B, C;
    float pi = 3.14159265;

    printf("Enter three sides: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a + b <= c || a + c <= b || b + c <= a)
    {
        printf("Invalid triangle");
        return 0;
    }

    A = acos((b*b + c*c - a*a) / (2*b*c));
    B = acos((a*a + c*c - b*b) / (2*a*c));

    A = A * 180 / pi;
    B = B * 180 / pi;
    C = 180 - A - B;

    printf("Angle A = %.2f\n", A);
    printf("Angle B = %.2f\n", B);
    printf("Angle C = %.2f\n", C);

    return 0;
}
