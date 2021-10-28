
set (lib_files 
    hello.cpp
)


add_library(lib_hello hello.cpp)
target_include_directories(lib_hello PUBLIC ${CMAKE_CURRENT_LIST_DIR})

add_executable(SayHello main.cpp)
target_link_libraries(SayHello lib_hello)

