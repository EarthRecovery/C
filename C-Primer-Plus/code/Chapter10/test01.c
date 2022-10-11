#include <stdio.h>

int main(){
    float candy[356];
    char code[64];
    int states[50];

    int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    for(int i=0;i<12;i++){
        printf("Month %2d has %2d days\n",i+1,month[i]);
    }
}