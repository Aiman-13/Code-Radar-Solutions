#include <stdio.h>
void main(){
    int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        for (int j=0; j<n-i; j++){
            printf(" ",j);
        }
        for (int j=0; j<n; j++){
            printf("*", j);
        }
        for (int j=0; j<n-1; j++){
            printf("*", j);
        }
        printf("\n");
    }
}