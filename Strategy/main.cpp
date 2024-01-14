#include <iostream>
#include "Player.hpp"
#include "WinningStrategy.hpp"
#include "RandomStrategy.hpp"

int main() {
  Player player1("Winning Strategy", std::make_shared<WinningStrategy>());
  Player player2("Random Strategy", std::make_shared<RandomStrategy>());
  for (int i = 0; i < 1000; i++) {
    auto next1 = player1.next();
    auto next2 = player2.next();
    if (next1->isHigherThan(next2)) {
      player1.win();
      player2.lose();
      std::cout << "Winner: " << player1.toString() << std::endl;
    } else if (next2->isHigherThan(next1)) {
      player2.win();
      player1.lose();
      std::cout << "Winner: " << player2.toString() << std::endl;
    } else {
      player1.even();
      player2.even();
      std::cout << "Even..." << std::endl;
    }
  }

  std::cout << "Total: " << std::endl;
  std::cout << player1.toString() << std::endl;
  std::cout << player2.toString() << std::endl;

  return 0;
}
