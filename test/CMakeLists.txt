macro(add_stud_test _TEST_NAME)
    add_executable(${_TEST_NAME}-tests
        ${_TEST_NAME}-tests.cpp)
    add_test(NAME stud-${_TEST_NAME}-tests COMMAND ${_TEST_NAME}-tests)
endmacro()

include_directories(
    ${STUD_INCLUDE_DIRS}
    ${CATCH_INCLUDE_DIRS})

add_stud_test(string)
