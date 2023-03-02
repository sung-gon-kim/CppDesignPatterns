#include <iostream>
#include <memory>

#include "ConcreteCreator.hpp"
#include "ConcreteProduct.hpp"

int main() {
  std::shared_ptr<Creator> creator = std::make_shared<ConcreteCreator>();
  auto product1 = creator->create("A");
  auto product2 = creator->create("B");
  auto product3 = creator->create("C");

  std::cout << product1->getName() << std::endl;
  std::cout << product2->getName() << std::endl;
  std::cout << product3->getName() << std::endl;
  return 0;
}
