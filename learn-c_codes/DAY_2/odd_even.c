#include <stdio.h>

int main(){
    int n = 0;

    printf("Enter a number (0 to exit): ");
    scanf("%d", &n);
    while (n != 0){
        if (n % 2 == 0){
            printf("%d is an even number\n", n);
            main(); //  this is a recursive call to main function, 
            //it will keep calling itself until n is 0
        }
        else{
            printf("%d is an odd number\n", n);
            main();
        } // in other we would use error handling in next chapter
    }
} //  use return, as it is  used in python also try!
//  you can use break; to exit the loop and continue; to skip the loop
