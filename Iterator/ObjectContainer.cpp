#include "Iterator.hpp"
#include "Object.hpp"
#include "ObjectContainer.hpp"
#include "ObjectIterator.hpp"
#include "sp.hpp"

sp<Iterator<Object> > ObjectContainer::getIterator() {
  return sp<Iterator<Object> >(new ObjectIterator(this));
}

void ObjectContainer::add(Object object) {
  objects.emplace_back(object);
}

std::size_t ObjectContainer::getSize() {
  return objects.size();
}

Object ObjectContainer::get(std::size_t index) {
  return objects.at(index);
}
