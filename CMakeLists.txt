cmake_minimum_required(VERSION 3.14)
project(dpiserver)

set(CMAKE_CXX_STANDARD 11)

add_executable(dpiserver main.cpp model/Channel.cpp model/Channel.h model/TrafficRule.cpp model/TrafficRule.h)