#include <stdio.h>

int main()
{
    float basic, da, hra, gross;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    da = basic * 40 / 100;
    hra = basic * 20 / 100;

    gross = basic + da + hra;

    printf("DA = %.2f\n", da);
    printf("HRA = %.2f\n", hra);
    printf("Gross Salary = %.2f", gross);

    return 0;
}
