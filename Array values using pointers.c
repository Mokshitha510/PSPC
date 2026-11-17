#include <stdio.h>
int main(){
    int a[10],i,*p;
    p=a;
    printf("Enter array values\n");
    for(i=0;i<10;i++){
        scanf("%d",p+i);
    }
    printf("The array values are\n");
    for(i=0;i<10;i++){
        printf("%d\t",*(p+i));
    }
  return 0;
}
