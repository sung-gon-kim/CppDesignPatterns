#include <iostream>

#include "ObjectContainer.hpp"

int main() {
  ObjectContainer container;
  container.add(Object("first"));
  container.add(Object("second"));
  container.add(Object("third"));

  auto it = container.getIterator();
  while (it->hasNext()) {
    std::cout << it->getNext().getName() << std::endl;
  }
  return 0;
}
