#include <stdio.h>
void up_and_down(int n){
    printf("Level %d, n location %p\n",n,&n);
    if(n<4){
        n++;
        up_and_down(n);
    }
    printf("Level %d, n location %p\n",n,&n);
}

int main(){
    up_and_down(1);
}