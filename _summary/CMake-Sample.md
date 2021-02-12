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
  target_compile_definitions(${name} PUBLIC DEBUG)     # #define DEBUG
endforeach()

```