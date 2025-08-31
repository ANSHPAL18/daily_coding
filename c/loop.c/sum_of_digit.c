#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int sum = 0;
    int r;

    while (n != 0)
    {
        r = n % 10; // Extract the last digit
        sum= sum + r; // Add the even digit to the sum
        n = n / 10; // Remove the last digit
    }
    
    printf("The sum of all digits in the number is: %d\n", sum);
    
    return 0;
}
