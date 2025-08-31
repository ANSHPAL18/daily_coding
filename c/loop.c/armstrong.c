#include <stdio.h>
#include <math.h>

int main() {
    int i,n;
    printf("enter number within which armstrong numbers is to be detect=");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++) {
        int sum = 0, temp, remainder, c = 0;
        
        temp = i;
        while (temp != 0) {
            temp /= 10;
            c++;
        }

        temp = i;
        while (temp != 0) {
            remainder = temp % 10;
            sum += pow(remainder, c);
            temp /= 10;
        }

        if (sum == i) {
            printf("%d is an Armstrong number.\n", i);
        }
    }
    
    return 0;
}
