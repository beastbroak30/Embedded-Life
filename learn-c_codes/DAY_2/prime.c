#include <stdio.h>

int main(){
    int i,n,n1,sum;
    printf("enter the no:");
    scanf("%d",&n);
    if (n <= 0){
        printf("its not a prime no");
    }
    if (n <=3){
        printf("%d is prime\n",n);
    }
    else if (n%2 == 0){
        printf("%d is not prime\n",n);
    }
    else{
        for (i = 3; i*i <= n; i+=2){
            if (n%i == 0){
                printf("%d is not prime\n",n);
                break;
            }
        }
        if (i*i > n){
            printf("%d is prime\n",n);
        }
    }
}