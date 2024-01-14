#ifndef PLAYER_HPP_
#define PLAYER_HPP_

#include <memory>
#include <string>
#include "Strategy.hpp"

class Player {
 public:
  explicit Player(const std::string& name, std::shared_ptr<Strategy> strategy);
  virtual ~Player() = default;

  std::shared_ptr<Dice> next();
  void win();
  void lose();
  void even();
  std::string toString();

 private:
  std::string mName;
  std::shared_ptr<Strategy> mStrategy;
  int mWins;
  int mLoses;
  int mGames;
};

#endif  // PLAYER_HPP_
