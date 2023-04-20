#include <stdio.h>

int main() {
    int arr[6] = {22,88,33,44,99,11};
    int i, min, max;
    
    min = arr[0];
    max = arr[0];
    for (i = 1; i < 6; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    
    return 0;
}
