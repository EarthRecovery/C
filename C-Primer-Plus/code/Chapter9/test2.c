#include <stdio.h>
void to_binary(unsigned long n);

int main(){
    unsigned long n;
    scanf("%ul",&n);
    to_binary(n);
    return 0;
}

void to_binary(unsigned long n){
    int r;
    r=n%2;
    if(n>=2){
        to_binary(n/2);
    }
    putchar(r==0 ? '0'  : '1');

    return;
}