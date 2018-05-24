
project(chainedhasharray)

set(HEDEAR_FILES
ChainedHashArray.h)
set(SOURCE_FILES
ChainedHashArray.cpp)

add_library(libchainedhasharray
STATIC ${SOURCE_FILES}
)
target_include_directories(libchainedhasharray
PUBLIC .)

add_executable(chainedhasharray
${SOURCE_FILES} main.cpp)

target_link_libraries(chainedhasharray
libchainedhasharray)
