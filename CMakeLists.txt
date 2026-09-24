cmake_minimum_required(VERSION 3.20)

project(cpp_text_adv VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(cpp_text_adv
    src/main.cpp
    src/handle_input.cpp
    src/classes/State.cpp
)

target_include_directories(cpp_text_adv PRIVATE
    ${PROJECT_SOURCE_DIR}/include
)

