#ifndef STRATEGY_HPP_
#define STRATEGY_HPP_

#include <memory>
#include "Dice.hpp"

class Strategy {
 public:
  virtual ~Strategy() = default;

  virtual std::shared_ptr<Dice> next() = 0;
  virtual void study(bool win) = 0;
};

#endif  // STRATEGY_HPP_
