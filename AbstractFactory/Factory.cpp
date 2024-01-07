#include <memory>
#include <string>
#include "Factory.hpp"
#include "ListFactory.hpp"

std::shared_ptr<Factory> Factory::getInstanceOf(const std::string& name) {
  if (name == "ListFactory") {
    return std::make_shared<ListFactory>();
  }
  return nullptr;
}
