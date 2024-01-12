#include "Display.hpp"

Display::Display(std::shared_ptr<DisplayImpl> impl) :
    mImpl(impl) {
}

void Display::open() {
  mImpl->rawOpen();
}

void Display::print() {
  mImpl->rawPrint();
}

void Display::close() {
  mImpl->rawClose();
}

void Display::display() {
  open();
  print();
  close();
}
