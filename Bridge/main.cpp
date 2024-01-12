#include <memory>
#include "CountDisplay.hpp"
#include "StringDisplayImpl.hpp"

int main() {
  auto d1 = std::make_shared<Display>(std::make_shared<StringDisplayImpl>("Hello world"));
  auto d2 = std::make_shared<CountDisplay>(std::make_shared<StringDisplayImpl>("John doe"));
  d1->display();
  d2->display();
  d2->multiDisplay(3);
  return 0;
}
