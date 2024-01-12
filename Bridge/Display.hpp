#ifndef DISPLAY_HPP_
#define DISPLAY_HPP_

#include <memory>
#include "DisplayImpl.hpp"

class Display {
 public:
  explicit Display(std::shared_ptr<DisplayImpl> impl);
  virtual ~Display() = default;

  void open();
  void print();
  void close();
  void display();

 private:
  std::shared_ptr<DisplayImpl> mImpl;
};

#endif  // DISPLAY_HPP_
