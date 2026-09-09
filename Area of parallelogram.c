#include <stdio.h>
int main(){
    float base=0.0;
    float height=0.0;
    float area=0.0;
    printf("Enter the value for base\n");
    scanf("%f",&base);
    printf("Enter the value for height\n");
    scanf("%f",&height);
    area= base*height;
    printf("The area of the parallelogram is: %.2f", area);
    return 0;
    }
