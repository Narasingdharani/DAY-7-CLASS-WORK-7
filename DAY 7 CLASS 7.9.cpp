#include <stdio.h>
#include <math.h>

int main()
{
    int n, sum = 0;
    float mean;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++)
    {
        sum += pow(i, 3);
    }
    
    mean = (float) sum / n;
    
    printf("The mean of the first %d cube numbers is %.2f", n, mean);
    
    return 0;
}

