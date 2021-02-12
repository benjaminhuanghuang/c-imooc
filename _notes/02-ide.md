# 第2章 C语言必备基础 试看
本章主要讲解演示编译环境搭建，IDE配置，调试方法，代码规范风格等内容，为课程后续内容做足准备工作。

共 5 节 (43分钟) 收起列表

## 2-1 环境搭建【CLion/MSVC/MinGW】 (09:34)
Windows
- VS
- MinGW
  Use msys2.org
```
  msys

  pacman -Su

  pacman -Sy base-devel

  pacman -S mingw-w64-x86_64-toolchain
```
Mac


CLion: 可以支持多套编译环境，VS and MinGW


## 2-2 第一行C语言代码【cmake工程结构】 (07:41)



## 2-3 程序调试方法 (13:05)试看
A CMakeList.txt
```
cmake_minimum_required(VERSION 3.17)

# ProjectId = current folder name
get_filename_componnet(ProjectId ${CMAKE_CURRENT_SOURCE_DIR} NAME)

# Replace " " with "_" in ProjectId
string(REPLACE " " "_" ProjectId, ${ProjectId})

set(CMAKE_C_STANDARD 11)

# collect all *.c files
file(GLOB files "${CMAKE_CURRENT_SOURCE_DIR}/*.c")


# add all *.c files to project
foreach(file ${files})
  get_filename_component(name ${file} NAME)
  add_executable(${name} ${file})
endforeach()

```


## 2-4 C语言的代码风格【Google C CodeStyle/CLion配置代码风格】 (11:53)

## 2-5 【加餐】背景知识