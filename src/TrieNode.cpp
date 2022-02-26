#include "TrieNode.h"

void TrieNode::add(std::string word) {
    TrieNode* current = this;
    for (auto &ch : word) {
        std::map<char, TrieNode*>::iterator iterator = current -> nodeByCharacter.find(ch);
        if (iterator == current -> nodeByCharacter.end()) { 
            current -> nodeByCharacter.insert(std::make_pair(ch, new TrieNode()));
        } 
        current = current -> nodeByCharacter.find(ch) -> second;
    }
    current -> endOfWord = true;
}

bool TrieNode::contains(std::string word) {
    TrieNode* current = this;
    for (auto &ch : word) {
        std::map<char, TrieNode*>::iterator iterator = current -> nodeByCharacter.find(ch);
        if (iterator == current -> nodeByCharacter.end()) { 
            return false;
        } 
        current = current -> nodeByCharacter.find(ch) -> second;
    }
    return current -> endOfWord == true;
}

bool TrieNode::containsPrefix(std::string prefix) {
    TrieNode* current = this;
    for (auto &ch : prefix) {
        std::map<char, TrieNode*>::iterator iterator = current -> nodeByCharacter.find(ch);
        if (iterator == current -> nodeByCharacter.end()) { 
            return false;
        } 
        current = current -> nodeByCharacter.find(ch) -> second;
    }
    return true;
}