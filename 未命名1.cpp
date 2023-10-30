#include <stdio.h>

int findMiddleIndex(int arr[], int n) {
    int leftSum = 0;
    int totalSum = 0;

    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    for (int i = 0; i < n; i++) {
        totalSum -= arr[i];

        if (leftSum == totalSum) {
            return i;
        }

        leftSum += arr[i];
    }

    return -1; // 如果不存在中心索引，则返回-1
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int middleIndex = findMiddleIndex(arr, n);

    if (middleIndex != -1) {
        printf("The middle index is: %d\n", middleIndex);
    } else {
        printf("There is no middle index in the array.\n");
    }

    return 0;
}

