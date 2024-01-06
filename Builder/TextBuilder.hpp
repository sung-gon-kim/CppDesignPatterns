#ifndef TEXTBUILDER_HPP_
#define TEXTBUILDER_HPP_

#include <sstream>
#include <string>
#include "Builder.hpp"

class TextBuilder : public Builder {
 public:
  void createTitle(const std::string& title) override;
  void createMessage(const std::string& message) override;
  std::string toString() override;

 private:
  std::stringstream mStream;
};

#endif  // TEXTBUILDER_HPP_
