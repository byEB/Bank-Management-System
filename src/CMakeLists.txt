

set(HEADERS
    user.h
    database.h)

set(SOURCES
    user.cpp
    database.cpp)
add_library(my_lib STATIC ${HEADERS} ${SOURCES})

