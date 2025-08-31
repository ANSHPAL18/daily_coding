#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int reverse = 0;
    while (n != 0){ 
        reverse=reverse+(n%10);
        reverse=reverse*10;
        n=n/10;
        
    }
     reverse=reverse/10;
    printf("The reverse the given number is: %d\n", reverse);
    
    return 0;
}
