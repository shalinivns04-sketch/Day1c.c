#include <stdio.h>

int main() {
    long num1, num2;
    int count[10] = {0}; 

    printf("Enter first number: ");
    scanf("%ld", &num1);

    printf("Enter second number: ");
    scanf("%ld", &num2);

    
    while (num1 > 0) {
        count[num1 % 10]++;
        num1 /= 10;
    }

    
    while (num2 > 0) {
        count[num2 % 10]--;
        num2 /= 10;
    }

    
    for (int i = 0; i < 10; i++) {
        if (count[i] != 0) {
            printf("Numbers are NOT anagrams.\n");
            return 0;
        }
    }

    printf("Numbers are anagrams.\n");
    return 0;
}
