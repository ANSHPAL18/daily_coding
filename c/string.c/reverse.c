#include <stdio.h>
#include<string.h>
int main(){
    char a[500];
    puts("enter string:");
    gets(a);
   int size=strlen(a);
    for(int i=0,j=size-1;i<=j;i++,j--){
        char temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    puts("the reverse string is:");
    puts(a);
    return 0;
}