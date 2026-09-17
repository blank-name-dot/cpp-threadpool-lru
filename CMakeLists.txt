cmake_minimum_required(VERSION 3.20)
project(cpp_threadpool_lru CXX)

# C++20：线程池需要 jthread 时代的标准支持，20 最稳
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# 导出 compile_commands.json，供 clangd 做代码提示
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 从 GitHub 自动下载 googletest，本地无需手动安装
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
# Windows 下必须：防止 gtest 覆盖父项目的编译器设置（MSVC 相关）
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_subdirectory(src)
add_subdirectory(tests)
# 第 6 步做 benchmark 时再取消注释：
# add_subdirectory(benchmarks)
