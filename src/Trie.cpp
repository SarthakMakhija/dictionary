#include "Trie.h"

namespace dictionary {
    namespace inmem {
        Trie::Trie() {
            this->root = new TrieNode();
        }

        void Trie::add(std::string word) {
            this->root->add(word);
        }

        bool Trie::contains(std::string word) {
            return this->root->contains(word);
        }

        bool Trie::containsPrefix(std::string prefix) {
            return this->root->containsPrefix(prefix);
        }
    }
}