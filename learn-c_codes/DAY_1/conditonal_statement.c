#include <stdio.h>

int main() {
    float a = 9.8, b = 9.11;  
    printf("a = %.6f, b = %.6f\n", a, b);

    if (a < b) {
        printf("a < b is true\n");
    }
    else if (a > b) {
        printf("a > b is true\n");
    }
    else {
        printf("a == b is true\n");
    }
    return 0;
}

// I know what you are thinking 9.8 & 9.11