#include <stdio.h>
#include <string.h>

int main(){
    char w1[100];
    char w2[100];

    gets(w1);
    gets(w2);

    strcat(w1,w2);
    // puts(w2);
    puts(w1);
}
