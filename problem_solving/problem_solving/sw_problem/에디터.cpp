//
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//#define MAX 600000
//char str[   100000 + 10];
////char sol[   100000 + 10];
//
//
//struct Node {
//  char c;
//  Node * prev, *next;
//  Node(char _c, Node * p, Node * n) {
//    c = _c;
//    prev = p;
//    next = n;
//  }
//};
//class DLL {
//public:
//  Node * head;
//  Node * tail;
//  Node * cur;
//  int size;
//  DLL(int n, char * arr) {
//    size = 0;
//    cur = head = tail = new Node('\0', 0, 0);
//    for (int i = 0; i < n; i++) {
//      insert(arr[i]);
//    }
//  }
//
//  void execute(char type) {
//    switch (type) {
//      case 'L':
//        left();
//        break;
//      case 'D':
//        right();
//        break;
//      case 'B':
//        backspace();
//        break;
//      case 'P':
//        char ch;
//        scanf(" %c", &ch);
//        insert(ch);
//        break;
//      default:
//        break;
//    }
//  }
//  void left() {
//    if (cur != head) cur = cur->prev;
//  }
//  void right() {
//    if (cur != tail) cur = cur->next;
//  }
//  void backspace() {
//    if (cur == head) return;
//    Node * tmp = cur->prev;
//    if (cur->prev == head) {
//      head = cur;
//      cur->prev = 0;
//    }else{
//      cur->prev->prev->next = cur;
//      cur->prev = cur->prev->prev;
//
//    }
//    delete tmp;
//    size--;
//  }
//
//  void insert(char ch) {
//    if(size == MAX) return;
//    Node * tmp = new Node(ch, cur->prev, cur);
//    if(cur == head) head = tmp;
//    else cur->prev->next = tmp;
//    cur->prev = tmp;
//    size++;
//  }
//
//  void print() {
//    Node * ptr = head;
//    int i=0;
//    while (ptr != tail) {
//      printf("%c", ptr->c);
//      //str[i++] = ptr->c;
//      ptr = ptr->next;
//    }
//    printf("\n");
//  }
//};
//
//unsigned int strLen(char * ch) {
//  int cnt = 0;
//  while (*ch++) cnt++;
//  return cnt;
//}
//
//
//int main(void) {
//  int n;
//  freopen("/Users/youk/workspace/Problem_Solving/problem_solving/problem_solving/in.txt", "r", stdin);
//  scanf("%s", str);
//  scanf("%d", &n);
//
//  unsigned int len = strLen(str);
//  DLL dll(len, str);
//
//  while (n--) {
//    char cmd;
//    scanf("\n%c", &cmd);
//    dll.execute(cmd);
//  }
//
//  dll.print();
//
////  freopen("/Users/youk/workspace/Problem_Solving/problem_solving/problem_solving/sol.txt", "r", stdin);
////  scanf("%s", sol);
////  for (int i=0; i<len+2; i++) {
////    if(sol[i] != str[i]) printf("idx: %d >> sol : %c / my : %c\n", i, sol[i], str[i]);
////  }
//
//  return 0;
//}
//
