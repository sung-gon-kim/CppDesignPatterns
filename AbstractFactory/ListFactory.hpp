#ifndef LISTFACTORY_HPP_
#define LISTFACTORY_HPP_

#include <memory>
#include <string>
#include "Factory.hpp"
#include "Link.hpp"
#include "Page.hpp"

class ListFactory : public Factory {
 public:
  std::shared_ptr<Link> createLink(const std::string& caption, const std::string& url) override;
  std::shared_ptr<Page> createPage(const std::string& title, const std::string& author) override;
};

#endif  // LISTFACTORY_HPP_
