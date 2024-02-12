# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Find the gtkmm package
find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM REQUIRED gtkmm-3.0)

# 빌드 타겟 생성
add_executable(myapp src/main.cpp src/helloworld.cpp )

include_directories(
    ${GTKMM_INCLUDE_DIRS}
    include
    )

# Link your executable with gtkmm libraries
target_link_libraries(   myapp 
    ${GTKMM_LIBRARIES}
    )

message( "${GTKMM_INCLUDE_DIRS}")