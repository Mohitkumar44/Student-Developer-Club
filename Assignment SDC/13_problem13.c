#include <stdio.h>

int check(int arr[], int n) {
    int max_num = 0, num;

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }

        if (count > max_num) {
            max_num = count;
            num = arr[i];
        }
    }

    return num;
}

int main() {
    int arr[] = {1, 3, 2, 1, 4, 1, 3, 3,3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = check(arr, n);
    printf("Most frequent element is: %d", result);

    return 0;
}
