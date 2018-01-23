#include <iostream>

#include "circle.hpp"
#include "square.hpp"


int main(int argc, char** argv) {

  if (argc < 2) {
    std::cerr << "Error: must specify a length" << std::endl;
    return 1;
  }

  float length = atof(argv[1]);

  std::cout << "A square with side " << length << " has area "
    << square_area(length) << std::endl;

  std::cout << "A circle with radius " << length << " has area "
    << circle_area(length) << std::endl;

}
