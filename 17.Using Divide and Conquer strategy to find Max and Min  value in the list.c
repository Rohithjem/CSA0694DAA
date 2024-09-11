#include <stdio.h>

struct Pair {
    int min;
    int max;
};

struct Pair findMinMax(int arr[], int low, int high) {
    struct Pair minmax, left, right;
    if (low == high) {
        minmax.min = minmax.max = arr[low];
        return minmax;
    }

    if (high == low + 1) {
        if (arr[low] > arr[high]) {
            minmax.max = arr[low];
            minmax.min = arr[high];
        } else {
            minmax.max = arr[high];
            minmax.min = arr[low];
        }
        return minmax;
    }

    int mid = (low + high) / 2;
    left = findMinMax(arr, low, mid);
    right = findMinMax(arr, mid + 1, high);

    minmax.min = (left.min < right.min) ? left.min : right.min;
    minmax.max = (left.max > right.max) ? left.max : right.max;

    return minmax;
}

int main() {
    int arr[] = {1000, 11, 445, 1, 330, 3000};
    int n = sizeof(arr) / sizeof(arr[0]);
    struct Pair minmax = findMinMax(arr, 0, n - 1);

    printf("Minimum element is %d\n", minmax.min);
    printf("Maximum element is %d\n", minmax.max);
    return 0;
}
