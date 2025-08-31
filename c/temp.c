#include <stdio.h>
#include <math.h>

int main(){
    int n, num, originalNum, remainder, result, numDigits;

    // Input the upper limit from the user
    printf("Enter an upper limit: ");
    scanf("%d", &n);

    printf("Armstrong numbers between 1 and %d are:\n", n);

    // Iterate through each number from 1 to n
    for (num = 1; num <= n; num++) {
        originalNum = num;
        result = 0;
        numDigits = 0;
        int temp = num;

        // Count the number of digits in the number
        while (temp != 0) {
            temp /= 10;
            numDigits++;
        }

        temp = num;

        // Calculate the sum of the nth powers of each digit
        while (temp != 0) {
            remainder = temp % 10;
            result += pow(remainder, numDigits);
            temp /= 10;
        }

        // Check if the number is an Armstrong number
        if (result == num) {
            printf("%d ", num);
        }
    }

    return 0;
}
