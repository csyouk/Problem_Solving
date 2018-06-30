//
//  이진검색트리.cpp
//  DataStructure
//
//  Created by youkchangsu on 2018. 5. 16..
//  Copyright © 2018년 youkchangsu. All rights reserved.
//

//#include <stdio.h>
//struct Node{
//  int l = 0, r = 0;
//};
//
//Node tree[1000001];
//void postorder(int node){
//  if(!node)return;
//  postorder(tree[node].l);
//  postorder(tree[node].r);
//  printf("%d\n", node);
//}
//int main(){
//  int root;
//  int val;
//  scanf("%d", &root);
//  
//  
//  while (scanf("%d", &val) != EOF) {
//    int node = root;
//    while (true) {
//      if(node < val){
//        if(tree[node].r != 0){
//          node = tree[node].r;
//        }
//        else{
//          tree[node].r = val;
//          break;
//        }
//      }else{
//        if(tree[node].l !=0){
//          node = tree[node].l;
//        }else{
//          tree[node].l = val;
//          break;
//        }
//      }
//    }
//  }
//  postorder(root);
//  return 0;
//}
