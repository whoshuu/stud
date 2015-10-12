#ifndef STUD_String_H
#define STUD_String_H

#include <string>


namespace stud {

class string : public std::string {
  public:
    string() = default;
    string(const string& rhs) = default;
    string(string&& rhs) = default;
    string& operator=(const string& rhs) = default;
    string& operator=(string&& rhs) = default;
    explicit string(const char* raw_string) : std::string(raw_string) {}
    explicit string(const std::string& std_string) : std::string(std_string) {}
};

} // namespace stud

#endif // STUD_String_H
