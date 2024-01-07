#ifndef LISTPAGE_HPP_
#define LISTPAGE_HPP_

#include <memory>
#include <string>
#include "Page.hpp"

class ListPage : public Page {
 public:
  explicit ListPage(const std::string& title, const std::string& author);

  std::string toString() const override;
};

#endif  // LISTPAGE_HPP_
