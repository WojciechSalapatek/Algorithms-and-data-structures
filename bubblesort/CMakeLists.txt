
project(bubblesort)

set(HEDEAR_FILES
BubbleSort.h)
set(SOURCE_FILES
BubbleSort.cpp)

add_library(libbubblesort
STATIC ${SOURCE_FILES}
)
target_include_directories(libbubblesort
PUBLIC .)

add_executable(bubblesort
${SOURCE_FILES} main.cpp)

target_link_libraries(bubblesort
libbubblesort)
