#include <stdio.h>
int swap(int * x, int * y);

int main(){
    int x=5;
    int y=10;
    swap(&x,&y);
    printf("x=%d,y=%d",x,y);

}

int swap(int * x, int * y){
    int temp;
    temp = *x;
    *x = *y;
    *y= temp;
}