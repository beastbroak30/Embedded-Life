#include <stdio.h>
#include <math.h>

 // function to find the negative of a number
void user_func(int n)/*here n is a parameter for the no */{ 
    // using bitwise operator
    printf("%d is negative of %d",~n+1,n);
}

int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    user_func(x);
}



// create a func to find wether the 3 sides can form a triangle or not
// using the triangle inequality theorem (a + b > c) hint 