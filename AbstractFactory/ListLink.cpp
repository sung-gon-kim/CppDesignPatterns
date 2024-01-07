#include <sstream>
#include "ListLink.hpp"


ListLink::ListLink(const std::string& caption, const std::string& url) :
    Link(caption, url) {
}

std::string ListLink::toString() const {
  std::stringstream ss;
  ss << "<li><a href=\"" << mUrl << "\">" << mCaption << "</a></li>";
  return ss.str();
}
