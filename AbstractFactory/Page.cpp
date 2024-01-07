#include "Page.hpp"

Page::Page(const std::string& title, const std::string& author) :
    mTitle(title), mAuthor(author) {
}

void Page::add(std::shared_ptr<Item> item) {
  mItems.push_back(item);
}
