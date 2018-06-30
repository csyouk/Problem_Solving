////
////  trie.cpp
////  codexpert
////
////  Created by youkchangsu on 2018. 6. 8..
////  Copyright © 2018년 youkchangsu. All rights reserved.
////
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//#define ALPHABET 26
//#define toNumber(X) (X-'A')
//
//struct TrieNode{
//  TrieNode * children[ALPHABET];
//  bool terminal;
//  TrieNode() : terminal(false){
//    memset(children, 0, sizeof(children));
//  }
//  ~TrieNode(){
//    for(int i=0; i < ALPHABET; ++i){
//      if(children[i])
//        delete children[i];
//    }
//  }
//  
//  void insert(const char * key){
//    if(*key == 0){
//      terminal = true;
//    } else {
//      int next = toNumber(*key);
//      if(children[next] == NULL)
//        children[next] = new TrieNode();
//      children[next]->insert(key+1);
//    }
//  }
//  
//  TrieNode* find(const char * key){
//    if(*key==0) return this;
//    int next = toNumber(*key);
//    if(children[next] == NULL) return NULL;
//    return children[next]->find(key+1);
//  }
//};
//
//
//
//int main(void){
//  
//  TrieNode * trie = new TrieNode();
//  string strings[4] = {"HELLO", "HE", "HER", "HAS"};
//  for (int i=0; i<4; i++) {
//    trie->insert(strings[i].c_str());
//  }
//
//  string stringss[5] = {"HELLO", "HOBBY", "HER", "HAS", "HASH"};
//  for (int i=0; i<5; i++) {
//    if(trie->find(stringss[i].c_str()))
//      cout << stringss[i] << " exist." << endl;
//  }
//  
//  return 0;
//}
