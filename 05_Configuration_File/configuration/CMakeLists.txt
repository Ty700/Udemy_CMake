configure_file(
    "config.hpp.in"
    "${CMAKE_BINARY_DIR}/configured_files/include/config.hpp" ESCAPE_QUOTES
    #Absoulte path to the binary path is {CMAKE_BINARY_DIR} - this is defined in CMake already
)