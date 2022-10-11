#include <stdio.h>

int mut_ok(int a,int b){
    int c = a*b;
    return !a || c/a==b;
}

int main(){
    printf("%d",mut_ok(100,100));
}