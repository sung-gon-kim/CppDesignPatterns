#include <iostream>
#include "MessageBox.hpp"

MessageBox::MessageBox(char decorator) :
    mDecorator(decorator) {
}

void MessageBox::print(const std::string& s) {
  int width = s.length() + 4;
  std::cout << std::string(width, mDecorator) << std::endl;
  std::cout << mDecorator << " " << s << " " << mDecorator << std::endl;
  std::cout << std::string(width, mDecorator) << std::endl;
}

std::shared_ptr<Product> MessageBox::clone() {
  return std::make_shared<MessageBox>(mDecorator);
}
