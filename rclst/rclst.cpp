#include "version.h"

#include <iostream>

int main(int argc, char const *argv[])
{
  std::cout << "rclss version: "
            << PROJECT_VERSION_MAJOR << "."
            << PROJECT_VERSION_MINOR << "."
            << PROJECT_VERSION_PATCH << std::endl;

  if(argc != 3) {
    std::cerr << "Wrong number of arguments.\n" << std::endl;
    return EXIT_FAILURE;
  }

  return 0;
}
