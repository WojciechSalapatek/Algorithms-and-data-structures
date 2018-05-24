
project(countingsort)


set(HEDEAR_FILES
CountingSort.h)
set(SOURCE_FILES
CountingSort.cpp)

add_library(libcountingsort
STATIC ${SOURCE_FILES}
)
target_include_directories(libcountingsort
PUBLIC .)

add_executable(countingsort
${SOURCE_FILES} main.cpp)

target_link_libraries(countingsort
libcountingsort)
