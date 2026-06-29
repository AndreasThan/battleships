cmake_minimum_required(VERSION 3.10)

project(Battleships)

# C++ version
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add FLTK
add_subdirectory(external/fltk)

# Source files
file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS
    "src/*.cpp"
)

# Executable target
add_executable(Battleships
    ${SOURCES}
)

# Include headers
target_include_directories(Battleships PRIVATE
    ${PROJECT_SOURCE_DIR}/include/controller
    ${PROJECT_SOURCE_DIR}/include/model
    ${PROJECT_SOURCE_DIR}/include/util
    ${PROJECT_SOURCE_DIR}/include/view
)

# C++ features
target_compile_features(Battleships PRIVATE cxx_std_17)

# Link FLTK
target_link_libraries(Battleships PRIVATE
    fltk
    fltk_images
)

# Copy assets folder to the build folder
file(COPY assets DESTINATION ${CMAKE_BINARY_DIR})