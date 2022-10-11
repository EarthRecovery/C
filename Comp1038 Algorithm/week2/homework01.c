#include <stdio.h>

int main(){
    double ori_mon = 1000;
    int years;
    scanf("%d",&years);
    for(int i=0;i<years;i++){
        ori_mon*=1.05f;
    }

    printf("%lf",ori_mon);
}