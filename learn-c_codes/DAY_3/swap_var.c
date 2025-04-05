#include <stdio.h>

int main(){
    int x = 5 , y = 3;
    printf("Before swapping: x = %d, y = %d\n", x, y);
    // Swapping using bitwise XOR operator
    x = x^y;
    y = x^y;
    x = x^y;
    // this can also be done using a temp var or using arthmetic operations
    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;   
}