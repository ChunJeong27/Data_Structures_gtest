# cmake_minimum_required(VERSION <x.y.z.w>)
cmake_minimum_required(VERSION 3.0)

# project(<프로젝트 명>)
project("PointListMain")

# 변수 정의
# set(<변수명> <값>)
set(CMAKE_CXX_COMPILER g++)
#set(CMAKE_BUILD_TYPE Release)
# 목록 변수 정의
# set(<목록 변수명> <항목> <항목> <항목> ...)
set(SOURCE_FILES PointListMain.cpp ArrayList.cpp Point.cpp)
#set(CMAKE_PREFIX_PATH /usr/lib /usr/local/lib)
message("set vars: ${CMAKE_BUILD_TYPE}, ${SOURCE_FILES}")

# add_executable(<실행_파일명> <소스_파일> <소스_파일> ... )
# add_executable(myapp main.cpp foo.cpp bar.cpp)
add_executable(PointListMain.out ${SOURCE_FILES})