#ifndef OBJECTITERATOR_HPP_
#define OBJECTITERATOR_HPP_

#include "Object.hpp"

class ObjectContainer;

/**
 * @brief Iterator class for Object instances
 */
class ObjectIterator : public Iterator<Object> {
public:
  /**
   * @brief Default constructor
   *
   * @param container for this iterator
   */
  explicit ObjectIterator(ObjectContainer* container);
  
  bool hasNext() override;
  Object getNext() override;

private:
  ObjectContainer* mContainer;
  std::size_t mIndex;
};


#endif  // OBJECTITERATOR_HPP_
