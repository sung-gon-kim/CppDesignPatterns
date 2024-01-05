#ifndef CREATOR_HPP_
#define CREATOR_HPP_

#include <memory>
#include <string>
#include "Product.hpp"

/**
 * @brief Creator class
 */
class Creator {
 public:
  /**
   * @brief Default destructor
   */
  virtual ~Creator() = default;

  /**
   * @brief Create method
   *
   * @param name of the product
   * @return Product instance
   */
  std::shared_ptr<Product> create(const std::string& name);

 protected:
  virtual std::shared_ptr<Product> createProduct(const std::string& name) = 0;
  virtual void registerProduct(std::shared_ptr<Product> product) = 0;
};

#endif  // CREATOR_HPP_
