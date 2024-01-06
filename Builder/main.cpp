#include <iostream>
#include <memory>
#include "Director.hpp"
#include "MarkdownBuilder.hpp"
#include "TextBuilder.hpp"

int main() {
  auto director = Director(std::make_shared<TextBuilder>());
  std::cout << director.toString() << std::endl;

  director = Director(std::make_shared<MarkdownBuilder>());
  std::cout << director.toString() << std::endl;

  return 0;
}
