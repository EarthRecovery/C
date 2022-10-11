#include <stdio.h>
int sum(int * ar,int sizeInt);

int main(){
    int ar[10] = {1,2,3,4,5,6,7,8,9,10};
    int sizeInt = sizeof(ar)/sizeof(int);

    printf("%d\n",sizeof(ar)/sizeof(int));
    printf("%d\n",sum(ar,sizeInt));
    return 0;
}

int sum(int * ar,int sizeInt){
    int sum=0;
    for(int i=0;i<sizeInt;i++){
        sum+=*(ar+i);
    }
    return sum;
} 