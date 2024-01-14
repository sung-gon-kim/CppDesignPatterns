#include <random>
#include "RandomStrategy.hpp"

std::shared_ptr<Dice> RandomStrategy::next() {
  std::mt19937 twister{std::random_device{}()};
  std::uniform_int_distribution<> numbers(1, 6);
  return Dice::getDice(numbers(twister));
}

void RandomStrategy::study(bool win) {
  (void)win;
}
