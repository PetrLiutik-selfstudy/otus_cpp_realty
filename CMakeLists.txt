cmake_minimum_required(VERSION 3.2)

if (DEFINED ENV{TRAVIS_BUILD_NUMBER})
    project(realty VERSION 1.1.$ENV{TRAVIS_BUILD_NUMBER})
else ()
    project(realty VERSION 1.1.1)
endif ()

configure_file(${PROJECT_SOURCE_DIR}/inc/version.h.in ${PROJECT_SOURCE_DIR}/inc/version.h)

include_directories("${PROJECT_SOURCE_DIR}/inc")

add_subdirectory(rclss)
add_subdirectory(rclst)

set(CPACK_GENERATOR DEB)
set(CPACK_PACKAGE_NAME ${PROJECT_NAME})
set(CPACK_PACKAGE_CONTACT petr_lutik@mail.ru)
set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")

include (CPack)
