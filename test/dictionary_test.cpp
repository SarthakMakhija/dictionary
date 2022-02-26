#include <gtest/gtest.h>
#include "../src/Trie.h"

TEST(Dictionary, ContainsAnAddedWord) {
    Trie* dictionary = new Trie();
    dictionary -> add("meet");
    dictionary -> add("memory");

    ASSERT_TRUE(dictionary -> contains("memory"));
}

TEST(Dictionary, DoesNotContainAWord) {
    Trie* dictionary = new Trie();
    dictionary -> add("meet");
    dictionary -> add("memory");

    ASSERT_FALSE(dictionary -> contains("market"));
}

TEST(Dictionary, ContainsAWordByPrefix) {
    Trie* dictionary = new Trie();
    dictionary -> add("meet");
    dictionary -> add("memory");

    ASSERT_TRUE(dictionary -> containsPrefix("me"));
}

TEST(Dictionary, DoesNotContainAWordByPrefix) {
    Trie* dictionary = new Trie();
    dictionary -> add("meet");
    dictionary -> add("memory");

    ASSERT_FALSE(dictionary -> containsPrefix("met"));
}