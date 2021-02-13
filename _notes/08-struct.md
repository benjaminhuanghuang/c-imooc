第8章 聚合数据类型
本章将讲解C语言的聚合数据类型，包括结构体、联合体、枚举等特性及应用，也重点剖析结构体的内存对齐特性，本章最后会结合前面的知识给出字节序判断和单链表的基本实现的案例。

共 6 节 (76分钟) 收起列表

## 8-1 结构体【内存占用分析】 (15:34)
```
  struct Person {
    char *name;
    int age,
    char *id
  } ;

  // Type 
  typedef struct Person {
    char *name;
    int age,
    char *id
  } Persion;

  struct Person p = {
    "tom",
    // age is 0
    .id="1233"
  };

  p.age = 30;

  struct Person *pp = &p;

  pp->name = "jack";

  size_t s = sizeof(struct Person);
  size_t s = sizeof(p);

  typedef struct Person Person;

  Person p
```

## 8-2 结构体的内存对齐【内存占用优化】 (14:42)

## 8-3 联合体【使用场景分析】 (08:32)
```
  typedef union Operand {
    int int_;           // 4
    double double_;     // 8
    char *str_          // 8
  } Operand;

  Operand operand = {.int=5, .double_=2.0}

   
```
## 8-4 枚举【多语言对比】 (12:25)

```
typedef enum FileFormat{
  PNG, JPEG = 10, BMP, UNKNOW       // JPEG 后面的 BMP = 11
} FileFormat;


FileFormat ff = 100;    // 不会报错
```



## 8-5 案例：判断字节序 (07:03)


## 8-6 案例：单链表的基本实现 (16:47)