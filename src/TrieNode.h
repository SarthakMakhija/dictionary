#ifndef _TrieNode_
#define _TrieNode_

#include <string>
#include <map>

class TrieNode {
    private:
    bool endOfWord;
    std::map<char, TrieNode*> nodeByCharacter;

    public:
    void add(std::string word);
    bool contains(std::string word);
    bool containsPrefix(std::string prefix);    
};
#endif