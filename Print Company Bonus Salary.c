#include <stdio.h>

int main()
{
    float salary, bonus, total;

    printf("Enter salary: ");
    scanf("%f", &salary);

    printf("Enter bonus percentage: ");
    scanf("%f", &bonus);

    total = salary + (salary * bonus / 100);

    printf("Bonus Amount = %.2f\n", salary * bonus / 100);
    printf("Salary with Bonus = %.2f", total);

    return 0;
}
