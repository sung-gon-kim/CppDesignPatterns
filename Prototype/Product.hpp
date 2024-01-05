#ifndef PRODUCT_HPP_
#define PRODUCT_HPP_

#include <memory>

class Product {
 public:
  virtual ~Product() = default;
  virtual void print(const std::string& s) = 0;
  virtual std::shared_ptr<Product> clone() = 0;
};

#endif  // PRODUCT_HPP_
