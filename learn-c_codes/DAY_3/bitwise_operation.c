#include <stdio.h>

#define MAX 4

int main(){
    printf("Bitwise Operators\n");
    printf("%d",~MAX); // 4 = 0000 0100, ~4 = 1111 1011 = -5
    printf("\n%d",MAX << 1); // 4 = 0000 0100, 4<<1 = 0000 1000 = 8
    printf("\n%d",MAX >> 1 ); // 4 = 0000 0100, 4>>1 = 0000 0010 = 2
    printf("\n%d",MAX & 5); // 4 = 0000 0100, 1 = 0000 0001, 4&1 = 0000 0000 = 0
    printf("\n%d",MAX | 1); // 4 = 0000 0100, 1 = 0000 0001, 4|1 = 0000 0101 = 5
    return 0;
}