#ifndef ADAPTER_HPP_
#define ADAPTER_HPP_

#include "Adaptee.hpp"
#include "Target.hpp"

/**
 * @brief Adapter class
 */
class Adapter : public Target {
public:
  void request() override;

private:
  Adaptee adaptee;
};

#endif  // ADAPTER_HPP_
