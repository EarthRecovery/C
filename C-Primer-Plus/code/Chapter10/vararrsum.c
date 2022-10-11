#include <stdio.h>
int sum2d(int rows, int cols, int target[rows][cols]);

int main(){
    int rows = 3;
    int cols = 4;
    int target[rows][cols];

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            target[i][j] = i*2+j;
        }
    }

    printf("%d:",sum2d(rows,cols,target));
}

int sum2d(int rows, int cols, int target[rows][cols]){
    int tot = 0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            tot+=target[i][j];
        }
    }

    return tot;
}