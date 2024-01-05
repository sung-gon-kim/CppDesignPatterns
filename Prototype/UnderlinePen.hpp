#ifndef UNDERLINEPEN_HPP_
#define UNDERLINEPEN_HPP_

#include <memory>
#include <string>
#include "Product.hpp"

class UnderlinePen : public Product {
 public:
  explicit UnderlinePen(char decorator);
  void print(const std::string& s) override;
  std::shared_ptr<Product> clone() override;

 private:
  char mDecorator;
};

#endif  // UNDERLINEPEN_HPP_
