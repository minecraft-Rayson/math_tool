cmake_minimum_required(VERSION 3.10)
project(MathTool)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 查找依赖库
find_package(nlohmann_json REQUIRED)

# 包含头文件路径
include_directories(
    ${nlohmann_json_INCLUDE_DIRS}
    ./tools
    ./lib
)

# 添加可执行文件
add_executable(math_tool main.cpp)

# 链接库
target_link_libraries(math_tool ${nlohmann_json_LIBRARIES})