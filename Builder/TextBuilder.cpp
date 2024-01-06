#include <string>
#include "TextBuilder.hpp"

void TextBuilder::createTitle(const std::string& title) {
  auto length = title.length() + 4;
  mStream << std::string(length, '=') << std::endl;
  mStream << "| " << title << " |" << std::endl;
  mStream << std::string(length, '=') << std::endl;
}

void TextBuilder::createMessage(const std::string& message) {
  mStream << "> " << message << std::endl;
}

std::string TextBuilder::toString() {
  return mStream.str();
}
