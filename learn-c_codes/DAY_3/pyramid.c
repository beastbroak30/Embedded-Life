#include <stdio.h>
int main(){
    int i, j;
    for (i = 5; i > 0; i--) {
        for (j = 1; j <= i ; j++) {
            if (j == i){
                printf("%d",j);
            }
            else{
                printf("%d*",j);
            }
        }
        printf("\n");

    }
}