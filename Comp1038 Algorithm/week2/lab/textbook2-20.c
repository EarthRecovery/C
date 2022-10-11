#include <stdio.h>

int main(){
    size_t time;

    printf("input the time in seconds:\n");
    scanf("%d",&time);

    int hour = time/3600;
    int minutes = time/60%60;
    int seconds = time-3600*hour-60*minutes;
    

    printf("%02d:%02d:%02d",hour,minutes,seconds);
}