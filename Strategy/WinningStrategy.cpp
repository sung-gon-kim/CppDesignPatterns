#include <random>
#include "WinningStrategy.hpp"

WinningStrategy::WinningStrategy() : mWon(false) {
}

std::shared_ptr<Dice> WinningStrategy::next() {
  if (!mWon) {
    std::mt19937 twister{std::random_device{}()};
    std::uniform_int_distribution<> numbers(1, 6);
    mPrev = Dice::getDice(numbers(twister));
  }
  return mPrev;
}

void WinningStrategy::study(bool win) {
  mWon = win;
}
