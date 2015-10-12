#ifndef STUD_String_H
#define STUD_String_H

#include <cstring>

#include <initializer_list>
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
    explicit string(const char* raw_string, size_t length) : std::string(raw_string, length) {}
    explicit string(size_t to_fill, char character) : std::string(to_fill, character) {}
    explicit string(const std::string& std_string) : std::string(std_string) {}
    explicit string(const std::string& std_string, size_t position,
                    size_t length = std::string::npos)
            : std::string(std_string, position, length) {}
    explicit string(std::initializer_list<char> il) : std::string(il) {}
    template <class InputIterator>
    explicit string(InputIterator first, InputIterator last)
            : std::string(first, last) {}
};

} // namespace stud

#endif // STUD_String_H
