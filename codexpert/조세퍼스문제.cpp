////
////  조세퍼스문제.cpp
////  codexpert
////
////  Created by youkchangsu on 2018. 5. 6..
////  Copyright © 2018년 youkchangsu. All rights reserved.
////
//
//#include <iostream>
//using namespace std;
//class Node{
//public:
//  int id;
//  Node * next;
//  Node(int id){
//    this->id = id;
//    this->next = NULL;
//  }
//  ~Node(){
//    cout << this->id;
//  }
//};
//
//Node * Head, * Tail;
//Node * Cur;
//Node * Prev;
//
//
//void Make(int n){
//  if(n < 1) return;
//  Head = new Node(1);
//  Tail = Head;
//  for (int i=2; i<n+1; ++i) {
//    Tail->next = new Node(i);
//    Tail = Tail->next;
//  }
//  Tail->next = Head;
//  Prev = Tail;
//}
//
//void Josephuse(int n, int _m){
//
//  int m;
//  Cur = Tail;
//  while(--n){
//    m = _m;
//
//    while (m--) {
//      Prev = Cur;
//      Cur = Cur->next;
//    }
//    Prev->next = Cur->next;
//    delete Cur;
//    cout <<", ";
//  }
//  Cur = Cur->next;
//  delete Cur;
//}
//
//int main(void){
//
//  int N,M;
//  cin >> N >> M;
//  Make(N);
//
//  cout << "<";
//  Josephuse(N,M);
//  cout << ">" << endl;
//
//  return 0;
//}


//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int m,n,x;
//vector<int> v;
//
//int main(void){
//
//  cin >> m>>n;
//  cout << "<";
//  
//  for (int i=1; i<=m; i++)
//    v.push_back(i);
//  
//  while (v.size() > 1) {
//    x+=n-1;
//    x%=v.size();
//    cout << v[x] << ",";
//    v.erase(v.begin() + x);
//  }
//  
//  x+= n-1;
//  x%=v.size();
//  cout << v[x] << ">";
//  return 0;
//}



