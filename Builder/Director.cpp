#include "Director.hpp"

Director::Director(std::shared_ptr<Builder> builder) :
    mBuilder(builder) {
}

std::string Director::toString() {
  mBuilder->createTitle("Greeting");
  mBuilder->createMessage("Hello World");
  return mBuilder->toString();
}
