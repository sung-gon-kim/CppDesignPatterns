#ifndef PRODUCT_HPP_
#define PRODUCT_HPP_

#include <string>

/**
 * @brief Product interface
 */
class Product {
public:
  /**
   * @brief Return name of the product
   *
   * @return name of the product
   */
  virtual std::string getName() = 0;
};

#endif  // PRODUCT_HPP_
