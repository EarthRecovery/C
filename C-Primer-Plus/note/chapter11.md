# Chapter11 字符串

字符串是以/0结尾的char数组

### puts

puts 函数在 <stdio.h> 中，会在输入框输出字符串并且自动加上换行符

```c
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
```

### 定义字符串

1. **字符串常量**

   ```c
   char word2[2] = "We";
   ```

   用双引号括起来的内容为字符串常量，自动加\0 

2. **字符串数组与初始化**

   ```c
   const char word[40] = "haaaaaaaaaaaa"
   ```

   其为填满部分使用/0填充

   通常，编译器会自动计算字符串大小

   ```c
   const char word[] = "haaaaaaaaaaaaaaaa";
   const char * word = "haaaaaaaaaaaaaaaaaaa";//效力相同
   ```

   同样合法

3. **数组与指针**

   数组新开了一片内存空间

   指针直接指向静态内存

   **总之，如果打算修改字符串，就不要用指针**（p279）

### 字符串数组

arrchar.c

```c
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

//return:
//Apple
//a
```

两者都可以（指针与数组）

使用指针表达占内存小但是会改静态内存(非const)

使用数组表达占内存大但是不会更改静态内存（const）

### 指针与字符串

字符串指针赋值作用是拷贝地址

## 字符串输入

### 空间分配

#### gets()

```c
int main(){
    char words[81];
    gets(words);
    puts(words);
    puts(words);
    printf("Done");
}
```

gets获取一行输入并且去除\n

但是一旦字符过长会buffer overflow

报错为segmentation fault(占用未分配内存)

#### fgets(),fputs()

```c
int main(){
    char words[81];

    fgets(words,81,stdin);
    fputs(words,stdout);
}
```

**fgets**三参数：

内存变量，最大个数，输入位置（文件）

fgets可获取\n

返回指向第一个char的指针

**fputs**两参数

变量，输出位置（文件）

#### gets_s()

与gets几乎一样

但是当超出缓冲时返回空指针（不必掌握）

#### scanf()

略

> 千万不要输出一个非字符串！

### 字符串函数

在string.h头文件中

#### strlen()

计算字符串长度（到\0）

#### strcat()

用于字符串拼接

```c
int main(){
    char w1[100];
    char w2[100];

    gets(w1);
    gets(w2);

    strcat(w1,w2);
    // puts(w2);
    puts(w1);
}
```

将w2 拼接到  w1上

w2不变

#### strncat()

用法与strcat相同，第三个参数用于限制w2的最大拼接量

#### strcmp()

用于比较字符串是否相等

返回0相等

```c
int main(){
    char w1[100] = "Apple";
    printf("%d",strcmp(w1,"Apple"));
}
```

#### strncmp()

与strcmp大致相同

第三个参数用于设定比较前n个字母

#### strcpy 与strncpy

用于字符串复制

```c
int main(){
    char temp[100];
    char store[5][100];

    int lim;
    scanf("%d",&lim);

    int lim2 = lim;
    while(lim>0){
        gets(temp);
        strcpy(store[lim],temp);
        lim--;
    }

    for(int i=0;i<lim2;i++){
        puts(store[i]);
    }
}
```

strncpy用法差不多，第三个参数限制拷贝的长度

#### sprintf()

```c
char a[100];
    char b[] = "fas";
    for(int i=0;i<=10;i++) sprintf(a,"hello,world %s",b);
    puts(a);
```

功能类似于printf，不过写入的是字符串

### 字符串排序

