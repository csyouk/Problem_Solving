//
//  흥민이의 리스트 되돌리기.cpp
//  problem_solving
//
//  Created by youkchangsu on 2018. 7. 18..
//  Copyright © 2018년 ycs. All rights reserved.
//
//
//#include <stdio.h>
//
//struct Cmd{
//  char type;
//  int x,y;
//};
//
//struct Node{
//  int val;
//  Node * prev, * next;
//  Node(int n): val(n){
//    prev = next = NULL;
//  };
//};
//
//class DoublyLinkedList{
//public:
//  Node * head, * tail, *ptr;
//
//  DoublyLinkedList(int n){
//    head = new Node(-1);
//    ptr = head;
//    for (register int i=1; i< (n+1); i++) {
//      ptr->next = new Node(i);
//      ptr = ptr->next;
//    }
//    tail = new Node(-1);
//    ptr->next = tail;
//
//    ptr = head;
//    while (ptr) {
//      Node * tmp = ptr;
//      ptr = ptr->next;
//      ptr->prev = tmp;
//      if(ptr == tail)break;
//    }
//  }
//
//  void insert(char cmd, int x, int y){
//    // delete first
//    ptr = head;
//    while (ptr->val != x) {
//      ptr = ptr->next;
//    }
//    Node * tmp = ptr;
//    ptr->prev->next = tmp->next;
//    ptr->next->prev = tmp->prev;
//    tmp->prev = tmp->next = NULL;
//
//    // now insert left
//    ptr = head;
//    while (ptr->val != y) {
//      ptr = ptr->next;
//    }
//    if(cmd == 'B'){
//      ptr = ptr->next;
//    }
//    ptr->prev->next = tmp;
//    tmp->prev = ptr->prev;
//    ptr->prev = tmp;
//    tmp->next = ptr;
//  }
//
//  int find(){
//    int cnt = 0;
//    ptr = head;
//    int preVal;
//    while (ptr) {
//      preVal = ptr->val;
//      ptr = ptr->next;
//      if(ptr==NULL) break;
//      if(preVal > ptr->val) cnt++;
//    }
//    return cnt -1;
//  }
//};
//
//int main(void){
//
//  DoublyLinkedList dll(2);
//
//  int T, t=1;
//  scanf("%d", &T);
//  while (T--) {
//    int N,M;
//    scanf("%d %d", &N, &M);
//    DoublyLinkedList * dll = new DoublyLinkedList(N);
//    for (register int i=0; i<M; i++) {
//      char cmd; int X, Y;
//      scanf(" %c %d %d", &cmd, &X, &Y);
//      dll->insert(cmd, X, Y);
//   }
//
//    printf("#%d %d\n", t++, dll->find());
//  }
//
//  return 0;
//}



#include <stdio.h>
//500000
#define MAX (10)

int tmp[MAX];

struct Node{
  int prev, next;
} node[MAX];

void insertL(int x, int y){
  if (node[x].next == y) return;
  int prev_x = node[x].prev, prev_y = node[y].prev, next_x = node[x].next;
  node[next_x].prev = prev_x;
  node[prev_x].next = next_x;
  node[x].prev = prev_y;
  node[x].next = y;
  node[y].prev = x;
  node[prev_y].next = x;
}
void insertR(int x, int y){
  if (node[x].prev == y) return;
  int prev_x = node[x].prev, next_x = node[x].next, next_y = node[y].next;
  node[next_x].prev = prev_x;
  node[prev_x].next = next_x;
  node[x].prev = y;
  node[x].next = next_y;
  node[y].next = x;
  node[next_y].prev = x;
}

int main(void){
  int T, t=1;
  scanf("%d", &T);
  while (T--) {
    int N,M;
    scanf("%d %d", &N, &M);
    node[0].next = 1;
    node[N+1].prev = N;
    for (register int i=1; i<(N+1); i++) {
      node[i].prev = i-1; node[i].next = i+1;
    }
    
    
    for (register int i=0; i<M; i++) {
      char cmd; int X, Y;
      scanf(" %c %d %d", &cmd, &X, &Y);
      if(cmd == 'A'){ insertL(X,Y); }
      else {          insertR(X, Y); }
      
    }
    // case 1
    int len = 0;
    int x = node[0].next;
    for (int i = 1; i < N+1; i++) {
      if (len == 0 || tmp[len - 1] < x) tmp[len++] = x;
      else {
        int low = 0;
        int high = len - 1;
        while (low <= high) {
          int mid = (low + high) / 2;
          if (low == high) {
            tmp[low] = x;
            break;
          }
          else if (tmp[mid] < x) low = mid + 1;
          else high = mid;
        }
      }
      x = node[x].next;
    }
    printf("#%d %d\n", t++, N - len);
    
    // case 2
//    int cnt = 0;
//    int idx =node[0].next;
//    while (node[idx].next != N+1) {
//      int backIdx = idx;
//      idx = node[idx].next;
//
//      if(backIdx > idx) {
//        cnt++;
//      }
//
//    }
//    printf("\n#%d %d\n", t++, cnt);
    
    
  }
  return 0;
}


//1
//6 5
//A 2 1
//A 3 2
//A 4 3
//A 5 4
//A 6 5
//


