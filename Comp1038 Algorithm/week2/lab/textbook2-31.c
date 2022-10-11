#include <stdio.h>

int main(){
    printf("number\tsquare\tcube\n");

    for(int q=0;q<=10;q++){
        printf("%d\t%d\t%d\n",q,q*q,q*q*q);
    }
}