#include <stdio.h>// header file for input and output functions

int main(){
    int x = 0;
    do {
        printf("%d\n",x);// 1
        x += 2;//2
    }while (x < 21);// This loop will run 14 times, starting from 0 and ending at 13.
    /*This was go...while next is while loop */
    printf("This is the end of do while loop\n");
    int y = 0; // y = 19
    while (y != 21){ // n+1  
        printf("%d \n ",y); //  learn the syntax of while loop it is the best loop to use in C.
        y += 1; // try using y++ and see the difference(post and pre increment)
    }
    printf("This is the end of while loop\n");
    /*After this we have For loop*/
    for(int i = 0; i < 10;i+= 1 /*use other method*/){ // 1st is start,stop,increment or decrement
        printf("\n %d",i); // executed exp3 -> check exp2
    }
    printf("\nThis is the end of for loop\n");

}

// you can try out to use break; using conditonal statement  & continue; to skip the loop
// github.com/beastbroak30/Embedded_Life
//Create a program that takes no and prints wether the no is even or odd continues forever until the user enters 0.