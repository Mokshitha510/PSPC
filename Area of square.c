#include <stdio.h>
#include <math.h>
int main(){
    float side= 0.0f;
    float area= 0.0f;
    printf("Enter the side of the square\n");
    scanf("%f", &side);
    area= pow(side,2);
    printf("The area of the circle is: %.2f",area);
    return 0;
}
