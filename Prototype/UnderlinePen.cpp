#include <iostream>
#include "UnderlinePen.hpp"

UnderlinePen::UnderlinePen(char decorator) :
    mDecorator(decorator) {
}

void UnderlinePen::print(const std::string& s) {
  std::cout << s << std::endl;
  std::cout << std::string(s.length(), mDecorator) << std::endl;
}

std::shared_ptr<Product> UnderlinePen::clone() {
  return std::make_shared<UnderlinePen>(mDecorator);
}
