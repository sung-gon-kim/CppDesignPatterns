#ifndef BUILDER_HPP_
#define BUILDER_HPP_

#include <string>

class Builder {
 public:
  virtual ~Builder() = default;
  virtual void createTitle(const std::string& title) = 0;
  virtual void createMessage(const std::string& message) = 0;
  virtual std::string toString() = 0;
};

#endif  // BUILDER_HPP_
