#include <stdio.h>

int main() {
    int i, j, isPrime;

    printf("Prime numbers between 1 and 20 are:\n");

    for (i = 2; i <= 20; i++) {
        isPrime = 1; // assume number is prime

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0; // not prime
                break;
            }
        }

        if (isPrime == 1)
            printf("%d ", i);
    }

    return 0;
}
