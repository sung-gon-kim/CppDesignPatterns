#include <sstream>
#include "Player.hpp"

Player::Player(const std::string& name, std::shared_ptr<Strategy> strategy) :
    mName(name), mStrategy(strategy), mWins(0), mLoses(0), mGames(0) {
}

std::shared_ptr<Dice> Player::next() {
  return mStrategy->next();
}

void Player::win() {
  mStrategy->study(true);
  mWins++;
  mGames++;
}

void Player::lose() {
  mStrategy->study(false);
  mLoses++;
  mGames++;
}

void Player::even() {
  mGames++;
}

std::string Player::toString() {
  std::stringstream ss;
  ss << "[ " << mName << ": " << mGames << " games, " << mWins << " won, " << mLoses << " lost ]";
  return ss.str();
}
