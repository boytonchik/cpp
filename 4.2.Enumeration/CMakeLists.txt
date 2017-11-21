cmake_minimum_required(VERSION 2.8.9)

set(PROJECT_NAME wdcount)

project (${PROJECT_NAME})

add_executable(${PROJECT_NAME} 
  wdcount.cpp
  )

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 11)
