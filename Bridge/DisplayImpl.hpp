#ifndef DISPLAYIMPL_HPP_
#define DISPLAYIMPL_HPP_

class DisplayImpl {
 public:
  virtual ~DisplayImpl() = default;

  virtual void rawOpen() = 0;
  virtual void rawPrint() = 0;
  virtual void rawClose() = 0;
};

#endif  // DISPLAYIMPL_HPP_
