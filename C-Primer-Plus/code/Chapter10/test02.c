#include <stdio.h>

int main(){
    float rain[5][12];

    for(int i=0;i<5;i++){
        for(int j=0;j<12;j++){
            rain[i][j]=i*0.02+j*0.5;
        }
    }

    printf("%.2f",rain[2][10]);
}