#include <stdio.h>
#include <string.h>

int main(){
    // char temp[100];
    // char store[5][100];

    // int lim;
    // scanf("%d",&lim);

    // int lim2 = lim;
    // while(lim>0){
    //     gets(temp);
    //     strcpy(store[lim],temp);
    //     lim--;
    // }
    // char text[1000];
    // for(int i=0;i<lim2;i++){
    //     sprintf(text,"word: %s\n",store[i]);
    // }

    // puts(text);

    char a[100];
    char b[] = "fas";
    for(int i=0;i<=10;i++) sprintf(a,"hello,world %s",b);
    puts(a);
}