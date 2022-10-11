# Chapter4

### 字符串

字符串是一个数组

**数组**

```c
char name[40];//定义一个40长度的字符串
scanf("%s",name);
```

> 注意：数组创建不能使用 char* name的方式

字符串使用"%s"标记

**strlen()**

strlen函数定义在<string.h> 中

> sizeof 和strlen的区别：
>
> sizeof输出数组最大可用长度
>
> strlen输出数组被占用长度（字符数量）

### 常量和预处理器

```c
#define PI 3.1415926
```

> 注意：没有等号也没有分号

在<limits.h>和<float.h>头文件中定义了一些明示常量，分别与整形与浮点型有关

### const限定符

使用const修饰的常量将不可修改

比预处理器更加灵活

### printf()和scanf()

太复杂了自己看 ： ）

> printf() 有返回值，为输出的字符个数，失败返回负数

scanf() 输入指针
