#include <stdio.h>

#define True 1 // c doesn't have boolean data type, so we use 1 for true and 0 for false
#define False 0 

int main() {
    int a = 10, b = 20, result;

    // Arithmetic Operators
    printf("Arithmetic Operators:\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("b / a = %d\n", b / a);
    printf("b %% a = %d\n", b % a); // %% to escape %

    // Relational Operators
    printf("\nRelational Operators:\n");
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    // Logical Operators
    printf("\nLogical Operators:\n");
    printf("(a > 5 && b > 15): %d\n", (a > 5 && b > 15));
    printf("(a > 15 || b > 15): %d\n", (a > 15 || b > 15));
    printf("!(a > 15): %d\n", !(a > 15));

    // Bitwise Operators
    printf("\nBitwise Operators:\n");
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("b << 1 = %d\n", b << 1);
    printf("b >> 1 = %d\n", b >> 1);

    // Assignment Operators
    printf("\nAssignment Operators:\n");
    result = a;
    printf("result = a: %d\n", result);
    result += b;
    printf("result += b: %d\n", result);
    result -= a;
    printf("result -= a: %d\n", result);
    result *= b;
    printf("result *= b: %d\n", result);
    result /= a;
    printf("result /= a: %d\n", result);
    result %= b;
    printf("result %%= b: %d\n", result);

    return 0;
}
//  || is or operator, && is and operator, ! is not operator
//  ~ is bitwise not operator, & is bitwise and operator, | is bitwise or operator, ^ is bitwise xor operator
//  << is left shift operator, >> is right shift operator
//  % is modulus operator, %d is format specifier for integer, %f is format specifier for float, %c is format specifier for char
