#ifndef SP_HPP_
#define SP_HPP_

/**
 * @brief Smart pointer which deletes the given object.
 *
 * @tparam T object type
 */
template <typename T>
class sp {
 public:
  /**
   * @brief Default constructor
   *
   * @param object to handle
   */
  sp(T* object) : object(object) {
  }

  /**
   * @brief Default destructor
   */
  virtual ~sp() {
    delete object;
  }

  /**
   * @brief Return the pointer to the object
   *
   * @return object pointer
   */
  T* operator->() {
    return object;
  }

  /**
   * @brief Return the object reference
   *
   * @return object reference
   */
  T& operator*() {
    return *object;
  }

 private:
  T* object;
};

#endif  // SP_HPP_
