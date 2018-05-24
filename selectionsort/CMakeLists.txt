
project(selectionsort)

set(HEDEAR_FILES
SelectionSort.h)
set(SOURCE_FILES
SelectionSort.cpp)

add_library(libselectionsort
STATIC ${SOURCE_FILES}
)
target_include_directories(libselectionsort
PUBLIC .)

add_executable(selectionsort
${SOURCE_FILES} main.cpp)

target_link_libraries(selectionsort
libselectionsort)
