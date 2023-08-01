CMAKE_MINIMUM_REQUIRED(VERSION 3.24)
project(seed-search-sts)

set(CMAKE_CXX_STANDARD 17)

IF (CMAKE_BUILD_TYPE STREQUAL Debug)
    ADD_DEFINITIONS(-DDEBUG)
ENDIF()

include_directories(include)

add_executable(main main.cpp
        src/base/Neow.cpp
        src/tools/SeedHelper.cpp
        src/GameContext.cpp
        src/Game.cpp)