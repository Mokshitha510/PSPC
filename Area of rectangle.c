#include <stdio.h>
int main(){
    float length=0.0;
    float breadth=0.0;
    float area=0.0;
    printf("Enter the value for length\n");
    scanf("%f",&length);
    printf("Enter the value for breadth\n");
    scanf("%f",&breadth);
    area= length*breadth;
    printf("The area of the rectangle is: %.2f", area);
    return 0;
    }
