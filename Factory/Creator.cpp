#include "Creator.hpp"

std::shared_ptr<Product> Creator::create(const std::string& name) {
  auto product = createProduct(name);
  registerProduct(product);
  return product;
}
