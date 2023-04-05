#include <stdio.h>

int main() {
    int n, i, factorial = 1;

    // Read the number from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate the factorial of the number
    for (i = 1; i <= n; i++) {
        factorial *= i;
    }

    // Display the factorial
    printf("The factorial of %d is %d.\n", n, factorial);

    return 0;
}
