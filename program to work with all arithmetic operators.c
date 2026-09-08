#include <stdio.h>
int main(){
    float x=0;
    float y=0;
    float a=0;
    float b=0;
    float c=0;
    float d=0;

    printf("Enter first value\n");
    scanf("%f",&x);
    printf("Enter second value\n");
    scanf("%f",&y);

    a= x+y;
    b= x-y;
    c= x*y;
    d=x/y;

    printf("Result addition = %.2f\nResult subtraction = %.2f\nResult multiplication = %.2f\nResult division = %.2f\n", a,b,c,d);

return 0;
}
