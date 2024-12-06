cmake_minimum_required(VERSION 3.10)
project(MathTool)

# 设置C++标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 包含目录
include_directories(
    ${CMAKE_SOURCE_DIR}/lib
    ${CMAKE_SOURCE_DIR}/tools
)

# 添加可执行文件
add_executable(math_tool
    main.cpp
    tools/about_pi.cpp
)

# 添加JSON库
target_include_directories(math_tool PRIVATE lib)

# 如果有其他库或依赖项，可以在这里添加
# target_link_libraries(math_tool 其他库)