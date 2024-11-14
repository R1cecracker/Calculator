#include <stdio.h>
#include <cs50.h>

int main() {

    // Create an integer variable that will store the number we get from the user
    int mark;
    int myNum;
    // Ask the user to type a number
    printf("Type a mark: \n");

    // Get and save the number the user types
    scanf("%d", &mark);

    switch (mark) {
        case 85 ... 100:
            printf("High Distinction\n");
            break;


        case 75 ... 84:
            printf("Distinction\n");
            break;

        case 65 ... 74:
            printf("Credit\n");
            break;
            

        case 50 ... 64:
            printf("Pass\n");
            break;

        
        default:
            printf("FAIL\n");
        
    }
}