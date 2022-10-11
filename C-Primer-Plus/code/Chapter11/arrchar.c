#include <stdio.h>
int main(){

    char *words[] = {
        "Apple",
        "banana",
        "mace"
    };

    char newWords[][3] = {
        "a",
        "b",
        "c"
    };

    puts(words[0]);
    puts(newWords[0]);

    return 0;
}