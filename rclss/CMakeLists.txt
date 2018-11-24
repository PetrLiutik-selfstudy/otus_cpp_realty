cmake_minimum_required(VERSION 3.2)

set(TARGET_NAME rclss)

file(GLOB_RECURSE SOURCES *.cpp *.h)

# Setup application
add_executable(${TARGET_NAME} ${SOURCES})

if (MSVC)
    set_target_properties(${TARGET_NAME} PROPERTIES
                                         CXX_STANDARD 14
                                         CXX_STANDARD_REQUIRED ON
    )
else ()
    set_target_properties(${TARGET_NAME} PROPERTIES
                                         CXX_STANDARD 14
                                         CXX_STANDARD_REQUIRED ON
                                         COMPILE_OPTIONS -Wpedantic -Wall -Wextra
    )
endif ()

target_link_libraries(${TARGET_NAME} ${CMAKE_THREAD_LIBS_INIT})
#target_link_libraries(${TARGET_NAME} ${CMAKE_THREAD_LIBS_INIT} openblas dlib)

install(TARGETS ${TARGET_NAME} RUNTIME DESTINATION bin)
