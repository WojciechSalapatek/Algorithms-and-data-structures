
project(heapsort)

set(HEDEAR_FILES
HeapSort.h)
set(SOURCE_FILES
HeapSort.cpp)

add_library(libheapsort
STATIC ${SOURCE_FILES}
)
target_include_directories(libheapsort
PUBLIC .)

add_executable(heapsort
${SOURCE_FILES} main.cpp)

target_link_libraries(heapsort
libheapsort)
