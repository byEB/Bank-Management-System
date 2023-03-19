

set(HEADERS
    account_manager.h
    bank_manager.h
    database_manager.h
    menu.h
    bank_types.h
    )

set(SOURCES
    account_manager.cpp
    bank_manager.cpp
    database_manager.cpp
    menu.cpp
    )

add_library(my_lib STATIC ${HEADERS} ${SOURCES})

