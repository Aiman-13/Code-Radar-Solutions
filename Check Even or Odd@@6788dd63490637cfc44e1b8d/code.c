#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    b=a/2;
    if (b/2==0){
        printf("Odd");
    }
    else{
        printf("Even");
    }
    return 0;
}