#include <algorithm>
#include <memory>
#include "Dice.hpp"

Dice::Dice(int number) : mNumber(number) {
}

bool Dice::isHigherThan(std::shared_ptr<Dice> dice) {
  return compare(dice) > 0;
}

int Dice::getNumber() {
  return mNumber;
}

std::shared_ptr<Dice> Dice::getDice(int number) {
  static std::shared_ptr<Dice> dices[6] = {
    std::make_shared<Dice>(1),
    std::make_shared<Dice>(2),
    std::make_shared<Dice>(3),
    std::make_shared<Dice>(4),
    std::make_shared<Dice>(5),
    std::make_shared<Dice>(6),
  };
  return dices[std::clamp(number - 1, 0, 5)];
}

int Dice::compare(std::shared_ptr<Dice> dice) {
  if (mNumber == dice->getNumber()) {
    return 0;
  }
  if (mNumber < dice->getNumber()) {
    return -1;
  }
  return 1;
}
