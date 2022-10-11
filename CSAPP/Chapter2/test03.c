#include <stdio.h>

int tmult_ok(int x,int y){
    int p = x*y;
    return !x || p/x == y;
}

int main(void){
    int x = 2000000;
    int y = 30000000;
    printf("%d",tmult_ok(x,y));
}