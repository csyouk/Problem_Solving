////
////  11279.cpp
////  problem_solving
////
////  Created by youkchangsu on 09/10/2018.
////  Copyright © 2018 ycs. All rights reserved.
////
//
//
//#include <stdio.h>
//#define MAX_HEAP 100001
//
//int h[MAX_HEAP];
//int size;
//
//void heapify(int idx){
//  int large = idx;
//  int left = idx << 1;
//  int right = (idx << 1) + 1;
//  
//  if((left <= size) && (h[left] > h[large]))
//    large = left;
//  
//  if((right <= size) && (h[right] > h[large]))
//    large = right;
//  
//  if(large != idx){
//    int tmp = h[idx];
//    h[idx] = h[large];
//    h[large] = tmp;
//    heapify(large);
//  }
//}
//
//int del(){
//  int ret = h[1];
//  h[1] = h[size];
//  h[size] = 0; size--;
//  heapify(1);
//  return ret;
//}
//
//void insert(int e){
//  h[++size] = e;
//  
//  int ptr = size;
//  while (ptr) {
//    if(ptr==1) break;
//    if(h[ptr/2] < h[ptr]){
//      int tmp = h[ptr];
//      h[ptr] = h[ptr/2];
//      h[ptr/2] = tmp;
//      ptr /= 2;
//    } else break;
//  }
//}
//
//int main(void){
//  
//  int N, cmd;
//  
//  freopen("/Users/youk/workspace/Problem_Solving/problem_solving/problem_solving/in.txt", "r", stdin);
//  
//  scanf("%d", &N);
//  
//  for(int i=1; i<= N; i++) {
//    scanf("%d", &cmd);
//    if(!cmd){
//      if(size){
//        printf("%d\n", del());
//      }else{
//        printf("%d\n", 0);
//      }
//    }else insert(cmd);
//    
//  }
//  
//  return 0;
//}
