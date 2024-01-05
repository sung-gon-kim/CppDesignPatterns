#include "ObjectContainer.hpp"
#include "ObjectIterator.hpp"

ObjectIterator::ObjectIterator(ObjectContainer* container) :
    mContainer(container), mIndex(0) {
}

bool ObjectIterator::hasNext() {
  return (mIndex < mContainer->getSize());
}

Object ObjectIterator::getNext() {
  return mContainer->get(mIndex++);
}
