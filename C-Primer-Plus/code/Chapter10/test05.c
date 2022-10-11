#include <stdio.h>

int main(){
    int x = 20;
    const int y = 23;
    int *p1;
    p1 = &x;
    const int *p2 = &y;
    const int ** pp2;
    p1 = p2;
    p2 = p1;
    pp2 = &p1;
}
