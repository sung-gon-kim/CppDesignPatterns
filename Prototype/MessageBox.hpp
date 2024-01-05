#ifndef MESSAGEBOX_HPP_
#define MESSAGEBOX_HPP_

#include <memory>
#include <string>
#include "Product.hpp"

class MessageBox : public Product {
 public:
  explicit MessageBox(char decorator);
  void print(const std::string& s) override;
  std::shared_ptr<Product> clone() override;

 private:
  char mDecorator;
};

#endif  // MESSAGEBOX_HPP_
