#include <stdio.h>

int main()
{
    int arr[100], n, i, search, flag = 0;

    // Read the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Read the elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Read the element to be searched
    printf("Enter the element to be searched: ");
    scanf("%d", &search);

    // Search for the element in the array
    for (i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            flag = 1;
            break;
        }
    }

    // Display the result of the search
    if (flag)
    {
        printf("%d is present at position %d.\n", search, i + 1);
    }
    else
    {
        printf("%d is not present in the array.\n", search);
    }

    return 0;
}

// This program first reads the size of the array and 
// the elements of the array from the user. 
// It then reads the element to be searched.
// It then searches for the element in the array using a for loop.
// If the element is found, it sets the
// flag variable to 1 and breaks out of the loop. 
// If the element is not found, flag remains 0. Finally,
// the program displays the result of the search based 
// on the value of the flag variable.