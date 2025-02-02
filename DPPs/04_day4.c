#include <stdio.h>

int main() {
    int n;
    // taking inputs
    printf("Enter the value of n : ");
    scanf("%d", &n);
    
    // intiate with two starting number
    long long first = 0, second = 1, next;
    
    // starting two positions
    if (n == 1){
        printf("Number at position %d in series is : %lld\n",n,first);
    }
    else if (n == 2){
        printf("Number at position %d in series is : %lld\n",n,second);
    }

    // for other positions
    else{
        for (int i = 3; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }
        printf("Number at Position %d in seriesis : %lld\n", n, next);
    }

    return 0;
}