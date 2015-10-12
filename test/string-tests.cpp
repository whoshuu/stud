#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "stud/string.h"


TEST_CASE("Default constructor") {
    REQUIRE(stud::string() == std::string());
}

TEST_CASE("Copy constructor") {
    stud::string s("Hello world");
    REQUIRE(stud::string(s) == std::string("Hello world"));
}

TEST_CASE("Move constructor") {
    REQUIRE(stud::string(stud::string("Hello world")) == std::string("Hello world"));
}

TEST_CASE("Copy assignment") {
    stud::string s("Hello world");
    stud::string s2 = s;
    REQUIRE(s2 == std::string("Hello world"));
}

TEST_CASE("Move assignment") {
    stud::string s = stud::string("Hello world");
    REQUIRE(s == std::string("Hello world"));
}

TEST_CASE("Raw string constructor") {
    stud::string s("Hello world");
    REQUIRE(s == std::string("Hello world"));
}

TEST_CASE("Raw string constructor with length") {
    stud::string s("Hello world", 5);
    REQUIRE(s == std::string("Hello"));
}

TEST_CASE("Filled character constructor") {
    stud::string s(5, 'H');
    REQUIRE(s == std::string("HHHHH"));
}

TEST_CASE("String constructor") {
    stud::string s(std::string("Hello world"));
    REQUIRE(s == std::string("Hello world"));
}

TEST_CASE("String constructor with position and length") {
    stud::string s(std::string("Hello world"), 4, 3);
    REQUIRE(s == std::string("o w"));
}

TEST_CASE("Initializer list of characters constructor") {
    stud::string s{'H', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd'};
    REQUIRE(s == std::string("Hello world"));
}

TEST_CASE("Iterator constructor from string") {
    std::string s_from("Hello world");
    stud::string s(s_from.begin(), s_from.begin() + 5);
    REQUIRE(s == std::string("Hello"));
}
