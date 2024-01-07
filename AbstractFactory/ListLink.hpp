#ifndef LISTLINK_HPP_
#define LISTLINK_HPP_

#include <string>
#include "Link.hpp"

class ListLink : public Link {
 public:
  explicit ListLink(const std::string& caption, const std::string& url);
  std::string toString() const override;
};

#endif  // LISTLINK_HPP_
