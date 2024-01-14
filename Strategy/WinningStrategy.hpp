#ifndef WINNINGSTRATEGY_HPP_
#define WINNINGSTRATEGY_HPP_

#include <memory>
#include "Dice.hpp"
#include "Strategy.hpp"

class WinningStrategy : public Strategy {
 public:
  explicit WinningStrategy();

  std::shared_ptr<Dice> next() override;
  void study(bool win) override;

 private:
  bool mWon;
  std::shared_ptr<Dice> mPrev;
};

#endif  // WINNINGSTRATEGY_HPP_
