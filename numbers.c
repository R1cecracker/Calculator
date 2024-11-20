#include <stdio.h>

void oddOrEven(int n);
void timesTable(int n);
void square(int n);
void prime(int n);

int main(void)
{
    int number;

    printf("What's your number?\n");
    scanf("%d", &number);
    
    oddOrEven(number);
    timesTable(number);
    square(number);
    prime(number);
}

void oddOrEven(int n)
{
     if (n% 2 == 0){
        printf("%d is an even number.\n",n);
    } else {
        printf("%d is an odd number.\n",n);
    }
    return;
}

void timesTable(int n)
{
        printf("Times table for %d:\n", n);
    for (int i = 1; i <= 12; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

void square(int n)
{
    printf("The square of %d is: %d\n", n, n * n);

    int isPerfectSquare = 0;
    for (int i = 1; i * i <= n; i++) {
        if (i * i == n) {
            printf("%d is a perfect square (square of %d).\n", n, i);
            isPerfectSquare = 1;
            break;
        }
    }

    if (!isPerfectSquare) {
        printf("%d is not a perfect square.\n", n);
    }
}

void prime(int n)
{
    if (n <= 1) {
        printf("%d is not a prime number.\n", n);
        return;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            printf("%d is not a prime number.\n", n);
            return;
        }
    }

    printf("%d is a prime number.\n", n);
}