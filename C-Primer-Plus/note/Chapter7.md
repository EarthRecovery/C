# Chapter7

### getchar and putchar

getchar() 从输入字符中提取一个元素

相当于

```c
scanf("%c",&ch);
```

同理，putchar打印一个单独的字符

相当于

```c
printf("%c",sh);
```

### 缓冲区

sacnf和getchar先看缓冲区有没有数据，若有数据则先从缓冲区拿走数据，若没有则从键盘输入数据

假如scanf了abcd\n再getchar()

> 由于程序开始进行，到scanf之前缓冲区没有数据，于是键盘输入数据abcd\n，存在缓冲区中，而scanf将abcd放在password中，只剩下\n在缓冲区中，于是到了getchar也是先看缓冲区有没有数据，getchar检测到了\n，于是getchar就不从键盘输入数据了，直接拿走缓冲区中的\n。

### ctype.h

拥有类似于isalpha()的字符判断函数

### ISO646.h

在该头文件中可以将and代替&&,or代替|| ,not代替!

### goto

> 避免使用goto
>
> 因为可能会有bug

```c
//使用案例
#include <stdio.h>

int main(){
    int a = 1;
    if(a==1){
        goto help;
    }else{
        goto map;
    }
    map: printf("wrong way!");
    help: printf("Hello world");
    
}
```

