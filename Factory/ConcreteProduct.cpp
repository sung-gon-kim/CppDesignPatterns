#include "ConcreteProduct.hpp"


ConcreteProduct::ConcreteProduct(const std::string& name) : mName(name) {
}

std::string ConcreteProduct::getName() {
  return mName;
}
