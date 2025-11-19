#include <stdio.h>

int main() {
    int n, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        flag = 1;  // 0 and 1 are not prime
    } else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                flag = 1; // number is not prime
                break;
            }
        }
    }

    if (flag == 0)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);

    return 0;
}
