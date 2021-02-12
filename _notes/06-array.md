# 第6章 玩转数组
本章将带你吃透C语言中的数组，包括数组在内存当中的存储形式，字符串的基本概念，数组作为函数参数传递等内容。本章最后也会带你就数组元素的排序这一经典问题进行实践，加深对数组本身的理解。

共 7 节 (62分钟) 收起列表

## 6-1 数组基础【C语言设计哲学】 (10:34)
```
  // 初始值不确定, MSVC init the element in array to 0xC = 1100
  int arr[5];


  // 编译器会把余下的元素初始化为 0
  int arr[5] = {1,3,4};

  // c99
  int arr[5] = {[2] = 1} 
  int arr[5] = {[2] = 1 , 2, 3};

  // c99 支持用变量声明数组长度, MSVC/c90 要求用const number, const int 也不行 
  int len =2;
  int arr[len];


```
## 6-2 数组的边界 (09:50)

## 6-3 字符串 (08:35)
```
  char str[11] = "Hello world";   // 必须要加上 \n, 否则字符串处理函数无法正常工作
  printf("%s", str);              // display 0xC


  char str[] = "Hello world";

  // 用Unicode encode tool可以看到str_zh中的UTF编码,
  char str_zh[] = "中文"

  wchar_t ws[]= "中文"      // unsigned short

```

## 6-4 函数的数组类型参数【C语言极致效率之源】 (04:45)

## 6-5 二维数组【数组参数的正确使用姿势】 (10:11)

## 6-6 案例：打乱数组的顺序【各种场景应用】 (06:02)

## 6-7 案例：数组元素的排序【Lomuto分割法】 (11:04)

