
project(utilities)

set(HEDEAR_FILES
BinaryTreeUtil.h)
set(SOURCE_FILES
BinaryTreeUtil.cpp)

add_library(libutilities
STATIC ${SOURCE_FILES}
)
target_include_directories(libutilities
PUBLIC .)

add_executable(utilities
${SOURCE_FILES} main.cpp)

target_link_libraries(utilities
libutilities)
