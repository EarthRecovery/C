#include <stdio.h>

typedef unsigned char* byte_pointer;

void print_byte(byte_pointer pointer, size_t size){
    size_t i;
    for(i=0;i<size;i++){
        printf("%.2x",pointer[i]);
    }
}

int main(){
    int a=24;
    byte_pointer q = (byte_pointer)&a;
    print_byte(q,sizeof(int));
    return 0;
}

// #include <stdio.h>
// typedef unsigned char* byte_pointer;
// void show_bytes(byte_pointer start,size_t len){
//     size_t i;
//         for(i=0;i<len;i++){
//             printf("%.2x",start[i]);
//           }
//    printf("\n");
//    }
// int main(){
//     int num = 114514;    
//     show_bytes((byte_pointer)&num,sizeof(int));
//     }