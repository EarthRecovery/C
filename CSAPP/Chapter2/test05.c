#include <stdio.h>

int mut_ok(int a,int b){
    __int64 pll;
    pll = (__int64) a*b;
    return (int)pll == pll;
}


int main(){
    printf("%d",mut_ok(100000000,1000000000));
}