#include <stdio.h>
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("after swap:1st=%d\t2nd=%d\n",a,b);
}
int main(){
    int x,y=0;
    printf("Enter two values:\n");
    scanf("%d\n%d",&x,&y);
    printf("before swap:1st=%d\t2nd=%d\n",x,y);
    swap(x,y);
    return 0;
}
