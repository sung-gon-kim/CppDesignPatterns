#ifndef ITEM_HPP_
#define ITEM_HPP_

#include <string>

class Item {
 public:
  explicit Item(const std::string& caption);
  virtual ~Item() = default;

  virtual std::string toString() const = 0;

 protected:
  std::string mCaption;
};

#endif  // ITEM_HPP_
