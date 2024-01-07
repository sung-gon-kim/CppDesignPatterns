#ifndef FACTORY_HPP_
#define FACTORY_HPP_

#include <memory>
#include <string>
#include "Link.hpp"
#include "Page.hpp"

class Factory {
 public:
  virtual ~Factory() = default;

  virtual std::shared_ptr<Link> createLink(const std::string& caption, const std::string& url) = 0;
  virtual std::shared_ptr<Page> createPage(const std::string& title, const std::string& author) = 0;
  static std::shared_ptr<Factory> getInstanceOf(const std::string& name);
};

#endif  // FACTORY_HPP_
