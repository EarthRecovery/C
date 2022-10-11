#include <stdio.h>

int main(){
    float a;
    float b;

    printf("input a side of a right-angled triangle:\n");
    scanf("%f",&a);
    printf("input another side of a right-angled triangle:\n");
    scanf("%f",&b);
    printf("The length of the longest side of triangle is %.2f",a*b);

}