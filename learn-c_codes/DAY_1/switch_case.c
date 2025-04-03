#include <stdio.h>

char a;  // you could try to make it whether its vowel or not
// switch case takes only int or char as input note !
int main(){ 
    printf("Enter a character: ");
    scanf(" %c", &a); // Note the space before %c to consume any newline character

    switch (a) {
        case 'a':
            printf("You entered 'a'\n"); // switch case is used for multiple if-else statements 
            break;
        case 'b':
            printf("You entered 'b'\n");
            break;
        case 'c':
            printf("You entered 'c'\n");
            break;
        default:
            printf("You entered a character other than 'a', 'b', or 'c'\n");
    }

    return 0;
}