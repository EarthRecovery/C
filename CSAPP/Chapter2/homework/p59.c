#include <stdio.h>

size_t numCombine(size_t x,size_t y){
    size_t mask = 0xff;
    size_t result = (x & mask)|(y & ~mask);
    return result;
}

int main(){
    size_t x = 0x89ABCDEF;
    size_t y = 0x76543210;

    printf("%#x",numCombine(x,y));
};