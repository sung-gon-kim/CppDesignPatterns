#ifndef PAGE_HPP_
#define PAGE_HPP_

#include <memory>
#include <string>
#include <vector>
#include "Item.hpp"

class Page {
 public:
  explicit Page(const std::string& title, const std::string& author);
  virtual ~Page() = default;

  void add(std::shared_ptr<Item> item);
  virtual std::string toString() const = 0;

 protected:
  std::string mTitle;
  std::string mAuthor;
  std::vector<std::shared_ptr<Item>> mItems;
};

#endif  // PAGE_HPP_
