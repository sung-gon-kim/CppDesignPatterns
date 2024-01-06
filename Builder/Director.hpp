#ifndef DIRECTOR_HPP_
#define DIRECTOR_HPP_

#include <memory>
#include <string>
#include "Builder.hpp"

class Director {
 public:
  explicit Director(std::shared_ptr<Builder> builder);
  std::string toString();

 private:
  std::shared_ptr<Builder> mBuilder;
};

#endif  // DIRECTOR_HPP_
