cmake_minimum_required(VERSION 3.15)
project(CreationalDesignPattern CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CORE_SOURCES
    core/Room.cpp
    core/Wall.cpp
    core/Door.cpp
    core/Maze.cpp
    core/MazeGame.cpp
    core/Mazes/NormalMaze.cpp
    core/Mazes/EnchantedMaze.cpp
    core/Mazes/bombedMaze.cpp
)

set(PATTERN_SOURCES
    patterns/abstract_factory/MazeFactory.h
    #patterns/builder/MazeBuilder.cpp
    #patterns/factory_method/MazeGameFM.cpp
    #patterns/prototype/MazePrototypeFactory.cpp
    #patterns/singleton/MazeFactorySingleton.cpp
)

add_executable(maze main.cpp ${CORE_SOURCES} ${PATTERN_SOURCES})
target_include_directories(maze PRIVATE ${CMAKE_SOURCE_DIR})
