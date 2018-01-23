#include <iostream>

#define PI 3.1415

float square_area(float side) {
  return side * side;
}

float circle_area(float radius) {
  return PI * radius * radius;
}

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
