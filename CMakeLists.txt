cmake_minimum_required(VERSION 3.0.0)
project(PlayGround VERSION 0.1.0)


add_subdirectory(src)



include(CTest)
enable_testing()

add_subdirectory(googletest)
add_subdirectory(test)
