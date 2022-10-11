int div_16(int a){
    if(a<0){
        int bias = 1<<4-1;
        a = a + bias;
    }
    return a>>4;
}

int main(){
    printf("%d",div_16(-100));
}