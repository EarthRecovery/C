#include <stdio.h>
int sum(int * begin,int * end);

int main(){
    int ar[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(ar)/sizeof(int);

    printf("%d",sum(ar,ar+size));
}

int sum(int * begin,int * end){
    int size = (end-begin);
    int sum=0;

    for(int i=0;i<size;i++){
        sum+=*(begin+i);
    }

    return sum;
} 