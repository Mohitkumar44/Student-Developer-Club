#include <stdio.h>

int main() {
    int first_term, common_difference, value_of_n;
    int sum = 0;

    printf("Enter the first term : ");
    scanf("%d", &first_term);

    printf("Enter the common difference of this AP : ");
    scanf("%d", &common_difference);

    printf("Enter the value of n : ");
    scanf("%d", &value_of_n);

    sum = (value_of_n / 2.0) * ((2 * first_term) + ((value_of_n - 1) * common_difference));
    printf("Sum of %d terms of this AP is : %d\n", value_of_n, sum);

    return 0;
}
