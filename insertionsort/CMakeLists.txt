
project(insertionsort)

set(HEDEAR_FILES
InsertionSort.h)
set(SOURCE_FILES
InsertionSort.cpp)

add_library(libinsertionsort
STATIC ${SOURCE_FILES}
)
target_include_directories(libinsertionsort
PUBLIC .)

add_executable(insertionsort
${SOURCE_FILES} main.cpp)

target_link_libraries(insertionsort
libinsertionsort)
