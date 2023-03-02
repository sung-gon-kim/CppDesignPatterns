#include "ConcreteCreator.hpp"
#include "ConcreteProduct.hpp"


std::shared_ptr<Product> ConcreteCreator::createProduct(const std::string& name) {
  return std::make_shared<ConcreteProduct>(name);
}

void ConcreteCreator::registerProduct(std::shared_ptr<Product> product) {
  products.push_back(product);
}
