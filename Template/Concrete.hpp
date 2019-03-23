#ifndef CONCRETE_HPP_
#define CONCRETE_HPP_

#include "Abstract.hpp"

/**
 * @brief Concrete class
 */
class Concrete : public Abstract {
protected:
  void operation1() override;
  void operation2() override;
};

#endif  // CONCRETE_HPP_
