#include <stdio.h>
#include <math.h>
int main(){
    float radius= 0;
    float pi= 3.14;
    float area=0;
    printf("Enter the radius of the circle");
    scanf("%f", &radius);
    area= pi*pow(radius,2);
    printf("The area of the circle is: %f", area);
    return 0;
}
