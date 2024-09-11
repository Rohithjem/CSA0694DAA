#include <stdio.h>

void findMinMax(int arr[], int n, int *min, int *max) {
    *min = *max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < *min)
            *min = arr[i];
        if (arr[i] > *max)
            *max = arr[i];
    }
}

int main() {
    int arr[] = {5, 8, 2, 9, 4, 1, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min, max;
    findMinMax(arr, n, &min, &max);
    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    return 0;
}
