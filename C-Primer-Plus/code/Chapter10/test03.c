#include <stdio.h>
#include <string.h>

int main(){
    int test[10];
    memset(test,0,sizeof());

    for(int i=0;i<10;i++){
        printf("%d\n",test[i]);
    }
    printf("\n%d",sizeof(test));
}