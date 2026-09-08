#include <stdio.h>
int main(){
    int x=0;
    int y=0;
    int result=0;
    printf("Enter your first number\n");
    scanf("%d", &x);
    printf("Enter your second number\n");
    scanf("%d", &y);

    result = x-y;
    printf("The result of the subtraction is: %d", result);
    return 0;
}
