#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0; // 0 and 1 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

// Main function to check the sum of two primes
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int found = 0; // Flag to check if we found a pair
    for (int i = 2; i <= num / 2; i++) {
        if (isPrime(i) && isPrime(num - i)) {
            printf("%d can be expressed as sum of %d and %d\n", num, i, num - i);
            found = 1;
            break; // Exit after finding the first pair
        }
    }

    if (!found) {
        printf("%d cannot be expressed as the sum of two prime numbers.\n", num);
    }

    return 0;
}
