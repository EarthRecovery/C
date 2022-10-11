#include <stdio.h>
#define COLS 2
#define ROWS 4
int sum2d(int ar[][COLS],int rows);

int main(){
    int target[4][2] = {
        {1,2},
        {3,4},
        {5,6},
        {7,8}
    };

    printf("%d",sum2d(target,ROWS));
}

int sum2d(int ar[][COLS],int rows){
    int tot = 0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<COLS;j++){
            tot+=ar[i][j];
        }
    }
    return tot;
}