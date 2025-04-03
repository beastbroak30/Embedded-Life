#include <stdio.h>

int k = 1;
int a = 1; 
int main(){
    int n = 0;
    int n2 = 0;
    n = k++; // Post-increment: assigns `k` to `n` before incrementing `k`
    printf("k = %d \nn = %d\n",k,n);
    n2 = ++a; // Pre-increment: increments `a` before assigning it to `n2`
    printf("a = %d \nn2 = %d\n",a,n2);
}

//char or 