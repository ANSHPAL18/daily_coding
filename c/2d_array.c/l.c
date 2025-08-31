#include <stdio.h>

int main(){
    int n,c=1;
    scanf("%d",&n);
    while(n!=1){   
     if(n%2==0){
        n=n/2;
    }
    else{
        n=n*3+1;
    }
        printf("%d\n",n);
        c=c+1;
}   
printf("\n%d",n);
   printf("the length of the sequence is %d",c);
return 0;
}

