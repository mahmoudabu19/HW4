cmake_minimum_required(VERSION 3.28)
project(HW4)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Events)
include_directories(Players)

add_executable(HW4
        Events/Event.h
        Players/Player.h
        main.cpp
        MatamStory.cpp
        MatamStory.h
        Utilities.cpp
        Utilities.h
        Players/Player.cpp)
