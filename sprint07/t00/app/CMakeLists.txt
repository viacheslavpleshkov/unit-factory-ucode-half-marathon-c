set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} -std=c++17)
project(Vector)

include_directories(src)
add_subdirectory(utils)

file(GLOB CPPS "src/*.cpp" "main.cpp")

add_executable(${PROJECT_NAME} ${CPPS})
target_link_libraries(${PROJECT_NAME} PUBLIC algorithmUtils)
target_include_directories(${PROJECT_NAME} PUBLIC
        "${PROJECT_BINARY_DIR}"
        "${PROJECT_SOURCE_DIR}/utils")