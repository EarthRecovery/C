#include <stdio.h>
int fact(int n);
int r_fact(int n,int res);
int res=1;

int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",fact(n));
    printf("%d\n",r_fact(n,res));
}

int fact(int n){
    int res = 1;
    for(int i=1;i<=n;i++){
        res*=i;
    }
    return res;
}

int r_fact(int n,int res){
    if(n==0){
        return res;
    }else{
        res*=n;
        r_fact(n-1,res);
    }
}