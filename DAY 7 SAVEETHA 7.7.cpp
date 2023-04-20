#include<stdio.h>

#include <math.h>
int sumOfOdds(int n) {
    int sum = 0;
    for (int i = 1; i <= 2*n; i += 2) {
        sum += i;
    }
    printf("   %d     ",sum);
    return sum;
}
int sumOfEvens(int n) {
    int sum = 0;
    for (int i = 2; i <= 2*n; i += 2) {
        sum += i;
    }
    return sum;
}
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    double meanOfOdds = (double)sumOfOdds(n) / n;
    double meanOfEvens = (double)sumOfEvens(n) / n;
    printf("Mean of first %d odd numbers is: %lf\n", n, meanOfOdds);
    printf("Mean of first %d even numbers is: %lf\n", n, meanOfEvens);
    return 0;
}
