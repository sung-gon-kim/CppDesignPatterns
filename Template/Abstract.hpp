#ifndef ABSTRACT_HPP_
#define ABSTRACT_HPP_

/**
 * @brief Abstract class
 */
class Abstract {
 public:
  virtual ~Abstract() = default;

  /**
   * @brief Public callable method.
   */
  void method();

 protected:
  /**
   * @brief Abstract protected method.
   */
  virtual void operation1() = 0;

  /**
   * @brief Abstract protected method.
   */
  virtual void operation2() = 0;
};

#endif  // ABSTRACT_HPP_
