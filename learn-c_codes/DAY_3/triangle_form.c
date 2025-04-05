#include <stdio.h>


void triangle_form(int a, int b, int c){
    if (a + b > c && a + c > b && b + c > a){
        printf("The sides can form a triangle\n");
    }
    else{
        printf("The sides cannot form a triangle\n");
    }
}

int main(){
    int a, b, c;
    printf("Enter the sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    triangle_form(a, b, c);
    return 0;
}
