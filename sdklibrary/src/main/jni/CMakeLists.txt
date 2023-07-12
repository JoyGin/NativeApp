# 指定最小cmake版本
cmake_minimum_required(VERSION 3.0.0)

# 设置so输出位置
# 这里从CMakeLists.txt的当前位置开始的，会自动创建libs以及abi分类文件夹
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/libs/${ANDROID_ABI})

# 设置cpp源文件位置及源文件
# 这里的相对路径从CMakeLists.txt文件位置开始
file(GLOB CPP_FILES "cpp/*.cpp")

# 这里指定头文件的位置
include_directories(include/)

# 设置生成的so名称及库类型
add_library(
        sdk
        SHARED
        ${CPP_FILES}
)
