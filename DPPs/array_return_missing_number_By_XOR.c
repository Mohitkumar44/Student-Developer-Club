#include <stdio.h>

int findMissing(int arr[], int n) {
    int xor_all = 0;  // XOR of all numbers from 0 to n
    int xor_arr = 0;  // XOR of all elements in the given array
    
    // XOR all numbers from 0 to n
    for (int i = 0; i <= n; i++) {
        xor_all ^= i;
    }
    
    // XOR all elements in the array
    for (int i = 0; i < n; i++) {
        xor_arr ^= arr[i];
    }

    // Missing number is the XOR difference
    return xor_all ^ xor_arr;
}

int main() {
    int arr[] = {0, 1, 2, 3, 5, 6};  // 4 is missing
    int n = sizeof(arr) / sizeof(arr[0]);

    int missingNumber = findMissing(arr, n);
    printf("Missing number: %d\n", missingNumber);

    return 0;
}
