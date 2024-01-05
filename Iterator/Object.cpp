#include <string>
#include "Object.hpp"

Object::Object(std::string name) : name(name) {
}

std::string Object::getName() {
  return name;
}
