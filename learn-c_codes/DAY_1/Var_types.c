#include <stdio.h> // Header file for input and output functions

// int,long, float, double, char are the basic data types in C
int main(){
    float a = 1.0;
    float b1, b2; // Variables to store user input
    printf("%f\n", a); // print float variable
    // To accept we can use scanf
    printf("Enter a no: ");
    scanf("%f %f", &b1, &b2);  // accept float variable with validation
    printf("add:%f \nmultiply: %f", b1 + b2, b1 * b2); // print float variable
}
// The above code is a simple C program that demonstrates the use of float variables and user input.