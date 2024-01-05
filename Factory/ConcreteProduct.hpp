#ifndef CONCRETEPRODUCT_HPP_
#define CONCRETEPRODUCT_HPP_

#include "Product.hpp"

class ConcreteProduct : public Product {
 public:
  /**
   * @brief Default constructor
   *
   * @param name of the product
   */
  ConcreteProduct(const std::string& name);

  std::string getName() override;

 private:
  std::string mName;
};

#endif  // CONCRETEPRODUCT_HPP_
