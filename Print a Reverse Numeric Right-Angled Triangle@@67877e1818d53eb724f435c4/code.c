#include <stdio.h>
void main(){
    int n;
    scanf("%d", &n);
    for (int i=n; i>=n;i--){
        for (int j=0; j<=i; j++){
            printf("%d ", j+1);
        }
        printf("\n");
    }
}