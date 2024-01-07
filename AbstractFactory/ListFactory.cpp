#include "ListFactory.hpp"
#include "ListLink.hpp"
#include "ListPage.hpp"

std::shared_ptr<Link> ListFactory::createLink(const std::string& caption, const std::string& url) {
  return std::make_shared<ListLink>(caption, url);
}

std::shared_ptr<Page> ListFactory::createPage(const std::string& title, const std::string& author) {
  return std::make_shared<ListPage>(title, author);;
}
