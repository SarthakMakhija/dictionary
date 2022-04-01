#ifndef _Trie_
#define _Trie_

#include <string>
#include "TrieNode.h"

namespace dictionary {
    namespace inmem {
        class Trie {
        private:
            TrieNode *root;

        public:
            Trie();

            void add(std::string word);

            bool contains(std::string word);

            bool containsPrefix(std::string prefix);
        };
    }
}
#endif