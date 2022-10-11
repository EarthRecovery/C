#include <stdio.h>

int main(){
    int a = 1;
    if(a==1){
        goto help;
    }else{
        goto map;
    }
    map: printf("wrong way!");
    help: printf("Hello world");
    
}