#include <stdio.h>

unsigned replace_byte( unsigned x, int i, unsigned char b){
    size_t mask = 0xff<<i*4;
    printf("%#x\n",mask);
    unsigned ans = (x&~mask)|b<<i*4;
}

int main(){
    printf("%#x",replace_byte(0x12345678,1,0xab));
};
