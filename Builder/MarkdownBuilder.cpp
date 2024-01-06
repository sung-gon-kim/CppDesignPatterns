#include "MarkdownBuilder.hpp"

void MarkdownBuilder::createTitle(const std::string& title) {
  mStream << "# " << title << std::endl;
}

void MarkdownBuilder::createMessage(const std::string& message) {
  mStream << "  - " << message << std::endl;
}

std::string MarkdownBuilder::toString() {
  mStream << std::endl;
  return mStream.str();
}
