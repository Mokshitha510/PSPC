#include <stdio.h>
int main(){

    int x=0;
    int y=0;

    printf("Enter the first number\n");
    scanf("%d",&x);
    printf("Enter the second number\n");
    scanf("%d",&y);

    (x>y)?printf("%d is greater",x):printf("%d is greater",y);

    return 0;
}
