#ifndef MANAGER_HPP_
#define MANAGER_HPP_

#include <map>
#include <memory>
#include <string>
#include "Product.hpp"

class Manager {
 public:
  void set(std::string name, std::shared_ptr<Product> product);
  std::shared_ptr<Product> create(std::string name);

 private:
  std::map<std::string, std::shared_ptr<Product>> products;
};

#endif  // MANAGER_HPP_
