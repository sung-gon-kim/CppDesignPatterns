#include <memory>

#include "Abstract.hpp"
#include "Concrete.hpp"

int main() {
  auto o = std::unique_ptr<Abstract>(new Concrete());
  o->method();
  return 0;
}
