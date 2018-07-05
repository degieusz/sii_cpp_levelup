cmake_minimum_required(VERSION 2.8.9)
project(hello)

#setup boost libs
FIND_PACKAGE( Boost 1.65 COMPONENTS program_options REQUIRED )

#Bring the headers
include_directories(include)

#Can manually add the sources using the set command as follows:
#set(SOURCES src/mainapp.cpp src/Student.cpp)

#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")

#add_executable(testStudent ${SOURCES})
add_executable(hello z.cpp ${SOURCES})

#setup boost libs
TARGET_LINK_LIBRARIES(hello LINK_PUBLIC Boost::program_options)
