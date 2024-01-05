#ifndef OBJECT_HPP_
#define OBJECT_HPP_

#include <string>

/**
 * @brief An object class.
 */
class Object {
 public:
  /**
   * @brief Default constructor.
   *
   * @param name of the object
   */
  explicit Object(std::string name);

  /**
   * @brief Return the object name
   *
   * @return object name
   */
  std::string getName();

 private:
  std::string name;
};

#endif  // OBJECT_HPP_
