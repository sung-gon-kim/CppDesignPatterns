#ifndef RANDOMSTRATEGY_HPP_
#define RANDOMSTRATEGY_HPP_

#include <memory>
#include "Dice.hpp"
#include "Strategy.hpp"

class RandomStrategy : public Strategy {
 public:
  std::shared_ptr<Dice> next() override;
  void study(bool win) override;
};

#endif  // RANDOMSTRATEGY_HPP_
