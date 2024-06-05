#include <stdio.h>

// Function to calculate the sum of the series recursively
int series_sum(int n) {
    // Base case: when n is 1, the series is just the first term
    if (n == 1) {
        return 2;
    }
    // Recursive case: the nth term is 2n, add it to the sum of the series up to (n-1)
    return 2 * n + series_sum(n - 1);
}

int main() {
    int n;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the series
    int result = series_sum(n);

    // Print the result
    printf("The sum of the series is: %d\n", result);

    return 0;
}
