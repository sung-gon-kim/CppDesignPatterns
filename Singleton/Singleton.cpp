#include "Singleton.hpp"

std::shared_ptr<Singleton> Singleton::getInstance() {
  static auto object = std::make_shared<Singleton>();
  return object;
}
