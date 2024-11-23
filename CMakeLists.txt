
project(MazeGame)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(MazeGame
        main.cpp
        Game.cpp
        Player.cpp
        Maze.cpp
        Achievement.cpp
        SecretZone.cpp
)
