第7章 吃透指针 试看
本章将带你吃透C语言的指针，包括指针的运算、函数参数传递以及返回值的内存复制过程、动态内存分配、函数指针等特性的分析及应用。本章最后还会结合宏和指针深度剖析一个简单的交换变量值的多种实现方法以及指针版本的快速排序算法的实现。...

共 10 节 (106分钟) 收起列表

## 7-1 指针基础【摸清本质带你爱上指针】 (09:05)

## 7-2 只读指针变量与只读变量指针 (04:43)
```
  int *const cp = &a;         // int (*const)  const pointer points to int variable
  *cp = 2;    // OK
  cp = &b;    // Error

  int const *cp2 = &a         // (int const) pointer points to int
  *cp2 = 2;   // Error
  cp2 = &b;   // OK

  int const *const ccp = &a;
  ccp = &b;   // Error
  *cpp = 2;   // Error


```
## 7-3 特殊的指针【使用禁忌】 (09:35)

## 7-4 指针的运算【各式魔法操作】 (10:26)试看

## 7-5 左值和右值【只需记住这两点】 (06:54)
```
  左值描述内存空间

  右值是一个值


  &a = p;   // &a is the value of address, error

  *p + 1 = 3;  // error


```
## 7-6 指针参数作为返回值【通过汇编了解函数返回值机制】 (11:21)

## 7-7 动态内存分配【突破面试高频考点】 (14:30)
```
  int *ptr = malloc(sizeof(int) * length)     

  int *ptr = calloc(100, sizeof(int));         // set memory to 0

  int *ptr = realloc(oldPtr, sizeof(int) * newSize);    //  Does not set memory to 0

```

## 7-8 函数指针与typedef (14:09)
```
  void (*func)(int, int) = &Func;
  fucc(a, b);

  // 函数名是一个指针，对指针dereference 得到函数地址，然后可以调用
  (*func)(a, b);
  (*Func)(a, b);

  // 把函数名替换成 type name
  typedef int(*Func)(int, int); 
  Func func1 = &Add;


  typedef int *IntPtr;
  IntPtr p;


  typedef int IntArr[];
  IntAtt arr = {1,2,3};


  int (*(*foo)(void))[3];

  https://www.cdecl.org/
```
## 7-9 案例：交换两个变量的值 (14:49)

## 7-10 案例：指针版本的快速排序【Hoare分割法】 (10:03)