#include <memory>
#include <string>
#include "Manager.hpp"

void Manager::set(std::string name, std::shared_ptr<Product> product) {
  products[name] = product;
}

std::shared_ptr<Product> Manager::create(std::string name) {
  auto product = products.at(name);
  return product->clone();
}
