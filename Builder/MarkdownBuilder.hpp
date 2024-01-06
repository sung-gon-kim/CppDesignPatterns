#ifndef MARKDOWNBUILDER_HPP_
#define MARKDOWNBUILDER_HPP_

#include <sstream>
#include <string>
#include "Builder.hpp"

class MarkdownBuilder : public Builder {
 public:
  void createTitle(const std::string& title) override;
  void createMessage(const std::string& message) override;
  std::string toString() override;

 private:
  std::stringstream mStream;
};

#endif  // MARKDOWNBUILDER_HPP_
