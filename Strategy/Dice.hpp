#ifndef DICE_HPP_
#define DICE_HPP_

#include <memory>
#include <string>

class Dice {
 public:
  explicit Dice(int number);
  virtual ~Dice() = default;

  bool isHigherThan(std::shared_ptr<Dice> dice);
  int getNumber();

  static std::shared_ptr<Dice> getDice(int number);

 private:
  int compare(std::shared_ptr<Dice> dice);

  int mNumber;
};

#endif  // DICE_HPP_
