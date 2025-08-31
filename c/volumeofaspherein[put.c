#include<stdio.h>
int main(){
    float radius;
    printf("enter the value of radius");
    scanf("%f",&radius);
    float volume=4*3.14*radius*radius*radius/3;
    printf("the volume of the sphere is:%f",volume);

    return 0;
}
