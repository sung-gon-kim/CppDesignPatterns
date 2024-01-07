#include <memory>
#include <iostream>
#include "ListFactory.hpp"

int main() {
  auto factory = Factory::getInstanceOf("ListFactory");
  auto link1 = factory->createLink("Google", "https://www.google.com");
  auto link2 = factory->createLink("Yahoo", "https://www.yahoo.com");
  auto page = factory->createPage("Links", "Author");
  page->add(link1);
  page->add(link2);
  std::cout << page->toString() << std::endl;
  return 0;
}
