cmake_minimum_required(VERSION 3.16)

project(peli2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(peli2 main.cpp Game.cpp Game.h)

include(GNUInstallDirs)
install(TARGETS peli2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
