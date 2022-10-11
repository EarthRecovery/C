#include <stdio.h>
#define MSG "I have a word"
#define MAXLENGTH 81

int main(){
    char word[MAXLENGTH] = "what is your name";
    char * nice = "good job!";
    puts(MSG);
    puts(word);
    puts(nice);

    return 0;
}