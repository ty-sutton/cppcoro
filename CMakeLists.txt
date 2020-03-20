cmake_minimum_required(VERSION 3.10)

# I'm terrible with CMAKE. Use this command line:
# cmake \ 
#   -DCMAKE_CXX_COMPILER=<path/to/gcc-10.0.1> \
#   "-DCMAKE_CXX_FLAGS=-std=c++2a -fcoroutines" \
#   <path/to/cppcoro>
# set(LANG_CXX_FLAGS "-std=c++2a -fcoroutines")

add_subdirectory(lib)
add_subdirectory(test)
