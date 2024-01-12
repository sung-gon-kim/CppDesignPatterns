#ifndef STRINGDISPLAY_HPP_
#define STRINGDISPLAY_HPP_

#include <string>
#include "DisplayImpl.hpp"

class StringDisplayImpl : public DisplayImpl {
 public:
  explicit StringDisplayImpl(const std::string& text);

  void rawOpen() override;
  void rawPrint() override;
  void rawClose() override;

 private:
  void printLine();

  std::string mText;
  std::string::size_type mLength;
};

#endif  // STRINGDISPLAY_HPP_
