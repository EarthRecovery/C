#include <stdio.h>
#define ROWS 3
#define COLS 4
void sum_rows(int ar[][COLS], int rows);

int main(){
    int junk[ROWS][COLS] = {
        {2,4,6,8},
        {3,5,7,9},
        {12,10,8,6},
    };

    sum_rows(junk,ROWS);
    // sum_cols(junk,COLS);
    // printf("%d",sum2d(junk,ROWS));
}

void sum_rows(int ar[ROWS][COLS], int rows){
    int r;
    int c;
    int tot;

    for(r=0;r<rows;r++){
        tot=0;
        for(c=0;c<COLS;c++){
            tot+=ar[r][c];
        }
        printf("row%d,Sum=%d\n",r,tot);
    }
}