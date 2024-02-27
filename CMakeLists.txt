# CMakeLists.txt

cmake_minimum_required(VERSION 3.15)
project(YourProjectName)

# Set C++ standard
set(CMAKE_CXX_STANDARD 14)

# Add the source files to the project
file(GLOB_RECURSE SOURCE_FILES "src/*.cpp" "include/*.h")

# Add the executable target
add_executable(YourProjectName ${SOURCE_FILES})

# Add include directories
target_include_directories(YourProjectName PRIVATE include)

# Find and link OpenGL
find_package(OpenGL REQUIRED)
target_link_libraries(YourProjectName PRIVATE ${OPENGL_LIBRARIES})

# Find and link Qt
find_package(Qt5 COMPONENTS Core Widgets Gui REQUIRED)
target_link_libraries(YourProjectName PRIVATE Qt5::Core Qt5::Widgets Qt5::Gui)

# Add any other dependencies or libraries as needed

# Set the output directory for the executable
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)

