#include <stdio.h>
void binaru(int n);

int main(){
    int n;
    scanf("%d",&n);
    binary(n);
}

void binary(int n){
    if(n==0){
        return;
    }else{
        int q = n%2;
        printf("%d",q);
        binary(n/2);
    }
}