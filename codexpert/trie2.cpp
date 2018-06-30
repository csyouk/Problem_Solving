////
////  trie2.cpp
////  codexpert
////
////  Created by youkchangsu on 2018. 6. 13..
////  Copyright © 2018년 youkchangsu. All rights reserved.
////
//
//#include <stdio.h>
//#include <cstring>
//using namespace std;
//#define toNumber(X) ((X)-'A')
//
//const int ALPHABET = 26;
//
//struct TrieNode{
//  bool terminal;
//  TrieNode * children[ALPHABET];
//  TrieNode():terminal(false){
//    memset(children,0,sizeof(children));
//  }
//  ~TrieNode(){
//    for(int i=0;i<ALPHABET;i++)
//      if(children[i])
//        delete children[i];
//  }
//  void insert(const char * key){
//    if(*key == 0){
//      terminal = true;
//    }else{
//      int next = toNumber(*key);
//      if(children[next]==NULL)
//        children[next] = new TrieNode();
//      children[next]->insert(key+1);
//    }
//  }
//  TrieNode * find(const char * key){
//    if(*key==0) return this;
//    int next = toNumber(*key);
//    if(children[next] == NULL) return NULL;
//    return children[next]->find(key+1);
//  }
//};
//
//int main(void){
//  
//  TrieNode * trie = new TrieNode();
//  trie->insert("HELLO");
//  trie->insert("HELLOWORLD");
//  if(trie->find("HELLO"))
//    printf("exist");
//  if(trie->find("HELLOWORLD"))
//    printf("exist");
//  if(trie->find("HELWORLD"))
//    printf("exist");
//  return 0;
//}
