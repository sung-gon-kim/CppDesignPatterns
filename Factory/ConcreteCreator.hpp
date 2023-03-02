#ifndef CONCRETECREATOR_HPP_
#define CONCRETECREATOR_HPP_

#include <memory>
#include <string>
#include <vector>

#include "Creator.hpp"
#include "Product.hpp"

class ConcreteCreator : public Creator {
protected:
  std::shared_ptr<Product> createProduct(const std::string& name) override;
  void registerProduct(std::shared_ptr<Product> product) override;

private:
  std::vector<std::shared_ptr<Product>> products;
};

#endif  // CONCRETECREATOR_HPP_
