cmake_minimum_required(VERSION 2.8.3)

project(snappymcsnapface)

add_executable(${PROJECT_NAME}
               snapface.cpp
              )

target_link_libraries(${PROJECT_NAME})

install (TARGETS ${PROJECT_NAME} DESTINATION bin)
