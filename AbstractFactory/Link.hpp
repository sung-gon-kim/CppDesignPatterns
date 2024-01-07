#ifndef LINK_HPP_
#define LINK_HPP_

#include <string>
#include "Item.hpp"

class Link : public Item {
 public:
  explicit Link(const std::string& caption, const std::string& url);
  virtual ~Link() = default;

 protected:
  std::string mUrl;
};

#endif  // LINK_HPP_
