#include <iostream>
#include <string>
#include "StringDisplayImpl.hpp"

StringDisplayImpl::StringDisplayImpl(const std::string& text) :
    mText(text), mLength(text.length()) {
}

void StringDisplayImpl::rawOpen() {
  printLine();
}

void StringDisplayImpl::rawPrint() {
  std::cout << "| " << mText << " |" << std::endl;
}

void StringDisplayImpl::rawClose() {
  printLine();
}

void StringDisplayImpl::printLine() {
  std::cout << "+" << std::string(mLength + 2, '-') << "+" << std::endl;
}
