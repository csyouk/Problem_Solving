////
////  중위순회.cpp
////  codexpert
////
////  Created by youkchangsu on 2018. 5. 5..
////  Copyright © 2018년 youkchangsu. All rights reserved.
////
//
//#include <iostream>
//#include <stdio.h>
//using namespace std;
//#define ROOT 1
//struct Node{
//  char ch;
//  int l, r;
//};
//
//Node Tree[100];
//
//void Init(int n){
//  for (int i=0; i<100; i++)
//    Tree[i].ch = Tree[i].l = Tree[i].r = 0;
//}
//
//void MakeTree(int n){
//  int id;
//  char tmp, ch;
//  while (n--) {
//    scanf("%d %c%c", &id, &ch, &tmp);
//    Tree[id].ch = ch;
//    if(tmp == ' ') scanf("%d%c", &Tree[id].l, &tmp);
//    if(tmp == ' ')scanf("%d", &Tree[id].r);
//    
//  }
//}
//
//void InOrderTraversal(int n){
//  if(Tree[n].ch == 0) return;
//  InOrderTraversal(Tree[n].l);
//  cout << Tree[n].ch;
//  InOrderTraversal(Tree[n].r);
//}
//
//int main(void){
//  freopen("/Users/youk/workspace/scsa/codexpert/codexpert/input.txt", "r", stdin);
//  for (int t = 1 ; t < 11; t++) {
//    int N;
//    cin >> N;
//    Init(N);
//    MakeTree(N);
//    cout << "#" << t << " ";
//    InOrderTraversal(ROOT);
//    cout << endl;
//  }
//  
//  return 0;
//}
