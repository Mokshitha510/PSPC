#include <stdio.h>
int main(){
    int x=0;
    float y=0;
    float result=0;
    printf("Enter your first number\n");
    scanf("%d",&x);
    printf("Enter your second number\n");
    scanf("%f",&y);
    result = x/y;
    printf("The division result is: %.2f", result);
    return 0;
}
