cmake_minimum_required(VERSION 2.6)
project(tp2_2)

add_executable(tp2_2 carte.cpp objet.cpp obstacle.cpp personnage.cpp element.cpp main.cpp)

install(TARGETS tp2_2 RUNTIME DESTINATION bin)
