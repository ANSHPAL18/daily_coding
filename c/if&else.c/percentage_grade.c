#include<stdio.h>
int main(){
    float s1,s2,s3,s4,s5;
    float per;
    printf("enter marks:");
    scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);
    per=(s1+s2+s3+s4+s5)/5;
    printf("percentage=%.2f",per);
    if(per>=90 && per<=100){
        printf("\nA grade");
    }
    else if(per>=80 && per<90){
        printf("\nB grade");
    }
    else if(per>=60 && per<80){
        printf("\nC grade");
    }
    else{
        printf("\nD grade");
    }
    return 0;
}