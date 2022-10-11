# Chapter10

### 数组

```c
    float candy[356];
    char code[64];
    int states[50];
```

数组定义

#### 数组初始化

```c
int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
```

1. 使用{}做初始化

> 将数组设置为只读
>
> ```c
> const int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
> ```
>
> 加const就行了

> 省略大括号里面的值可以让编译器自动给匹配数组大小

#### sizeof

使用sizeof(pointer)计算数组大小（拥有多少字节）

注意：不是数组个数！使用

```c
sizeof(list)/sizeof(list[0])
```

获取数组个数

### memset

使用string.h下的memset可快速初始化数组元素

```c
    int test[10];
    memset(test,0,sizeof(test));
```

设置为0



#### 指定初始化器（C99）

```c
#define MONTH 12
int days[MONTH] = {31,28,[4]=31,30,31, [1]=29};
//等价于
int days[MONTH] = {31，29，0，0，31，30，31，0，0，0，0，0};
```

从第四位插入{31，30，31}

第一位改成{29}

> 如果大括号里为空，数组大小会设置为能容纳的最小值

#### 数组赋值

略

### 多维数组

定义

```c
float rain[5][12];
```

初始化二维数组

```c
    float rain[5][12];

    for(int i=0;i<5;i++){
        for(int j=0;j<12;j++){
            rain[i][j]=i*0.02+j*0.5;
        }
    }
```

或者可以考虑使用{}套{}的方式，不再深入描述

### 指针与数组

数组名是数组首字母的指针

```c
int main(){
    int test[10] = {1,2,3,4,5,6,7,8,9,10};

    printf("%d",*test);//output 1
}
```

本质的上说，

```c
ar[n] == *(ar+n)
```

注意到：

> 地址数加一并不是地址加一，而是加上基本类型的大小
>
> 地址的减法同样要除以基本类型的大小
>
> ```c
>     int test[10] = {1,2,3,4,5,6,7,8,9,10};
> 
>     printf("%d\n",test); //-1117784464
>     printf("%d\n",test+1);//-1117784460
> ```



### 函数，数组与指针

注意：数组名称所对应的指针无法得出数组大小

一个简单的sum程序：

```c
#include <stdio.h>
int sum(int * begin,int * end);

int main(){
    int ar[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(ar)/sizeof(int);

    printf("%d",sum(ar,ar+size));
}

int sum(int * begin,int * end){
    int size = (end-begin);
    int sum=0;

    for(int i=0;i<size;i++){
        sum+=*(begin+i);
    }

    return sum;
} 
```



### 指针的基本操作

赋值

加法/递加

减法/递减

指针相减

比较（指针可以相互比较，前提是指向同一数据类型）

> 不要解引用未初始化的值
>
> ```c
> int *ptr;
> *ptr = 5//strong err
> ```

### 数组数据保护

使用const防止函数错误修改数组内容

```c
int sum(const int * ar)
```

这样编译器会将修改ar所指向的内存数据的操作视为错误并报错

### const

1. ```c
   const double PI = 3.1415926
   #define PI 3.1415926
   ```

   两者作用相同

2. 对数组施加const对数组指针的值无影响

   ```c
   const int test[5] = {1,2,3,4,5}
   int main[3] = {1,2,3};
   test = main;//ok
   ```

3. 如果不想改变指针的值可以使用两次const

   ```c
   const int const test[5] = {1,2,3,4,5}
   ```

### 多维数组指针

![e887d2ad6ccc2ec91501976f1bd306d](C:\Users\earth_recovery\Desktop\Code-Learning\C\C-Primer-Plus\note\assets\e887d2ad6ccc2ec91501976f1bd306d.jpg)

### 指针兼容性

一般来说指针只允许同一类型之间互相交换

const和非const之间交换会有警告（c++直接报错）

嵌套指针赋值同样是危险的，可能使const失效

### 函数与多维数组

如何在函数中传递多维数组？

1. ```c
   int (*ar)[COLS]
   ```

2. ```c
   int ar[][COLS]
   ```

3. ```c
   ar[ROWS][COLS]//同样可以，但是前一个大括号内的内容会被省略
   ```


根本原理：

```c
ar[]==(*ar)
```

函数需要知道多维数组指针加一到底要在地址上加多少

### VLA变长数组

可以使用变量来规定数组的大小（仅在初始化的时候）

使用VLA计算sum2d

```c
int main(){
    int rows = 3;
    int cols = 4;
    int target[rows][cols];

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            target[i][j] = i*2+j;
        }
    }

    printf("%d:",sum2d(rows,cols,target));
}

int sum2d(int rows, int cols, int target[rows][cols]){
    int tot = 0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            tot+=target[i][j];
        }
    }

    return tot;
}
```

> VLA无法进行初始化赋值了（悲）
>
> 只能创建后赋值或者memset

### 复合字面量
