#ifndef TARGET_HPP_
#define TARGET_HPP_

/**
 * @brief Target class
 */
class Target {
 public:
  virtual ~Target() = default;
  virtual void request() = 0;
};

#endif  // TARGET_HPP_
