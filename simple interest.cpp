#include <stdio.h>

int main() {
    float principle, rate, time, si;

    printf("Enter principle amount: ");
    scanf("%f", &principle);

    printf("Enter interest rate: ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    si = (principle * rate * time) / 100;

    printf("Simple Interest = %.2f", si);

    return 0;
}

