#include <stdio.h>

int main() {
    int n, i, sum = 0, count = 0;
    float mean;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i=2; i<=n; i+=2) {
        sum += i;
        count++;
    }

    mean = (float)sum / count;

    printf("Mean of even numbers from 2 to %d is %.2f", n, mean);

    return 0;
}

