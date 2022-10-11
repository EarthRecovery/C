#include <stdio.h>
void put1(const char * string){
    while(*string){
        putchar(*string++);
    }
}

void put1(const char * string){
    while(*string){
        putchar(*string++);
    }
}

int main(){
    char * string = "I have a dream";
    put1(string);
}