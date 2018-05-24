
project(depthfirstsearch)

set(HEDEAR_FILES
DepthFirstSearch.h)
set(SOURCE_FILES
DepthFirstSearch.cpp)

add_library(libdepthfirstsearch
STATIC ${SOURCE_FILES}
)
target_include_directories(libdepthfirstsearch
PUBLIC .)

add_executable(depthfirstsearch
${SOURCE_FILES} main.cpp)

target_link_libraries(depthfirstsearch
libdepthfirstsearch)
