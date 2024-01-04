#include <iostream>
#include <memory>
#include "Singleton.hpp"

int main() {
  auto first = Singleton::getInstance();
  auto second = Singleton::getInstance();
  std::cout << ((first == second) ? "same" : "differ") << std::endl;
  return 0;
}
