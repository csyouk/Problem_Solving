////
////  사칙연산.cpp
////
////  Created by youkchangsu on 2018. 5. 5..
////  Copyright © 2018년 youkchangsu. All rights reserved.
////
//
//#include <iostream>
//#define ROOT 1
//#define EMPTY 0.0
//using namespace std;
//
//struct Node{
//  char op;
//  int self;
//  int l, r;
//};
//
//Node Tree[1001];
//int sol;
//
//void Init(int n){
//  sol = 1;
//  for (int i=0; i<1001; i++){
//    Tree[i].op = 0;
//    Tree[i].self = Tree[i].l = Tree[i].r = -1;
//  }
//}
//
//void MakeTree(int n){
//  int id;
//  char tmp;
//  char str[6];
//  char * ops = "*/+-";
//  while (n--) {
//    scanf("%d %s%c", &id, str, &tmp);
//    switch (str[0]) {
//      case '*':
//      case '-':
//      case '+':
//      case '/':
//        Tree[id].op = str[0];
//        break;
//      default:
//        sscanf(str, "%d", &Tree[id].self);
//        break;
//    }
//    if(tmp == ' ') scanf("%d%c", &Tree[id].l, &tmp);
//    if(tmp == ' ') scanf("%d", &Tree[id].r);
//    if(Tree[id].l == -1 || Tree[id].r == -1){
//      for (int i=0; i<4; i++) {
//        if(ops[i] == Tree[id].op){
//          sol = 0;
//          break;
//        }
//      }
//      
//    }
//  }
//}
//
//float eval(float l, int op, float r){
//  switch ((char)op) {
//    case '*':
//      return l * r;
//    case '-':
//      return l - r;
//    case '+':
//      return l + r;
//    case '/':
//      return l / r;
//    default:
//      break;
//  }
//  return 1;
//}
//
//int validate(char x){
//  switch (x) {
//    case '*':
//    case '-':
//    case '+':
//    case '/':
//      return 0;
//    default:
//      return 1;
//  }
//}
//
//int PostOrderTraversal(int n){
//  if(Tree[n].l == EMPTY) {
//
//    return (Tree[n].self);
//  }
//  if(Tree[n].r == EMPTY) {
//
//    return (Tree[n].self);
//  }
//  int l = PostOrderTraversal(Tree[n].l);
//  int r = PostOrderTraversal(Tree[n].r);
//  int result =  eval(l, Tree[n].op, r);
//  return result;
//}
//
//int main(void){
//  freopen("/Users/youk/workspace/scsa/codexpert/codexpert/input.txt", "r", stdin);
//  for (int t = 1 ; t < 11; t++) {
//    int N;
//    cin >> N;
//    Init(N);
//    MakeTree(N);
////    PostOrderTraversal(ROOT);
//    cout << "#" << t << " " << sol << endl;
//  }
//
//  return 0;
//}
