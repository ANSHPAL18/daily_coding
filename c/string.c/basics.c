#include <stdio.h>
#include<string.h>
int main(){
  char A[50];
//   gets(A);
//   puts(A);
scanf("%[^\n]s",A);
printf("%s",A);
    return 0;
}