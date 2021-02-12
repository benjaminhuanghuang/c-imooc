# 4章 函数与程序结构
本章讲解C语言中函数的声明、实现以及使用方法，变量的类型和作用域。本章最后还会为你定制一个经典的汉诺塔的问题来实践函数的递归。相信通过本章的学习，你就可以独立完成一些基本功能的程序开发了。

共 6 节 (55分钟) 收起列表

## 4-1 函数基础【tips：Google命名规范】 (06:41)
函数命名： PascalCase


## 4-2 函数的原型【空参数列表与 C++的区别】 (08:50)
```
Func(){}
```
在 C 中表示返回值类型为 int


```
void EmptyParamList(){}
```
在 C 中表示可以有任意个参数
在 C++ 中表示没有个参数


## 4-3 变量的类型和作用域【Compiler Explorer查看汇编指令】 (16:26)
function scope
```
auto int value =0;        // auto 自动销毁， 需要初始化， 没有默认初值，GCC，MVC编译器处理略有不同

```

block scope
```
{
  int a = 0;

}
```

file scope, 文件内可见

```
int global_var;      // 会被初始化成 0 

void func(){
  static int var;    // 会被初始化成 0 
}
```

register
```
void PassByRegiser(register in var){

}
```


## 4-4 函数的变长参数【对比Java的变长参数】 (07:11)
```
#include <stdarg.h>

void HandleVarargs(int arg_count, ...){
  va_list args;
  
  va_start(args, arg_count);
  for(int i=0;i < arg_count; i++){
    int arg = va_arg(args, int);
  }
  va_end(args);
}
```

## 4-5 函数的递归【C语言实现斐波那契数列】 (10:22)

## 4-6 案例：汉诺塔 (05:29)s