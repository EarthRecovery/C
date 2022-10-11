#include <stdio.h>
#include <string.h>

char list[1000];
char list2[1000];

void D2B(int target){
    int top=0;
    while(target>0){
        int t = target%2;
        if(t==1){
            list[top] = '1';
        }else{
            list[top] = '0';
        }
        target/=2;
        top++;
    }
    char list2[1000];
    int len = strlen(list);

    for(int i=len;i>=0;i--){
        list2[len-i]=list[i];
    }
    list2[0] = ':';
    puts(list2);

}

int main(){
    int target=12;
    D2B(target);
}
