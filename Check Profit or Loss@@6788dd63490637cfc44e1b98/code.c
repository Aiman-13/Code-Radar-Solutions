#include <stdio.h>
void main(){
    int a,b;
    scanf("%d%d", &a, &b);
    if ((a-b)>0){
        printf("Loss");
    }
    else if((a-b)<0){
        printf("Profit");
    }
    else{
        printf("No Profit No Loss");
    }
}