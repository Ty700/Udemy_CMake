# Old way
# add_library(${LIBRARY_NAME} STATIC my_lib.c)

set(LIBRARY_SOURCE
        "my_lib.c") #not, we don't add commas 

set(LIBRARY_HEADERS
        "my_lib.h")

add_library(${LIBRARY_NAME}
        ${LIBRARY_SOURCE}
        ${LIBRARY_HEADERS})

target_include_directories(${LIBRARY_NAME} PUBLIC 
        "./"
        "${CMAKE_BINARY_DIR}/configured_files/include/"        
)
