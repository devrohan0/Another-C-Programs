#include <stdio.h>

int main() {
    int arr[100], n, i, j, temp;

    // Read the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Read the elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array in ascending order
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Display the sorted array
    printf("The sorted array in ascending order is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


// This program first reads the size of the array and the elements
// of the array from the user. It then sorts the elements of the 
// array in ascending order using a nested for loop. The outer 
// loop iterates from 0 to n-1 and the inner loop iterates 
// from 0 to n-i-1. At each iteration, the loop checks if arr[j] 
// is greater than arr[j+1]. If so, it swaps the two elements 
// using a temporary variable temp. After the inner loop is finished, 
// the largest element in the unsorted part of the array is moved to 
// the end of the array. This process is repeated until the entire 
// array is sorted.

// Finally, the program displays the sorted array in ascending order.