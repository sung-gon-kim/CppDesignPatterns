#ifndef ITERATOR_HPP_
#define ITERATOR_HPP_

/**
 * @brief Iterator interface
 *
 * @tparam T class type
 */
template <typename T>
class Iterator {
 public:
  /**
   * @brief Default destructor
   */
  virtual ~Iterator() = default;

  /**
   * @brief Test if next object is available.
   *
   * @return true if a next object exists, false otherwise.
   */
  virtual bool hasNext() = 0;

  /**
   * @brief Return the next object.
   *
   * @return next object
   */
  virtual T getNext() = 0;
};

#endif  // ITERATOR_HPP_
