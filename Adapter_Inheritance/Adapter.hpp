#ifndef ADAPTER_HPP_
#define ADAPTER_HPP_

#include "Adaptee.hpp"
#include "Target.hpp"

/**
 * @brief Adapter class
 */
class Adapter : public Target,
		public Adaptee {
public:
  void request() override;
};

#endif  // ADAPTER_HPP_
