#include <sstream>
#include "ListPage.hpp"

ListPage::ListPage(const std::string& title, const std::string& author) :
    Page(title, author) {
}

std::string ListPage::toString() const {
  std::stringstream ss;
  ss << "<html><head><title>" << mTitle << "</title></head>" << std::endl;
  ss << "<body>" << std::endl;
  ss << "  <h1>" << mTitle << "</h1>" << std::endl;
  ss << "  <ul>" << std::endl;
  for (const auto& item : mItems) {
    ss << "    " << item->toString() << std::endl;
  }
  ss << "  </ul>" << std::endl;
  ss << "  <address>" << mAuthor << "</address>" << std::endl;
  ss << "</body></html>" << std::endl;
  return ss.str();
}
