#include <memory>

#include "Adapter.hpp"
#include "Target.hpp"


int main() {
  auto o = std::unique_ptr<Target>(new Adapter());
  o->request();
  
  return 0;
}
