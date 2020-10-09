#ifndef TURBOPASCAL_UTIL_H
#define TURBOPASCAL_UTIL_H

#include <string>
#include <algorithm>
#include <exception>

namespace Common {

const static std::string to_lower(std::string str) {
  std::transform(str.begin(), str.end(), str.begin(), ::tolower);
  return str;
}

const static std::string to_upper(std::string str) {
  std::transform(str.begin(), str.end(), str.begin(), ::toupper);
  return str;
}

struct Location {
  int line;
  int col;
};

class CompilerException : public std::exception {
 public:
  CompilerException( const Location &loc, std::string msg )
      : loc_(loc), msg_(msg) {}
    const char *what() const throw() override { return msg_.c_str(); }
    virtual Location loc() { return loc_; }
   private:
    std::string msg_;
    Location loc_;
  };

};
#endif //TURBOPASCAL_UTIL_H