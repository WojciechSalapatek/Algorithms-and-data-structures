
project(quicksort)

set(HEDEAR_FILES
QuickSort.h)
set(SOURCE_FILES
QuickSort.cpp)

add_library(libquicksort
STATIC ${SOURCE_FILES}
)
target_include_directories(libquicksort
PUBLIC .)

add_executable(quicksort
${SOURCE_FILES} main.cpp)

target_link_libraries(quicksort
libquicksort)
