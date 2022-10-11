#include <stdio.h>

typedef unsigned char* byte_pointer;

_Bool is_little_endian(){
    int i = 1;
    unsigned char * pointer = (unsigned char *)&i;
    char q = pointer[0];
    if(q==1){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    printf("%d",is_little_endian());
}