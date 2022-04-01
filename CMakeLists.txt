cmake_minimum_required(VERSION 3.14)

project(inmemory_dictionary)

# C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# include src/
add_subdirectory(src/)

# Enable testing
add_executable(inmemory_dictionary_tests "")
target_sources(inmemory_dictionary_tests
	PRIVATE
		test/InMemory_dictionary_test.cpp
)

find_package(GTest CONFIG REQUIRED)

enable_testing()

target_link_libraries(inmemory_dictionary_tests
  	PRIVATE
	DictionaryCore
	GTest::gtest
	GTest::gtest_main
)

add_test(
  	NAME inmemory_dictionary_tests
  	COMMAND $<TARGET_FILE:inmemory_dictionary_tests>
)