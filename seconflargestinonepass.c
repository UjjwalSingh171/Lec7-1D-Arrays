#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("There must be at least 2 elements in the array to find the second largest element.\n");
        return 1;
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        int num;
        printf("Enter element %d: ", i + 1);
        scanf("%d", &num);

        if (num > largest) {
            secondLargest = largest;
            largest = num;
        } else if (num > secondLargest && num != largest) {
            secondLargest = num;
        }
    }

    if (secondLargest == INT_MIN) {
        printf("There is no second largest element in the array.\n");
    } else {
        printf("The second largest element in the array is: %d\n", secondLargest);
    }

    return 0;
}
