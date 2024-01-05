#include "Manager.hpp"
#include "MessageBox.hpp"
#include "Product.hpp"
#include "UnderlinePen.hpp"

int main() {
  Manager manager;
  manager.set("underline", std::make_shared<UnderlinePen>('-'));
  manager.set("bold", std::make_shared<MessageBox>('*'));
  manager.set("slash", std::make_shared<MessageBox>('/'));

  manager.create("underline")->print("hello world");
  manager.create("bold")->print("hello world");
  manager.create("slash")->print("hello world");

  return 0;
}
