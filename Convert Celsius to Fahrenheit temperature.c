#include <stdio.h>
int main(){
    float celsius = 0.0f;
    float fahrenheit = 0.0f;
    printf("Enter the temperature(in Celsius)\n");
    scanf("%f", &celsius);
    fahrenheit= (celsius*9.0/5.0)+32;
    printf("The temperature in Fahrenheit is: %.2f", fahrenheit);
    return 0;
}
