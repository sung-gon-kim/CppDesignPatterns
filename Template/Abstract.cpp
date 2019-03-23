#include <iostream>

#include "Abstract.hpp"


void Abstract::method() {
  std::cout << "method called" << std::endl;
  operation1();
  operation2();
  std::cout << "method exited" << std::endl;
}
