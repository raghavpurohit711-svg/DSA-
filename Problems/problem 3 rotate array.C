#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void reverse(int arr[], int start, int end) {
    int temp;

    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

void rotate(int arr[], int n, int d) {
    d = d % n;
    if (d == 0)
        return;
    reverse(arr, 0, d - 1);

    reverse(arr, d, n - 1);

    reverse(arr, 0, n - 1);
}

int main() {
    int n, d;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    srand(time(NULL));

    printf("\nOriginal Array: ");

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;  
        printf("%d ", arr[i]);
    }

    printf("\n\nEnter number of positions to rotate: ");
    scanf("%d", &d);

    rotate(arr, n, d);

    printf("\nRotated Array: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
