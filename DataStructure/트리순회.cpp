////
////  트리순회.cpp
////  DataStructure
////
////  Created by youkchangsu on 2018. 5. 14..
////  Copyright © 2018년 youkchangsu. All rights reserved.
////
//
//#include <stdio.h>
//
//struct Node{
//  char l, r;
//};
//
//Node tree[256];
//
//void preorder(char root){
//  if(root == '.') return;
//  printf("%c", root);
//  preorder(tree[root].l);
//  preorder(tree[root].r);
//}
//void inorder(char root){
//  if(root == '.') return;
//  inorder(tree[root].l);
//  printf("%c", root);
//  inorder(tree[root].r);
//}
//void postorder(char root){
//  if(root == '.') return;
//  postorder(tree[root].l);
//  postorder(tree[root].r);
//  printf("%c", root);
//}
//
//int main(void)
//{
//  int N;
////  freopen("/Users/youk/workspace/scsa/DataStructure/DataStructure/input.txt", "r", stdin);
//  scanf("%d", &N);
//  
//  for (int i=0; i<N; i++) {
//    char id;
//    scanf(" %c", &id);
//    scanf(" %c %c", &tree[id].l, &tree[id].r);
//  }
//  preorder('A');
//  printf("\n");
//  inorder('A');
//  printf("\n");
//  postorder('A');
//  
//  return 0;
//}
