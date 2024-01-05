#ifndef AGGREGATE_HPP_
#define AGGREGATE_HPP_

#include "Iterator.hpp"
#include "sp.hpp"

/**
 * @brief Abstract aggregate class.
 *
 * @tparam T class type
 */
template <typename T>
class Aggregate {
 public:
  /**
   * @brief Return the iterator of the given class type.
   *
   * @param T class type iterator
   */
  virtual sp<Iterator<T> > getIterator() = 0;
};

#endif  // AGGREGATE_HPP_
