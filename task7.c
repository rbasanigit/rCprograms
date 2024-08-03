#include <stdio.h>
int main() {
    int size, target;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int nums[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target value: ");
    scanf("%d", &target);

    int result[2] = {-1, -1};  

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                break;
            }
        }
        if (result[0] != -1) {
            break;
        }
    }

    if (result[0] != -1 && result[1] != -1) {
        printf("Indices: %d, %d\n", result[0], result[1]);
    } else {
        printf("No two sum solution found.\n");
    }

    return 0;
}
