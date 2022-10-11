#include <stdio.h>

int main(){
    int a  =2;
    float b = 1.5f;
    int c;

    c=a+b;
    b=(float)c/(float)a;
    printf("%d,%.2f",c,b);
}