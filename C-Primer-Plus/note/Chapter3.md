# Chapter3

### 数据类型

##### int

> 在使用printf中，要确保转换的数量与声明的数量相等

八进制：%o

十六进制：%x

使用%#x,%#d,,%#o可以在输出前加0x,0X,或0

计算机中存储的数字会被自动识别为int,long int,long long...

可以在数字最后标注L或LL来表示使用long 或long long 存储

##### char

```c
char a = 'T';
char a = 65;
```

以上两种用法都是合法的

##### _Bool

表示true/false,1为true,0为false

##### inttypes.h 和 stdint.h

这两个头文件支持类如int32_t,int_fast8_t的数据类型

##### sizeof()

使用该函数获取数据类型大小