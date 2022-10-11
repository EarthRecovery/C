#include <stdio.h>
#include <string.h>

int isValid(char* s){
    int n = strlen(s);
    if(n%2==1){
        return 0;
    }
    char stack[n+1];
    int top = 0;
    for(int i=0;i<n;i++){
        char tar = s[i];
        if(tar=='[' || tar=='(' || tar=='{'){
            stack[top] = tar;
            top++;
        }else{
            char inchar;
            if(tar==']'){
                inchar = '[';
            }else if(tar==')'){
                inchar ='(';
            }else if(tar=='}'){
                inchar = '{';
            }else{
                return 0;
            }
            if(top==0 || stack[top-1]!=inchar){
                return 0;
            }else{
                top--;
            }
        }
    }

    if(top==0){
        return 1;
    }
    return 0;
}

int main(){
    char* s = "(){}";
    printf("%d",isValid(s));
}