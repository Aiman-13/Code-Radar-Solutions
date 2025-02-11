#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if (a & 0x80000000){
        printf("Not Set");
    }
    else{
        printf("Set");
    }
    return 0;
}