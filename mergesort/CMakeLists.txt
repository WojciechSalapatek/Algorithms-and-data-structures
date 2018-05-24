
project(mergesort)

set(HEDEAR_FILES
MergeSort.h)
set(SOURCE_FILES
MergeSort.cpp)

add_library(libmergesort
STATIC ${SOURCE_FILES}
)
target_include_directories(libmergesort
PUBLIC .)

add_executable(mergesort
${SOURCE_FILES} main.cpp)

target_link_libraries(mergesort
libmergesort)
