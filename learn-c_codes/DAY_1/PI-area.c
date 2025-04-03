#include <stdio.h> // Header file for input and output functions

#define PI 3.14// Define a constant for PI
float r;

int main(){
    printf("Input the radius of the circle: ");
    scanf("%f",&r);
    printf("Area of circle = %f",PI*r*r); // Calculate and print the area of the circle using integer format specifier
}