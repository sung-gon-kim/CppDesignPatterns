#ifndef COUNTDISPLAY_HPP_
#define COUNTDISPLAY_HPP_

#include "Display.hpp"

class CountDisplay : public Display {
 public:
  explicit CountDisplay(std::shared_ptr<DisplayImpl> impl);

  void multiDisplay(int times);
};

#endif  // COUNTDISPLAY_HPP_
