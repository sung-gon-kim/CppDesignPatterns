#ifndef OBJECTCONTAINER_HPP_
#define OBJECTCONTAINER_HPP_

#include <vector>

#include "Aggregate.hpp"
#include "Iterator.hpp"
#include "Object.hpp"
#include "sp.hpp"


class ObjectContainer : public Aggregate<Object> {
public:
  sp<Iterator<Object> > getIterator() override;

  /**
   * @brief Add the object to the container.
   *
   * @param object to add
   */
  void add(Object object);

  /**
   * @brief Return the container size.
   *
   * @return size of the container
   */
  std::size_t getSize();

  /**
   * @brief Return the relevant object
   *
   * @param index of an object
   * @return object at the index
   */
  Object get(std::size_t index);

private:
  std::vector<Object> objects;
};

#endif  // OBJECTCONTAINER_HPP_
