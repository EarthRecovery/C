#include <stdio.h>

int main(){
    char a;
    int word = 0;
    int charNum = 0;

    while((a = getchar()) != '\n'){
        charNum++;
        if(a == ' '){
            word++;
        }
    }
    word++;

    printf("Therre is %d words and %d char",word,charNum);
}