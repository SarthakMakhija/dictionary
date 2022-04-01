#include <gtest/gtest.h>
#include "../src/Trie.h"

using namespace dictionary::inmem;

TEST(InMemoryDictionary, ContainsAnAddedWord) {
    Trie* dictionary = new Trie();
    dictionary -> add("meet");
    dictionary -> add("memory");

    ASSERT_TRUE(dictionary -> contains("memory"));
}

TEST(InMemoryDictionary, DoesNotContainAWord) {
    Trie* dictionary = new Trie();
    dictionary -> add("meet");
    dictionary -> add("memory");

    ASSERT_FALSE(dictionary -> contains("market"));
}

TEST(InMemoryDictionary, ContainsAWordByPrefix) {
    Trie* dictionary = new Trie();
    dictionary -> add("meet");
    dictionary -> add("memory");

    ASSERT_TRUE(dictionary -> containsPrefix("me"));
}

TEST(InMemoryDictionary, DoesNotContainAWordByPrefix) {
    Trie* dictionary = new Trie();
    dictionary -> add("meet");
    dictionary -> add("memory");

    ASSERT_FALSE(dictionary -> containsPrefix("met"));
}