#include <stdio.h>
typedef unsigned char* byte_pointer;

int isSame(char x,char y){
    if(x ^ y == 0x00){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    char x = '1';
    char y = '1';
    int ans;
    ans = isSame((unsigned char)x,(unsigned char)y);
    printf("%d",ans);
    return 0;
}