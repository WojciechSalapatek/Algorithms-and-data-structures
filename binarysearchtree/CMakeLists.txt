
project(binarysearchtree)

set(HEDEAR_FILES
BinarySearchTree.h)
set(SOURCE_FILES
BinarySearchTree.cpp)

add_library(libbinarysearchtree
STATIC ${SOURCE_FILES}
)
target_include_directories(libbinarysearchtree
PUBLIC .)

add_executable(binarysearchtree
${SOURCE_FILES} main.cpp)

target_link_libraries(binarysearchtree
libbinarysearchtree)
