#ifndef SINGLETON_HPP_
#define SINGLETON_HPP_

#include <memory>

/**
 * @brief Singleton class
 */
class Singleton {
 public:
  static std::shared_ptr<Singleton> getInstance();
};

#endif  // SINGLETON_HPP_
