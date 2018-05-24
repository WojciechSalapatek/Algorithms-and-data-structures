
project(breadthfirstsearchforgraph)

set(HEDEAR_FILES
BreadthFirstSearch.h)
set(SOURCE_FILES
BreadthFirstSearch.cpp)

add_library(libbreadthfirstsearch
STATIC ${SOURCE_FILES}
)
target_include_directories(libbreadthfirstsearch
PUBLIC .)

add_executable(breadthfirstsearch
${SOURCE_FILES} main.cpp)

target_link_libraries(breadthfirstsearch
libbreadthfirstsearch)
