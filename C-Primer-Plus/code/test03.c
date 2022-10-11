#include <stdio.h>

int main(){
    unsigned a = 2147483648;
    unsigned b = 2;
    unsigned c = a/b;
    printf("%u",a/b);
}