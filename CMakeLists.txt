cmake_minimum_required(VERSION 3.14)

project(dictionary)

# C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# include src/
add_subdirectory(src/)

# Enable testing
add_executable(dictionary_tests "")
target_sources(dictionary_tests
	PRIVATE	
	test/dictionary_test.cpp
)

find_package(GTest CONFIG REQUIRED)

enable_testing()

target_link_libraries(dictionary_tests
  	PRIVATE
	DictionaryCore
	GTest::gtest
	GTest::gtest_main
)

add_test(
  	NAME dictionary_tests
  	COMMAND $<TARGET_FILE:dictionary_tests>
)