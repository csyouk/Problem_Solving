//
//  키로거.cpp
//  problem_solving
//
//  Created by youkchangsu on 2018. 7. 23..
//  Copyright © 2018년 ycs. All rights reserved.
//
//
//#include <stdio.h>
//#define NULL (void *)0
//struct Node{
//  char c;
//  Node * prev, * next;
//  Node(char _c){c = _c; prev = next = 0;}
//  Node(char _c, Node * p, Node * n){
//    c = _c; prev = p; next = n;
//  }
//};
//
//class DLL{
//public:
//  Node * head, * tail, * cur;
//  int size;
//  DLL(){
//    cur = head = tail = new Node('\0', 0, 0);
//    size=0;
//  }
//  
//  void left(){
//    if(cur == head) return;
//    cur = cur->prev;
//  }
//  
//  void right(){
//    if(cur == tail) return;
//    cur = cur->next;
//  }
//  
//  void insert(char ch){
//    Node * tmp = new Node(ch, cur->prev, cur);
//    if(!size){
//      head = tmp;
//    } else {
//      cur->prev->next = tmp;
//      
//    }
//    cur->prev = tmp;
//    if(cur != tail)cur = cur->next;
//    size++;
//  }
//  
//  void remove(){
//    Node * del = cur;
//    if(cur->prev == head){
//      head = cur;
//      cur->prev = 0;
//    }
//    else{
//      cur->prev->prev->next = cur;
//      cur->prev = cur->prev->prev;
//    }
//    size--;
//    delete del;
//  }
//  
//  void print(){
//    cur = head;
//    while (cur != NULL) {
//      printf("%c", cur->c);
//      cur = cur->next;
//    }
//    printf("\n");
//  }
//};
//
//int main(void){
//  freopen("/Users/youk/workspace/Problem_Solving/problem_solving/problem_solving/in.txt", "r", stdin);
//  int T;
//  scanf("%d", &T);
////  while (T--) {
//  
//    char ch; scanf("%c", &ch);
//    
//    while (ch == '\n') {
//      DLL * dll = new DLL();
//      char c;
//      scanf("%c", &c);
//      while (c != '\n') {
//        switch (c) {
//          case '<':
//            dll->left();
//            break;
//          case '>':
//            dll->right();
//            break;
//          case '-':
//            dll->remove();
//            break;
//          default:
//            dll->insert(c);
//            break;
//        }
//        scanf("%c", &c);
//        
//      }
//      dll->print();
//      T--;
//      if(!T) break;
//    }
//    
////  }
//  
//  return 0;
//}



