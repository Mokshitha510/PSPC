#include <stdio.h>
int main(){
    float celsius = 0.0f;
    float fahrenheit = 0.0f;
    printf("Enter the temperature(in Fahrenheit)\n");
    scanf("%f", &fahrenheit);
    celsius= (fahrenheit-32)*5.0/9.0;
    printf("The temperature in Celsius is: %.2f", celsius);
    return 0;
}
